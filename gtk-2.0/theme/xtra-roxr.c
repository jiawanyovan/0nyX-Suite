style"roxfiler"{
xthickness=1
ythickness=1
GtkToolbar::shadow-type=GTK_SHADOW_NONE
engine"pixmap"{
image{
function=SHADOW
shadow=NONE
file="../images/gtk-2.0/rox-toolbar.svg"
stretch=TRUE
border={0,0,0,1}
orientation=HORIZONTAL}}}
widget"rox-filer*GtkToolbar"style"roxfiler"

style"roxfiler-collection"{
xthickness=1
ythickness=1
base[NORMAL]=@base_color

}
widget"rox-filer*ViewCollection"style"roxfiler-collection"
