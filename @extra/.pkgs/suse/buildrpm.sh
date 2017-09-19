#!/bin/bash
set -e
_dir=`dirname "$(readlink -f "${0}")"`
_basedir=${_dir}
cd ${_basedir}
if [ -f ${_basedir}/0nyx*.rpm ]; then
    rm -f ${_basedir}/0nyx*.rpm
fi
if [ -f ${_basedir}/0nyx.spec ]; then
    rm -f ${_basedir}/0nyx.spec
fi
if [ -d ${_basedir}/0nyx ]; then
    rm -rf ${_basedir}/0nyx
fi
mkdir -p ${_basedir}/0nyx/usr/share/themes/0nyX
#creating the spec file:
cat <<\EOFALL> ${_basedir}/0nyx.spec
Buildroot: BUILDROOT
Name: 0nyx-theme
Version: 1.0
Release: 1
Summary: Everyday usable dark theme mainly made for Xfce, IceWM or Openbox.
License: CC-BY-SA_V4
Requires: unzip, curl, findutils
Provides: 0nyx-theme = %version, gnome-icon-theme
Obsoletes: phlat, 0nyx-theme <= %version
Recommends: gtk3-nocsd, libgtk-3-0 >= 3.20, gtk2-engine-mist, hicolor-icon-theme, qt5ct, libqt5-qtsvg, xfwm4, icewm, openbox, xfce4-notifyd, xfdashboard, onboard, audacious, qmmp, slim, albert
Group: System/GUI/Xfce
BuildArch: noarch

%define _rpmdir ../
%define _unpackaged_files_terminate_build 0
%define _source_payload w9.xzdio
%define _binary_payload w9.xzdio
%description
Plain and simple dark theme

%post
if [ -f /usr/share/themes/0nyX/files ];then
	for _file in $(cat /usr/share/themes/0nyX/files) ; do
		if [ -L $_file ]; then
			rm -fv "$_file"
		fi
		if [ -f $_file ]; then
			rm -fv "$_file"
		fi
	done
#dirs!
	rm -f /usr/share/themes/0nyX/files
#re-enable the overlay scrollbars
	sed -i '/^#0nyX$/,+1 d' /etc/environment
fi
#start here
_tmpdir="/tmp/0nyX.tmp"
if [ -d ${_tmpdir} ]; then
	rm -r ${_tmpdir}
fi
#dirs!
mkdir -p ${_tmpdir}/usr/share/themes
#downloading
cd /tmp
if type wget >/dev/null 2>&1; then
	wget -O /tmp/0nyX.zip https://codeload.github.com/sixsixfive/0nyX/zip/master
elif type curl >/dev/null 2>&1; then
	curl -o /tmp/0nyX.zip https://codeload.github.com/sixsixfive/0nyX/zip/master
fi
if [ -f ${_tmpdir}/../0nyX.zip ]; then
	if unzip -Z ${_tmpdir}/../0nyX.zip > /dev/null; then
		unzip ${_tmpdir}/../0nyX.zip -d ${_tmpdir}/usr/share/themes
		mv ${_tmpdir}/usr/share/themes/0nyX-master ${_tmpdir}/usr/share/themes/0nyX
	else
		printf "archive is corrupt - aborting!\n"
		exit 1
	fi
fi
###link all themes
if [ -d ${_tmpdir}/usr/share/themes/0nyX ]; then
#icewm theme
	mkdir -p ${_tmpdir}/usr/share/icewm/themes
	#ln -sf ../../themes/0nyX/@extra/appthemes/icewm/0nyX ${_tmpdir}/usr/share/icewm/themes/0nyX
	for _f in $(find ${_tmpdir}/usr/share/themes/0nyX/@extra/appthemes/icewm/ -mindepth 1 -type d|sed 's\^.*/\\g'); do
		ln -sf ../../themes/0nyX/@extra/appthemes/icewm/$_f ${_tmpdir}/usr/share/icewm/themes/$_f
	done
#plank theme
	mkdir -p ${_tmpdir}/usr/share/plank/themes
	for _f in $(find ${_tmpdir}/usr/share/themes/0nyX/@extra/appthemes/plank/ -mindepth 1 -type d|sed 's\^.*/\\g'); do
		ln -sf ../../themes/0nyX/@extra/appthemes/plank/$_f ${_tmpdir}/usr/share/plank/themes/$_f
	done
#onboard
	mkdir -p ${_tmpdir}/usr/share/onboard/themes
	for _f in $(find ${_tmpdir}/usr/share/themes/0nyX/@extra/appthemes/onboard -type f|sed 's\^.*/\\g'); do
		ln -sf ../../themes/0nyX/@extra/appthemes/onboard/$_f ${_tmpdir}/usr/share/onboard/themes/$_f
	done
