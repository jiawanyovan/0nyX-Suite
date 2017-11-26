#!/bin/sh
set -ex
if type inkscape &>/dev/null; then
	printf "\n"
else
	printf "missing inkscape\n"
	exit 1
fi
_basedir="$(dirname "$(readlink -f "${0}")")"
cd "$_basedir"
for _f in $(find "$_basedir" -mindepth 1 -type f -name '*.svg');do
	cp $_f $(echo $_f|sed 's/.svg$/_16x16.svg/g')
done
for _l in $(find "$_basedir" -mindepth 1 -type l -name '*.svg');do
	ln -sfv $(readlink $_l|sed 's/\..*$/_16x16.svg/g') $(echo $_l|sed 's/\..*$/_16x16.svg/g')
done
if [ ! -d "../0nyX/icons" ]; then
	mkdir -p "../0nyX/icons"
fi
for _p in $(find "$_basedir" -mindepth 1  -type f -name "*_16x16.svg"); do
	inkscape --no-convert-text-baseline-spacing -z -w 16 -h 16 -e "$(echo $_p|sed 's/_16x16.svg/_16x16.png/g')" "$_p"
	inkscape --no-convert-text-baseline-spacing -z -w 32 -h 32 -e "$(echo $_p|sed 's/_16x16.svg/_32x32.png/g')" "$_p"

done
for _l in $(find "$_basedir" -mindepth 1  -type l -name "*_16x16.svg"); do
	ln -s "$(readlink $_l|sed 's#.svg$#.png#')" "$(ls $_l|sed 's#.svg$#.png#')"
	ln -s "$(readlink $_l|sed 's#_16x16.svg$#_32x32.png#')" "$(ls $_l|sed 's#_16x16.svg$#_32x32.png#')"
done
mv *.png ../0nyX/icons
rm -f *_16x16.svg

