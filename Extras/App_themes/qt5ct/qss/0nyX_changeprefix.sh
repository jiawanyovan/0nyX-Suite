#!/bin/sh
set -e
if type yad &>/dev/null; then
	printf "\n"
else
	printf "missing yad\n"
	exit 1
fi
basedir="$(dirname "$(readlink -f "${0}")")"
cd "$basedir"
_prefix=$(yad --title="Set Prefix" --on-top --center --text="Change Prefix" --image="dialog-question" --entry --entry-label="Prefix:" --entry-text="/usr" --button="gtk-ok:0")
for f in $basedir/*.qss; do sed -i 's|url("/usr|url("'$(echo $_prefix)'|g' $f;done
sed -i 's|/usr|'$(echo $_prefix)'|g' 0nyX_changeprefix.sh
