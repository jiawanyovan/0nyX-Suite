#!/bin/sh
if [ ! -t 0 ]; then
	x-terminal-emulator -e "$0"
	exit 0
fi
basedir=`dirname "$(readlink -f "${0}")"`
cd ${basedir}
#qss
sh @extra/appthemes/qt5ct/0nyX/qss/maketheme.sh
#icons
#create plain svgs
#cd $basedir/@extra/icons/0nyX/symbolic
#for f in $(find . -type f -name "*.svg"); do 
#	inkscape --export-plain-svg=$f --vacuum-defs --export-text-to-path --no-convert-text-baseline-spacing --without-gui $f
#done
#cd $basedir/@extra/0nyX-icons
#add a padding for bigger icons!
##22px fake

##symbolic icons!
cd $basedir/@extra/icons/0nyX/symbolic
if [ -f "xfce_badge.svg" ]; then
	rm -f *-symbolic.svg
	for f in $(ls -L); do
		if [ ! -f "$f-symbolic" ];then
			ln -s $f $(echo $f|sed 's/.svg$/-symbolic.svg/g')
		fi
	done
	for f2 in $(ls -L|grep -symbolic.svg); do
		if [ ! -f "$(echo $f2|sed 's/-symbolic.svg$/.svg$/g')" ];then
			rm $f2
		fi
	done
fi
cd $basedir
if [ -d $basedir/@extra/icons/0nyX/symbolic-22 ]; then
	rm -rfv $basedir/@extra/icons/0nyX/symbolic-22
fi
cp -R $basedir/@extra/icons/0nyX/symbolic $basedir/@extra/icons/0nyX/symbolic-22
cd $basedir/@extra/icons/0nyX/symbolic-22
for f in $(find . -type f -name "*.svg");do 
	sed -i 's/viewBox="0 0 16 16"/viewBox="-3 -3 22 22"/' $f
done
cd $basedir
##24px fake
if [ -d $basedir/@extra/icons/0nyX/symbolic-24 ]; then
	rm -rfv $basedir/@extra/icons/0nyX/symbolic-24
fi
cp -R $basedir/@extra/icons/0nyX/symbolic $basedir/@extra/icons/0nyX/symbolic-24
cd $basedir/@extra/icons/0nyX/symbolic-24
for f in $(find . -type f -name "*.svg");do 
	sed -i 's/viewBox="0 0 16 16"/viewBox="-4 -4 24 24"/' $f
done
cd $basedir
##32px fake
if [ -d $basedir/@extra/icons/0nyX/symbolic-32 ]; then
	rm -rfv $basedir/@extra/icons/0nyX/symbolic-32
fi
cp -R $basedir/@extra/icons/0nyX/symbolic $basedir/@extra/icons/0nyX/symbolic-32
cd $basedir/@extra/icons/0nyX/symbolic-32
for f in $(find . -type f -name "*.svg");do 
	sed -i 's/viewBox="0 0 16 16"/viewBox="0 0 16 16" width="32" height="32"/' $f
done
cd $basedir
#emblems
if [ -d $basedir/@extra/icons/0nyX/emblems-24 ]; then
	rm -rfv $basedir/@extra/icons/0nyX/emblems-24
fi
cp -R $basedir/@extra/icons/0nyX/emblems $basedir/@extra/icons/0nyX/emblems-24
cd $basedir/@extra/icons/0nyX/emblems-24
for f in $(find . -type f -name "*.svg");do 
	sed -i 's/viewBox="0 0 16 16"/viewBox="-4 -4 24 24"/' $f
done
cd $basedir
#no 8px emblems!
for file in $(ls $basedir/@extra/icons/0nyX/emblems);do 
	cd $basedir/@extra/icons/0nyX/emblems-8
	ln -s emblem-none.svg $file
done
cd $basedir
##32px emblemsfake
if [ -d $basedir/@extra/icons/0nyX/emblems-32 ]; then
	rm -rfv $basedir/@extra/icons/0nyX/emblems-32
fi
cp -R $basedir/@extra/icons/0nyX/emblems $basedir/@extra/icons/0nyX/emblems-32
cd $basedir/@extra/icons/0nyX/emblems-32
for f in $(find . -type f -name "*.svg");do 
	sed -i 's/viewBox="0 0 16 16"/viewBox="0 0 16 16" width="32" height="32"/' $f
done
cd $basedir
#gtk-update-icon-cache -f --include-image-data $basedir/@extra/icons/0nyX/
gtk-update-icon-cache -f $basedir/@extra/icons/0nyX

###Inverted
#if [ -d $basedir/@extra/icons/0nyX-lighter ];then
	#rm -rf $basedir/@extra/icons/0nyX-lighter
#fi
#cp -R $basedir/@extra/icons/0nyX $basedir/@extra/icons/0nyX-lighter
#sed -i 's/^Name=0nyX$/Name=0nyX-lighter/;s/Example=face-wink/Example=face-sad/' $basedir/@extra/icons/0nyX-lighter/index.theme
###invert theme
#find "$basedir/@extra/icons/0nyX-lighter" -type f -exec sed -i 's/#333333/#fafafa/g' {} \;
#find "$basedir/@extra/icons/0nyX-lighter" -type f -exec sed -i 's/#f1f2f2/#313232/g' {} \;
#gtk-update-icon-cache -f --include-image-data $basedir/@extra/icons/0nyX-lighter/
#rm -rf .git
#git init
git add .
LANG=C
MESSAGE="$(date)"
git commit -m "$MESSAGE"
#git remote add origin https://github.com/sixsixfive/0nyX.git
#git push -u --force origin master
git push origin master
printf "\n...done\n"
exit