#SLiM
	mkdir -p ${_tmpdir}/usr/share/slim/themes
	for _f in $(find ${_tmpdir}/usr/share/themes/0nyX/@extra/appthemes/SLiM -mindepth 1 -type d|sed 's\^.*/\\g'); do
		ln -sf ../../themes/0nyX/@extra/appthemes/SLiM/$_f ${_tmpdir}/usr/share/slim/themes/$_f
	done
#qt5ct
	mkdir -p ${_tmpdir}/usr/share/qt5ct/colors ${_tmpdir}/usr/share/qt5ct/qss
	ln -sf ../../themes/0nyX/@extra/appthemes/qt5ct/0nyX/colors/0nyX.conf ${_tmpdir}/usr/share/qt5ct/colors
	for _f in $(find ${_tmpdir}/usr/share/themes/0nyX/@extra/appthemes/qt5ct/0nyX/qss -type f|sed 's\^.*/\\g'); do
		ln -sf ../../themes/0nyX/@extra/appthemes/qt5ct/0nyX/qss/$_f ${_tmpdir}/usr/share/qt5ct/qss/$_f
	done
#albert(app does not support symlinks!)
	mkdir -p ${_tmpdir}/usr/share/albert/themes
	cp ${_tmpdir}/usr/share/themes/0nyX/@extra/appthemes/albert/0nyX/0nyX.qss ${_tmpdir}/usr/share/albert/themes/0nyX.qss
#subthemes theme
	#ln -sf 0nyX/@extra/subthemes/0nyX-hidpi ${_tmpdir}/usr/share/themes/0nyX-HiDPI
	#ln -sf 0nyX/@extra/subthemes/0nyX-highcontrast ${_tmpdir}/usr/share/themes/0nyX-highcontrast
	#ln -sf 0nyX/@extra/subthemes/0nyX-lighter ${_tmpdir}/usr/share/themes/0nyX-lighter
#icon theme
	mkdir -p ${_tmpdir}/usr/share/icons
	ln -sf ../themes/0nyX/@extra/icons/0nyX ${_tmpdir}/usr/share/icons/0nyX
#WinAMP theme
	mkdir -p ${_tmpdir}/usr/share/audacious/Skins
	ln -sf ../../themes/0nyX/@extra/appthemes/WinAMP/0nyX ${_tmpdir}/usr/share/audacious/Skins/0nyX
	mkdir -p  ${_tmpdir}/usr/share/qmmp/skins
	ln -sf ../../themes/0nyX/@extra/appthemes/WinAMP/0nyX ${_tmpdir}/usr/share/qmmp/skins/0nyX
#no overlay scrollbars
#	mkdir -p ${_tmpdir}/etc/X11/Xsession.d
#	printf "export GTK_OVERLAY_SCROLLING=0\nexport LIBOVERLAY_SCROLLBAR=0\n" > ${_tmpdir}/etc/X11/Xsession.d/98_0nyX
#xsession.d was a good idea however it wont work with root apps like synaptic so use /etc/environment instead
	printf '\n#0nyX\nGTK_OVERLAY_SCROLLING=0\n#0nyX\nLIBOVERLAY_SCROLLBAR=0'>> /etc/environment
#create a file list!
	find ${_tmpdir} > ${_tmpdir}/usr/share/themes/0nyX/files
	sed -i 's|^/tmp/0nyX.tmp||g' ${_tmpdir}/usr/share/themes/0nyX/files
	chmod -R 755 ${_tmpdir}
	cp -R ${_tmpdir}/* /
fi

%preun

for _file in $(cat /usr/share/themes/0nyX/files) ; do
  if [ -L $_file ]; then
    rm -f "$_file"
  fi
  if [ -f $_file ]; then
    rm -f "$_file"
  fi
done
#dirs!
#find /usr/share/themes/0nyX -type d -empty -exec rmdir -pv --ignore-fail-on-non-empty {} \;
rm -f /usr/share/themes/0nyX/files
#re-enable the overlay scrollbars
sed -i '/^#0nyX$/,+1 d' /etc/environment
rm -rf /usr/share/themes/0nyX


%files
%defattr(-,root,root,-)
%dir /usr/share/themes/0nyX
EOFALL

rpmbuild -bb --buildroot=${_basedir}/0nyx ${_basedir}/0nyx.spec
if [ -f ${_basedir}/../noarch/0nyx*.rpm ]; then
    mv ${_basedir}/../noarch/0nyx*.rpm ${_basedir}
    rm -rf ${_basedir}/../noarch ${_basedir}/0nyx.spec
fi
