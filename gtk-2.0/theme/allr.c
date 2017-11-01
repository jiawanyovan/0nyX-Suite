style"gtkwidget"{
xthickness=1
ythickness=1
fg[NORMAL]=@fg_color
fg[PRELIGHT]=@fg_color
fg[SELECTED]=@selected_fg_color
fg[ACTIVE]=shade(1.3,@fg_color)
fg[INSENSITIVE]=@inactive_fg_color
bg[NORMAL]=@bg_color
bg[PRELIGHT]=@bg_color
bg[SELECTED]=@selected_bg_color
bg[ACTIVE]=shade(1.3,@bg_color)
bg[INSENSITIVE]=@bg_color
base[NORMAL]=@base_color
base[PRELIGHT]=@base_color
base[SELECTED]=@selected_base_color
base[ACTIVE]=shade(1.3,@base_color)
base[INSENSITIVE]=@base_color
text[NORMAL]=@text_color
text[PRELIGHT]=@text_color
text[SELECTED]=@selected_text_color
text[ACTIVE]=shade(1.3,@text_color)
text[INSENSITIVE]=@inactive_text_color
GtkTextView::error-underline-color=@error_color
GtkWidget::cursor-color=@text_color
GtkWidget::secondary-cursor-color=@text_color
GtkWidget::link_color=@url_color
GtkHTML::link-color=@url_color
GtkIMHtml::hyperlink-color=@url_color
GnomeHRef::link-color=@url_color
GtkWidget::visited-link-color=@visited_url_color
GtkHTML::visited-link-color=@visited_url_color
GtkIMHtml::hyperlink-visited-color=@visited_url_color
GtkTreeView::even-row-color=@base_color
GtkTreeView::odd-row-color=@base_color
GtkTreeView::horizontal-separator=20
GtkTreeView::vertical-separator=4
GtkWidget::focus-line-width=0
GtkWidget::focus-padding=0
GtkWidget::interior-focus=0
GtkScrolledWindow::scrollbar-spacing=0
GtkScrolledWindow::scrollbars-within-bevel=0
GtkWidget::wide-separators=1
GtkWidget::separator-height=1
GtkWidget::separator-width=1
GtkWidget::internal-padding=4
GtkWidget::window-dragging=1
GtkWidget::tooltip-alpha=255
GtkWidget::tooltip-radius=0
GtkCheckButton::indicator-size=18
GtkRadioButton::indicator-size=18
GtkCheckMenuItem::indicator-size=18
GtkRadioMenuItem::indicator-size=18
engine"pixmap"{
image{
function=SHADOW
shadow=IN
file="../images/gtk-2.0/shadow.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=OUT
file="../images/gtk-2.0/shadow.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_IN
file="../images/gtk-2.0/shadow.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=ETCHED_OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=NONE
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
detail="hseparator"
#file="../images/gtk-2.0/line.svg"
file="../images/gtk-2.0/hline.svg"
border={0,0,1,0}
stretch=TRUE}
image{
function=BOX
detail="vseparator"
file="../images/gtk-2.0/line.svg"
border={1,0,0,0}
stretch=TRUE}
image{
function=RESIZE_GRIP
detail="statusbar"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=HLINE
detail="hseparator"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=VLINE
detail="vseparator"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=FOCUS
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=HANDLE
detail="handlebox"
overlay_file="../images/gtk-2.0/handle_vertical.svg"
overlay_stretch=FALSE
orientation=VERTICAL}
image{
function=HANDLE
detail="handlebox"
overlay_file="../images/gtk-2.0/handle_horizontal.svg"
orientation=HORIZONTAL
overlay_stretch=FALSE}
image{
function=HANDLE
overlay_file="../images/gtk-2.0/handle_horizontal.svg"
overlay_stretch=FALSE
orientation=HORIZONTAL}
image{
function=HANDLE
overlay_file="../images/gtk-2.0/handle_vertical.svg"
orientation=VERTICAL
overlay_stretch=FALSE}
image{
function=HANDLE
detail="handlebox"
overlay_file="../images/gtk-2.0/handle_horizontal.svg"
overlay_stretch=FALSE
orientation=HORIZONTAL}
image{
function=HANDLE
detail="handlebox"
overlay_file="../images/gtk-2.0/handle_vertical.svg"
orientation=VERTICAL
overlay_stretch=FALSE}
image{
function=ARROW
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=ARROW
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=ARROW
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=INSENSITIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=STEPPER
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE
arrow_direction=UP}
image{
function=STEPPER
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}
image{
function=STEPPER
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=STEPPER
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=TAB
state=INSENSITIVE
detail="optionmenutab"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_insensitive.svg"
overlay_stretch=FALSE}
image{
function=TAB
state=NORMAL
detail="optionmenutab"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=TAB
state=PRELIGHT
detail="optionmenutab"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=TAB
state=ACTIVE
detail="optionmenutab"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_insensitive.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=SEMI_COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=SEMI_COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=SEMI_COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=SEMI_COLLAPSED
overlay_file="../images/gtk-2.0/arrow-right_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE
}image{
function=EXPANDER
state=INSENSITIVE
expander_style=EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=NORMAL
expander_style=SEMI_EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=PRELIGHT
expander_style=SEMI_EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=ACTIVE
expander_style=SEMI_EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=EXPANDER
state=INSENSITIVE
expander_style=SEMI_EXPANDED
overlay_file="../images/gtk-2.0/arrow-down_insensitive.svg"
overlay_stretch=FALSE}
image{
function=BOX
detail="spinbutton_up"
state=NORMAL
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE}
image{
function=BOX
detail="spinbutton_up"
state=PRELIGHT
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE}
image{
function=BOX
detail="spinbutton_up"
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_normal.svg"
overlay_stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
detail="spinbutton_up"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-up_insensitive.svg"
overlay_stretch=FALSE}
image{
function=BOX
state=NORMAL
detail="spinbutton_down"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=BOX
state=PRELIGHT
detail="spinbutton_down"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=BOX
state=ACTIVE
detail="spinbutton_down"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_normal.svg"
overlay_stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
detail="spinbutton_down"
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_IN
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_IN
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/tab_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-check_insensitive.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-check.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-check.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/check-check.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_IN
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_IN
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_IN
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi_insensitive.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_OUT
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/radio_normal.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-check_insensitive.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=IN
file="../images/gtk-2.0/radio_active.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-check.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/radio_active.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-check.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=IN
file="../images/gtk-2.0/radio_active.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="../images/gtk-2.0/radio-check.svg"
overlay_stretch=FALSE}}}
class"GtkWidget"style"gtkwidget"

