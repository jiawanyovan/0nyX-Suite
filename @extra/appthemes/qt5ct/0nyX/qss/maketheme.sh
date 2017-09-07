#!/bin/sh
#set -xe
#if [ ! -t 0 ]; then
#	x-terminal-emulator -e "$0"
#	exit 0
#fi
basedir="$(dirname "$(readlink -f "${0}")")"
cd "$basedir"
rm -vf "$basedir"/0nyX_QGtkStyle.qss
for _file in $(find $basedir/DEV -mindepth 1); do
	printf "\n/*$(echo $_file|sed 's\^.*/\\')*/\n\n" >> "$basedir"/0nyX_QGtkStyle.qss
	cat "$_file" >> "$basedir"/0nyX_QGtkStyle.qss
done
rm -vf "$basedir"/0nyX_QFusionStyle.qss
for _file in $(find $basedir/DEV-full -mindepth 1); do
	printf "\n/*$(echo $_file|sed 's\^.*/\\')*/\n\n" >> "$basedir"/0nyX_QFusionStyle.qss
	cat "$_file" >> "$basedir"/0nyX_QFusionStyle.qss
done
	
