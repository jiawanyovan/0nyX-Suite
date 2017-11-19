
![alt text](https://raw.githubusercontent.com/sixsixfive/0nyX/master/.screenshot.png)

# Contents

* [Main features](#main-features)
* [Dependencies](#dependencies)
* [Installation](#installation)
* [Optional](#optional)

## Main features

* A Traditional Style that stays in the background to focus apps/work
  * Simplified Style without gradients, hovers or animations
  * Borders around widgets
  * Touchscreen unfriendly - made for mouses 
  * Traditional Scrollbars with arrows
  * HiDPI-support
  * Full RTL support

## Dependencies

### Depends on: 

* GTK2 (mist and pixbuf engine with SVG support!)
* [YAD](https://sourceforge.net/projects/yad-dialog)

### Recommends: 

* [GTK3-NOCSD](https://github.com/PCMan/gtk3-nocsd)
* [HighContrast-Icons](https://github.com/sixsixfive/HighContrast-Icons)
* GTK3>=3.20 + disabled GTK3 overlay scrollbars (export GTK_OVERLAY_SCROLLING=0)
* [Qt5ct](https://sourceforge.net/projects/qt5ct/) + (Qt SVG module + QGtkStyle)
* DMZ-White cursor theme
* Xfce, IceWM or Openbox
* Chrome/Chromium(@GTK3)(or any other browser with interal styling of html forms)

## Installation

you can build a debian package with: 

```
fakeroot debian/rules binary 
```
### Manual

For example to install it for all users:

Copy the 0nyX folder to you themedir (usually $SYSPREFIX/share/themes) and link the desired sub-themes

Note: You have to symlink the subthemes instead of copying otherwise they will break!

```
## HiDPI
ln -s $prefix/share/themes/0nyX/@extra/subthemes/0nyX-HiDPI $prefix/share/themes/0nyX-HiDPI

## Icon theme
mkdir -p $prefix/share/icons
ln -s $prefix/share/themes/0nyX/@extra/icons/0nyX $prefix/share/icons/0nyX

## IceWM
mkdir -p $prefix/icewm/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/icewm/0nyX $prefix/share/icewm/themes/0nyX
ln -s $prefix/share/themes/0nyX/@extra/appthemes/icewm/0nyX-HiDPI $prefix/share/icewm/themes/0nyX-HiDPI

## OnBoard
mkdir -p $prefix/onboard/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/onboard/0nyX.colors $prefix/share/onboard/themes/0nyX.colors
ln -s $prefix/share/themes/0nyX/@extra/appthemes/onboard/0nyX.theme $prefix/share/onboard/themes/0nyX.theme

## SLiM
mkdir -p $prefix/slim/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/SLiM/0nyX $prefix/share/slim/themes/0nyX
ln -s $prefix/share/themes/0nyX/@extra/appthemes/SLiM/0nyX-HiDPI $prefix/share/slim/themes/0nyX-HiDPI

## Albert(app does not support symlinks)
mkdir -p $prefix/albert/themes
cp $prefix/share/themes/0nyX/@extra/appthemes/albert/0nyX.qss $prefix/share/albert/themes/0nyX.qss

## Plank theme
mkdir -p $prefix/share/plank/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX $prefix/share/plank/themes/0nyX
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX-full $prefix/share/plank/themes/0nyX-full
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX-HiDPI $prefix/share/plank/themes/0nyX-HiDPI
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX-full-HiDPI $prefix/share/plank/themes/0nyX-full-HiDPI

## WinAMP theme
## If your player needs PNG or BMP graphics use the included script!
## (audacious example)
mkdir -p  $prefix/share/audacious/Skins
ln -sf $prefix/share/themes/0nyX/@extra/appthemes/WinAMP/0nyX $prefix/share/audacious/Skins/0nyX
## (QMMP example)
mkdir -p  $prefix/share/qmmp/skins
ln -sf $prefix/share/themes/0nyX/@extra/appthemes/WinAMP/0nyX $prefix/share/qmmp/skins/0nyX

#### Qt5
## Note: This is not a real theme it uses QGtkStyle and some QSS fixes
## Qt5ct (if you use a different prefix than /usr you need to change the prefix(see yadscript: $prefix/share/themes/phlat/@extra/appthemes/qt5ct/0nyX/qss/0nyX_changeprefix.sh))
mkdir -p $prefix/share/0nyX/qss
mkdir -p $prefix/share/0nyX/colors
ln -s $prefix/share/themes/phlat/@extra/appthemes/qt5ct/0nyX/colors/0nyX.conf $prefix/share/qt5ct/colors/0nyX.conf
ln -s $prefix/share/themes/phlat/@extra/appthemes/qt5ct/0nyX/qss/0nyX_QGtkStylePluginFixes.qss $prefix/share/qt5ct/qss/0nyX_QGtkStylePluginFixes.qss
```

Chrome/Chromium theme:

just open chrome/chromium go to chrome://extensions/ enable developer mode and load the unpacked extension from:

```
$prefix/share/themes/0nyX/@extra/appthemes/Chromium_unpackedextension
```

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

### Set all themes on Xfce

to set the whole theme you can run the following script eg:

```
sh $prefix/share/themes/0nyX/@extra/scripts/setxfcetheme.sh
```

### Set the GTK themes on Icewm or Openbox

for GTK create a file ~/.gtkrc with something like:

```
include "/usr/share/themes/0nyX/gtk/gtkrc"
```

for GTK2 create a file ~/.gtkrc-2.0 with something like:

```
include "/usr/share/themes/0nyX/gtk-2.0/gtkrc"
gtk-toolbar-style=GTK_TOOLBAR_ICONS
gtk-menu-images=1
gtk-button-images=0
gtk-fallback-icon-theme="hicolor"
gtk-icon-theme-name="0nyX"
gtk-xft-dpi=-1
gtk-cursor-theme-name="DMZ-White"
gtk-cursor-theme-size=16
```

for GTK3 create a file ${XDG_CONFIG_HOME}/gtk-3.0/settings.ini with something like:

```
[Settings]
gtk-theme-name=0nyX
gtk-application-prefer-dark-theme=false
gtk-menu-images=true
```

### GTK2 HiDPI notes

the theme includes a fake HiDPI theme for GTK2 that doubles all GTK2 borders, paddings. But unlike the GTK3 theme this needs some additional tweaks:

#### double the GTK2 icon size 

* this can be done with [gtk2-settings](https://developer.gnome.org/gtk2/stable/GtkSettings.html#GtkSettings--gtk-icon-sizes)
* on Xfce(@GTK2):

```
xfconf-query -c xsettings -p /Gtk/IconSizes -s "gtk-menu=32,32:gtk-small-toolbar=48,48:gtk-large-toolbar=48,48:gtk-dnd=96,96:gtk-button=48,48:gtk-dialog=96,96:gtk-panel=48,48:panel-applications-menu=48,48:panel-tasklist-menu=64,64:panel-menu=48,48:panel-directory-menu=48,48:panel-launcher-menu=48,48:panel-window-menu=48,48:panel-menu-bar=48,48:ev-icon-size-annot-window=32,32:webkit-media-button-size=48,48"
```

#### double your GTK2 font dpi (eg:192)

* again, this can be done with [gtk2-settings](https://developer.gnome.org/gtk2/stable/GtkSettings.html#GtkSettings--gtk-xft-dpi)
* on Xfce(@GTK2):

```
xfconf-query -c xsettings -p /Xft/DPI -s "192"
```