style"filechooserfixes"{
xthickness=0
ythickness=0
base[NORMAL]=@bg_color
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
widget_class"*GtkFileChooserDefault.GtkVBox.GtkHPaned.GtkVBox.GtkScrolledWindow.GtkTreeView.GtkButton"style"filechooserfixes"
widget_class"*GtkFileChooserDefault.GtkVBox.GtkHPaned.GtkVBox.GtkScrolledWindow.GtkTreeView.GtkButton*GtkLabel"style"filechooserfixes"

style"filechoosersidebar"{
xthickness=0
ythickness=0
engine"pixmap"{
image{
function=FLAT_BOX
file="../images/gtk-2.0/window-color.svg"
state=NORMAL
stretch=TRUE
border={0,1,0,0}}
image{
function=FLAT_BOX
file="../images/gtk-2.0/selection-color.svg"
state=SELECTED
stretch=TRUE
border={0,1,0,0}}
image{
function=SHADOW
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=ETCHED_IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=ETCHED_OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=NONE
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class"*GtkFileChooserDefault.GtkVBox.GtkHPaned.GtkVBox.GtkScrolledWindow"style"filechoosersidebar"
widget_class"*GtkFileChooserDefault.GtkVBox.GtkHPaned.GtkVBox.GtkScrolledWindow.GtkTreeView"style"filechoosersidebar"
