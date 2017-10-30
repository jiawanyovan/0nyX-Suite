#!/bin/sh
set -e
if [ ! -t 0 ]; then
	x-terminal-emulator -e "$0"
	exit 0
fi
basedir="$(dirname "$(readlink -f "${0}")")"
cd "$basedir"
if [ ! -f "$basedir"/setxfcetheme.sh ]; then
	printf "wrong dir!\n"
	exit 1
fi
### set theme
if [ -f $HOME/.gtkrc-2.0 ]; then
	yad --title "Warning!" --text="Custom GTK2 settings are set!" --image="dialog-warning" --button="gtk-ok:0"
fi
if [ -f $HOME/.config/gtk-3.0/settings.ini ]; then
	yad --title "Warning!" --text="Custom GTK3 settings are set!" --image="dialog-warning" --button="gtk-ok:0"
fi
if type xfconf-query >/dev/null 2>&1; then
	xfconf-query -c xsettings -p /Net/ThemeName -s "0nyX" || true
	xfconf-query -c xsettings -p /Net/IconThemeName -s "0nyX" || true
	xfconf-query -c xsettings -p /Gtk/ButtonImages -s false || true
	xfconf-query -c xsettings -p /Gtk/MenuImages -s true || true
	xfconf-query -c xsettings -p /Gtk/CursorThemeName -s "0nyX" || true
	xfconf-query -c xsettings -p /Gtk/ToolbarIconSize -s "3" || true
	xfconf-query -c xsettings -p /Gtk/MenuImages -s true || true
	xfconf-query -c xsettings -p /Gtk/IconSizes -s 'gtk-menu=16,16:gtk-small-toolbar=24,24:gtk-large-toolbar=24,24:gtk-dnd=48,48:gtk-button=24,24:gtk-dialog=48,48:gtk-panel=24,24:panel-applications-menu=24,24:panel-tasklist-menu=32,32:panel-menu=24,24:panel-directory-menu=24,24:panel-launcher-menu=24,24:panel-window-menu=24,24:panel-menu-bar=24,24:ev-icon-size-annot-window=16,16:webkit-media-button-size=24,24'
	xfconf-query -c xsettings -p /Gtk/ColorPalette -s 'black:#252424:#323131:#F1F2F2:white:#BB2847:#BB2835:#BB286A:#BB28B0:#8428BB:#285CBB:#288ABB:#28B6BB:#28BB70:#5DBB28:#A2BB28:#BABB28:#BB9628:#BB6F28:#BB4E28'
	xfconf-query -c xfwm4 -p /general/theme -s "0nyX" || true
	xfconf-query -c xfce4-notifyd -p /theme -s "0nyX" || true
	xfconf-query -c xfce4-session -p /splash/Engine -s "balou" || true
	xfconf-query -c xfce4-session -p /splash/engines/balou/Theme -s "0nyX" || true
	xfconf-query -c xfdashboard -p /theme -s "0nyX" || true
fi
printf "\ndone\n"
sh "$basedir"/setgsettings.sh
