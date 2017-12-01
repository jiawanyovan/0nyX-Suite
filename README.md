
![alt text](https://raw.githubusercontent.com/sixsixfive/0nyX/master/.screenshot.png)

### Depends on: 

* GTK2 (mist and pixbuf engine with SVG support!)
* [YAD](https://sourceforge.net/projects/yad-dialog)

### Recommends: 

* [HighContrast-Icons](https://github.com/sixsixfive/HighContrast-Icons)
* GTK3>=3.20 + disabled GTK3 overlay scrollbars (export GTK_OVERLAY_SCROLLING=0)

### Suggests: 

* [GTK3-NOCSD](https://github.com/PCMan/gtk3-nocsd)
* [0nyXv2](https://github.com/sixsixfive/0nyXv2-Suite)


## Installation

you can build a debian package with: 

```
fakeroot debian/rules binary && su -c "dpkg -i ../0nyx-theme*.deb || apt install -f --no-install-recommends"
```
### Manual

For example to install it for all users:

* 1 Copy the 0nyX folder to your themedir (usually $SYSPREFIX/share/themes) 
	* 1.1 copy the Extras folder to $SYSPREFIX/share/themes/0nyXv2/Extras(this is needed or the colorchange script is unable to change the colors of the extras themes)
* 2 link the $SYSPREFIX/share/themes/0nyXv2/Extras/0nyX-HiDPI folder to $SYSPREFIX/share/themes/0nyX-HiDPI
	* 2.1 link the $SYSPREFIX/share/themes/0nyX/gtk-3.0 folder to $SYSPREFIX/share/themes/0nyX-HiDPI/gtk-3.0

Note: You have to symlink the subthemes instead of copying otherwise the colorscript will break!

```
## IceWM
mkdir -p $prefix/icewm/themes
ln -s $prefix/share/themes/0nyX/Extras/App_themes/icewm/0nyX $prefix/share/icewm/themes/0nyX
ln -s $prefix/share/themes/0nyX/Extras/App_themes/icewm/0nyX-HiDPI $prefix/share/icewm/themes/0nyX-HiDPI

## OnBoard
mkdir -p $prefix/onboard/themes
ln -s $prefix/share/themes/0nyX/Extras/App_themes/onboard/0nyX.colors $prefix/share/onboard/themes/0nyX.colors
ln -s $prefix/share/themes/0nyX/Extras/App_themes/onboard/0nyX.theme $prefix/share/onboard/themes/0nyX.theme

## SLiM
mkdir -p $prefix/slim/themes
ln -s $prefix/share/themes/0nyX/Extras/App_themes/SLiM/0nyX $prefix/share/slim/themes/0nyX
ln -s $prefix/share/themes/0nyX/Extras/App_themes/SLiM/0nyX-HiDPI $prefix/share/slim/themes/0nyX-HiDPI

## Albert(app does not support symlinks)
mkdir -p $prefix/albert/themes
cp $prefix/share/themes/Extras/App_themes/albert/0nyX.qss $prefix/share/albert/themes/0nyX.qss

## Plank theme
mkdir -p $prefix/share/plank/themes
ln -s $prefix/share/themes/0nyX/Extras/App_themes/plank/0nyX $prefix/share/plank/themes/0nyX
ln -s $prefix/share/themes/0nyX/Extras/App_themes/plank/0nyX-full $prefix/share/plank/themes/0nyX-full
ln -s $prefix/share/themes/0nyX/Extras/App_themes/plank/0nyX-HiDPI $prefix/share/plank/themes/0nyX-HiDPI
ln -s $prefix/share/themes/0nyX/Extras/App_themes/plank/0nyX-full-HiDPI $prefix/share/plank/themes/0nyX-full-HiDPI

## WinAMP theme
## If your player needs PNG or BMP graphics use the included script!
## (audacious example)
mkdir -p  $prefix/share/audacious/Skins
ln -s $prefix/share/themes/0nyX/Extras/App_themes/WinAMP/0nyX $prefix/share/audacious/Skins/0nyX
## (QMMP example)
mkdir -p  $prefix/share/qmmp/skins
ln -s $prefix/share/themes/0nyX/Extras/App_themes/WinAMP/0nyX $prefix/share/qmmp/skins/0nyX

#### Qt5
## Note: This is not a real theme it uses QGtkStyle and some QSS fixes
## Qt5ct (if you use a different prefix than /usr you need to change the prefix(see yadscript: $prefix/share/themes/phlat/@extra/appthemes/qt5ct/0nyX/qss/0nyX_changeprefix.sh))
mkdir -p $prefix/share/0nyX/qss
mkdir -p $prefix/share/0nyX/colors
ln -s $prefix/share/themes/phlat/Extras/App_themes/qt5ct/0nyX/colors/0nyX.conf $prefix/share/qt5ct/colors/0nyX.conf
ln -s $prefix/share/themes/phlat/Extras/App_themes/qt5ct/0nyX/qss/0nyX_QGtkStylePluginFixes.qss $prefix/share/qt5ct/qss/0nyX_QGtkStylePluginFixes.qss
```

Chrome/Chromium theme:

just open chrome/chromium go to chrome://extensions/ enable developer mode and load the unpacked extension from:

```
$prefix/share/themes/0nyX/Extras/App_themes/Chromium_unpackedextension/0nyX
```

## Optional

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
