0nyX is a simple, fast and daily usable theme suite that doesn't get in your way. Its mainly made for [Xfce](https://xfce.org), [IceWM](http://www.icewm.org) or Openbox however there is some limited support for MATE/GNOME/Cinnamon-Apps

# Contents

* [Dependencies](#dependencies)
* [Installation](#installation)
* [Optional](#optional)

## Dependencies

### Depends on: 

* GTK2 (mist, murrine and pixbuf engine with SVG support!)
* GTK3>=3.20
* Disabled GTK3 overlay scrollbars (export GTK_OVERLAY_SCROLLING=0)

### Recommends: 

* [GTK3-NOCSD](https://github.com/PCMan/gtk3-nocsd)
* [YAD](https://sourceforge.net/projects/yad-dialog)
* Xfce, IceWM or Openbox
* Chrome/Chromium(@GTK3)(any blink based browser will work due the internal styling of html forms)

### also included: 

* Xfce themes(XfDashboard, Balou, XfceNotifyd)
* WindowManager themes(Xfwm, Metacity(Marco/Muffin), Openbox, IceWM)
* Plank themes
* Chrome/Chromium Scrollbars
* Onboard theme
* A simple high contrast icon theme
* Qt5ct qgtkstyle qss fixes
* WinAMP 2.9x theme
* Albert theme
* and more

## Installation

### Manual
For example to install it for all users:

```
## set your prefix usually /usr or /usr/local, 
## if unsure try: (getconf PATH|sed -e 's/\/bin//g;s/://g') 
prefix=/usr/local

## Base themes: GTK, GTK2, GTK3, Xfce, MATE, Openbox
mkdir /tmp/0nyX && cd /tmp/0nyX
wget https://github.com/sixsixfive/0nyX/archive/master.zip
unzip master.zip
mkdir -p $prefix/share/themes
mv /tmp/0nyX/0nyX-master $prefix/share/themes/0nyX

## Icon theme
mkdir -p $prefix/share/icons
ln -s $prefix/share/themes/0nyX/@extra/icons/0nyX $prefix/share/icons/0nyX

## IceWM
mkdir -p $prefix/icewm/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/icewm/0nyX $prefix/share/icewm/themes/0nyX

## OnBoard
mkdir -p $prefix/onboard/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/onboard/0nyX.colors $prefix/share/onboard/themes/0nyX.colors
ln -s $prefix/share/themes/0nyX/@extra/appthemes/onboard/0nyX.theme $prefix/share/onboard/themes/0nyX.theme

## Albert(app does not support symlinks)
mkdir -p $prefix/albert/themes
cp $prefix/share/themes/0nyX/@extra/appthemes/albert/0nyX.qss $prefix/share/albert/themes/0nyX.qss

## Plank theme
mkdir -p $prefix/share/plank/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX $prefix/share/plank/themes/0nyX
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX-full $prefix/share/plank/themes/0nyX-full
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX-lighter $prefix/share/plank/themes/0nyX-lighter

## WinAMP theme
## If your player needs PNG or BMP graphics use the included script!
## (audacious example)
mkdir -p  $prefix/share/audacious/Skins
ln -sf $prefix/share/themes/0nyX/@extra/appthemes/WinAMP/0nyX $prefix/share/audacious/Skins/0nyX
## (QMMP example)
mkdir -p  $prefix/share/qmmp/skins
ln -sf $prefix/share/themes/0nyX/@extra/appthemes/WinAMP/0nyX $prefix/share/qmmp/skins/0nyX

#### Qt5
## Qt5ct (if you use a different prefix than /usr you need to edit the image paths in 0nyX_QGtkStyle.qss)
mkdir -p $prefix/share/qt5ct/qss
mkdir -p $prefix/share/qt5ct/colors
ln -s $prefix/share/themes/0nyX/@extra/appthemes/qt5ct/colors/0nyX.conf $prefix/share/qt5ct/colors/0nyX.conf
ln -s $prefix/share/themes/0nyX/@extra/appthemes/qt5ct/qss/0nyX_QGtkStyle.qss $prefix/share/qt5ct/qss/0nyX_QGtkStyle.qss
```
Chrome/Chromium theme:

just open chrome/chromium go to chrome://extensions/ enable developer mode and load the unpacked extension from:

```
$prefix/share/themes/0nyX/@extra/appthemes/Chromium_unpackedextension
```

Note: You have to symlink the subthemes instead of copying otherwise they might break!

### Packages

Packages for Debian and Manjaro can be found on the [Opendesktop-page](https://www.opendesktop.org/p/1175851).

Note: Qt5ct for Debian can be found [here](https://github.com/mati75/qt5ct).

## Optional

### Change hilight color

- If you want to change the default highlight color to something else(needs sed, tr and find!)

```
sh $prefix/share/themes/0nyX/@extra/scripts/changecolor.sh 
```

or 

```
sh $prefix/share/themes/0nyX/@extra/scripts/changecolor.sh -c "#16A085"
```

Note: Remember that there is text to display above that color(eg: on selections) !!!

### Set all themes

to set the whole theme you can run the following script eg:


```
sh $prefix/share/themes/0nyX/@extra/scripts/setxfcetheme.sh
```
