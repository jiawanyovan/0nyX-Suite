style"scale"{
xthickness=0
ythickness=0
bg[NORMAL]=@selected_bg_color
bg[PRELIGHT]=@selected_bg_color
bg[SELECTED]=@selected_bg_color
bg[ACTIVE]=@base_color
bg[INSENSITIVE]=@bg_color
GtkRange::slider-width=18
GtkScale::slider-length=32
GtkScale::trough-side-details=0
GtkRange::trough-border=0
GtkRange::activate-slider=0
engine"pixmap"{
image{
function=BOX
orientation=HORIZONTAL
file="../images/gtk-2.0/scale_horizontal.svg"
border={2,2,6,6}
stretch=TRUE}
image{
function=BOX
orientation=VERTICAL
detail="trough"
file="../images/gtk-2.0/scale_vertical.svg"
border={6,6,2,2}
stretch=TRUE}
image{
function=SLIDER
state=NORMAL
file="../images/gtk-2.0/tab_active.svg"
border={2,2,2,2}
stretch=TRUE}
image{
function=SLIDER
state=PRELIGHT
file="../images/gtk-2.0/tab_active.svg"
border={2,2,2,2}
stretch=TRUE}
image{
function=SLIDER
state=SELECTED
file="../images/gtk-2.0/tab_active.svg"
border={2,2,2,2}
stretch=TRUE}
image{
function=SLIDER
state=ACTIVE
file="../images/gtk-2.0/tab_active.svg"
border={2,2,2,2}
stretch=TRUE}
image{
function=SLIDER
state=INSENSITIVE
file="../images/gtk-2.0/window-color.svg"
border={8,8,2,2}
stretch=FALSE
overlay_file="../images/gtk-2.0/shadow.svg"
overlay_border={2,2,2,2}
overlay_stretch=TRUE}}}
class"GtkScale"style"scale"

