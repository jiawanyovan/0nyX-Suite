#!/bin/sh
if [ ! -t 0 ]; then
	x-terminal-emulator -e "$0"
	exit 0
fi
basedir=`dirname "$(readlink -f "${0}")"`
cd ${basedir}
#rm -rf .git
#git init
git add .
LANG=C
MESSAGE="$(date)"
git commit -m "$MESSAGE"
#git remote add origin https://github.com/sixsixfive/0nyX-theme-suite.git
#git push -u --force origin master
git push origin master --force
printf "\n...done\n"
exit
