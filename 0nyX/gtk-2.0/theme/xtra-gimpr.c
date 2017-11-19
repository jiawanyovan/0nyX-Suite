style"gimp"{
text[NORMAL]=@selected_bg_color}
class "GimpSpinScale" style"gimp"

style"gimp2"{
xthickness=2
ythickness=0}
widget"*GimpDockbook" style"gimp2"

style"gimp3"{
xthickness=0
ythickness=4}
widget"*GimpStatusbar*GtkFrame" style"gimp3"

style"gimpthumbbox"{
base[NORMAL]=@bg_color
engine"mist"{}}
class "GimpThumbBox" style"gimpthumbbox"

style"gimpthumbboxbutton"{
xthickness=0
ythickness=0
font_name="Sans 0"
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class "*GimpThumbBox*GtkButton*" style"gimpthumbboxbutton"
