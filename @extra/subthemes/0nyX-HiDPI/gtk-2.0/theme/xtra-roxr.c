style"roxfiler"{
xthickness=2
ythickness=2
GtkToolbar::shadow-type=GTK_SHADOW_NONE
engine"pixmap"{
image{
function=SHADOW
shadow=NONE
file="../images/gtk-2.0/rox-toolbar.svg"
stretch=TRUE
border={0,0,0,2}
orientation=HORIZONTAL}}}
widget"rox-filer*GtkToolbar"style"roxfiler"

style"roxfiler-collection"{
xthickness=2
ythickness=2
base[NORMAL]=@base_color
}widget"rox-filer*ViewCollection"style"roxfiler-collection"

style"roxicons"{
stock["rox-select"] = {{ @"edit-select-invert" }}
stock["rox-show-details"] = {{ @"rox-show-details" }}
stock["rox-show-hidden"] = {{ @"rox-show-hidden" }}
}class "*" style "roxicons"
