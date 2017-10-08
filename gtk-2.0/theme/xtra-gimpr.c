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

style"gimp4"{
stock["gimp-menu-left"] = {{ "../@extra/icons/0nyX/symbolic/open-menu.svg" }}
stock["gimp-menu-right"] = {{ "../@extra/icons/0nyX/symbolic/open-menu.svg" }}
stock["dockwidget-close"] = {{ "../@extra/icons/0nyX/symbolic/dockwidget-close.svg" }}
stock["gimp-close"] = {{ "../@extra/icons/0nyX/symbolic/dockwidget-close.svg" }}}
class "*" style "gimp4"
