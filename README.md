# Contents

* [Main features](#main-features)
* [Dependencies](#dependencies)
* [Installation](#installation)
* [Optional](#optional)

## Main features

* A Traditional Style
  * Squared style - no round corners
  * No gradients
  * Borders around widgets
  * No hovers or other animations
  * Touchscreen unfriendly - made for mouses 
  * Traditional Scrollbars with arrows 
  * Adjustable Highlight color
  * A GTK3 theme that fully supports GTK3-nocsd
* Matching HighContrast icon theme
* App-themes to provide a consistent desktop

## Dependencies

### Depends on: 

* GTK2 (mist and pixbuf engine with SVG support!)
* GTK3>=3.20 + disabled GTK3 overlay scrollbars (export GTK_OVERLAY_SCROLLING=0)
* [Qt5ct](https://sourceforge.net/projects/qt5ct/) + Qt SVG module + QGtkStyle
* [YAD](https://sourceforge.net/projects/yad-dialog)

### Recommends: 

* [GTK3-NOCSD](https://github.com/PCMan/gtk3-nocsd)
* DMZ-White cursor theme
* Xfce, IceWM or Openbox
* Chrome/Chromium(@GTK3)(any blink based browser will work due the internal styling of html forms)

### Currently included: 

* GTK themes(GTK, GTK2, GTK3)
* Xfce themes(XfDashboard, Balou, XfceNotifyd)
* WindowManager themes(Xfwm, Metacity(Marco/Muffin), Openbox, IceWM)
* Plank themes
* Chrome/Chromium Scrollbars
* SLiM theme
* WinAMP 2.9x theme(Audacious, QMMP, XMMS etc.)
* Onboard theme
* Icon theme
* Albert theme
* Qt5 QSSfixes

## Installation

### Packages

Packages for Debian, SuSE and Manjaro can be found on the [Opendesktop-page](https://www.opendesktop.org/p/1175851).

Note: Qt5ct for Debian can be found [here](https://github.com/mati75/qt5ct).

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

## SLiM
mkdir -p $prefix/slim/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/SLiM/0nyX $prefix/share/slim/themes/0nyX

## Albert(app does not support symlinks)
mkdir -p $prefix/albert/themes
cp $prefix/share/themes/0nyX/@extra/appthemes/albert/0nyX.qss $prefix/share/albert/themes/0nyX.qss

## Plank theme
mkdir -p $prefix/share/plank/themes
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX $prefix/share/plank/themes/0nyX
ln -s $prefix/share/themes/0nyX/@extra/appthemes/plank/0nyX-full $prefix/share/plank/themes/0nyX-full

## WinAMP theme
## If your player needs PNG or BMP graphics use the included script!
## (audacious example)
mkdir -p  $prefix/share/audacious/Skins
ln -sf $prefix/share/themes/0nyX/@extra/appthemes/WinAMP/0nyX $prefix/share/audacious/Skins/0nyX
## (QMMP example)
mkdir -p  $prefix/share/qmmp/skins
ln -sf $prefix/share/themes/0nyX/@extra/appthemes/WinAMP/0nyX $prefix/share/qmmp/skins/0nyX

#### Qt5
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

Note: You have to symlink the subthemes instead of copying otherwise they might break!

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

### GTK2 HiDPI notes

the theme includes a fake HiDPI theme for GTK2 that doubles all GTK2 borders, paddings. But unlike the GTK3 theme this needs some additional tweaks:

#### double the GTK2 icon size 

* this can be done with [gtk2-settings](https://developer.gnome.org/gtk2/stable/GtkSettings.html#GtkSettings--gtk-icon-sizes)
* on Xfce(@GTK2):

```
xfconf-query -c xsettings -p /Gtk/IconSizes -s "gtk-menu=32,32:gtk-small-toolbar=48,48:gtk-large-toolbar=48,48:gtk-dnd=96,96:gtk-button=48,48:gtk-dialog=96,96:gtk-panel=48,48:panel-applications-menu=48,48:panel-tasklist-menu=64,64:panel-menu=48,48:panel-directory-menu=48,48:panel-launcher-menu=48,48:panel-window-menu=48,48:panel-menu-bar=48,48:ev-icon-size-annot-window=32,32:webkit-media-button-size=48,48"
```

#### double your font dpi (eg:192)

* again, this can be done with [gtk2-settings](https://developer.gnome.org/gtk2/stable/GtkSettings.html#GtkSettings--gtk-xft-dpi)
* on Xfce(@GTK2):

```
xfconf-query -c xsettings -p /Xft/DPI -s "192"
```

#### double your cursor size

* again, this can be done with [gtk2-settings](https://developer.gnome.org/gtk2/stable/GtkSettings.html#GtkSettings--gtk-cursor-theme-size)
