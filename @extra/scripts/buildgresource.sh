#!/bin/sh
# Creates a gio gresource theme from the current 0nyx(GTK3)-theme
# to make it more resource efficient:
# https://developer.gnome.org/gio/2.32/gio-GResource.html
set -e
if [ ! -t 0 ]; then
	x-terminal-emulator -e "$0"
	exit 0
fi
if type glib-compile-resources >/dev/null 2>&1; then
	printf "glib-compile-resources found\n"
else
	printf "glib-compile-resources not found - Aborting!\n"
	exit 1
fi
_basethemedir="$(dirname "$(readlink -f "${0}")")/../.."
build_gresource() {
	cd "$_basethemedir"
	mv gtk-3.0 .gtk-3.0-src
	mkdir gtk-3.0
	cp .gtk-3.0-src/gtk.css gtk-3.0/gtk-main.css
	cat << \EOF > gtk-3.0/gtk.gresource.xml
<?xml version="1.0" encoding="UTF-8"?>
<gresources>
<gresource prefix="/org/gnome/">
EOF

# add all the images
	for _imgs in $(find ./images/gtk-3.0 -maxdepth 1 -wholename "./*.svg"|sed "s|^\./|../../|"); do
		printf "<file preprocess=\x22to-pixdata\x22>$img</file>\n" >> gtk-3.0/gtk.gresource.xml
	done

# add all the css files
	for _imgs in $(find ./gtk-3.0 -mindepth 1 -maxdepth 2 -wholename "./*.css"| sed "s|^\./gtk-3.0/||"); do
		printf "<file preprocess=\x22to-pixdata\x22>$img</file>\n" >> gtk-3.0/gtk.gresource.xml
	done
#build them theme
glib-compile-resources gtk-3.0/gtk.gresource.xml
printf "@import url("resource:///org/gnome//gtk-main.css");\n" >> gtk-3.0/gtk.css
}
printf "\n\ndone\n"