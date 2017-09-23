style"menu"{
bg[NORMAL]=shade(0.85,@bg_color)}
widget"*GtkWindow.gtk-combobox-popup-menu*"style"menu"
widget"*GtkMenu"style"menu"
widget_class"*<GtkMenu>*"style"menu"
style"menuitem"{
ythickness=3
bg[PRELIGHT]=@selected_bg_color}
widget_class"*.<GtkMenu>.<GtkMenuItem>"style"menuitem"
style"menuitem"{
fg[PRELIGHT]=@selected_fg_color}
widget_class"*.<GtkMenu>.<GtkMenuItem>.<GtkLabel>"style"menuitem"

style"menuseperator"{
xthickness=0
ythickness=2
GtkSeparatorMenuItem::horizontal-padding=0
GtkMenuItem::toggle-spacing=0
GtkWidget::wide-separators=1
GtkMenuItem::separator-height=2
GtkMenu::shadow-type=GTK_SHADOW_NONE
engine"pixmap"{
image{
function=BOX
file="../images/gtk-2.0/line.svg"
border={2,0,0,0}
stretch=TRUE}}}
widget_class"*<GtkSeparatorMenuItem>*"style"menuseperator"

style"gtkmenucheckbutton"{
xthickness=1
ythickness=1
GtkCheckButton::indicator-size=36
GtkRadioButton::indicator-size=36
GtkCheckMenuItem::indicator-size=36
GtkRadioMenuItem::indicator-size=36
engine"pixmap"{
image{
function=CHECK
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/menu_check_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-check_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-check.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-check.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/check-check.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/menu_radio_normal.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-check_insensitive.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=IN
file="../images/gtk-2.0/radio_active.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-check.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/radio_active.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-check.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=IN
file="../images/gtk-2.0/radio_active.svg"
stretch=TRUE
border={2,2,2,2}
overlay_file="../images/gtk-2.0/radio-check.svg"
overlay_stretch=FALSE}}}
class"GtkMenu*"style"gtkmenucheckbutton"
