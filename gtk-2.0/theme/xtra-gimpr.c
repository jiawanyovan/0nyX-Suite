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

style"gimp4"{
stock["gimp-anchor"] = {{ @"anchor" }}
#stock["gimp-center"] = {{ @"align-center" }}
stock["gimp-duplicate"] = {{ @"edit-duplicate" }}
stock["gimp-edit"] = {{ @"edit" }}
stock["gimp-reset"] = {{ @"edit-reset" }}
stock["gimp-close"] = {{ @"dockwidget-close" }}
stock["gimp-menu-left"] = {{ @"open-menu" }}
stock["gimp-menu-right"] = {{ @"open-menu" }}
stock["gimp-move-to-screen"] = {{ @"video-display" }}
stock["gimp-invert"] = {{ @"edit-select-invert" }}
#stock["gimp-layer-to-imagesize"] = {{ @"layer-to-imagesize" }}
#stock["gimp-merge-down"] = {{ @"layer-merge-down" }}
#stock["gimp-navigation"] = {{ @"edit-move" }}
stock["gimp-paste-as-new"] = {{ @"document-new" }}
stock["gimp-paste-into"] = {{ @"edit-paste-into-selection" }}
#stock["gimp-path-stroke"] = {{ @"object-stroke" }}
stock["gimp-plugin"] = {{ @"plugin" }}
#stock["gimp-quick-mask-off"] = {{ @"view-mask-off" }}
#stock["gimp-quick-mask-on"] = {{ @"view-mask-on" }}
#stock["gimp-histogram"] = {{ @"dialog-history" }}
#stock["gimp-histogram-linear"] = {{ @"dialog-history" }}
#stock["gimp-histogram-logarithmic"] = {{ @"dialog-history" }}
stock["gimp-reshow-filter"] = {{ @"filter" }}
#stock["gimp-resize"] = {{ @"edit-resize" }}
stock["gimp-flip-horizontal"] = {{ @"object-flip-horizontal" }}
stock["gimp-flip-vertical"] = {{ @"object-flip-vertical" }}
stock["gimp-rotate-180"] = {{ @"object-rotate-180" }}
stock["gimp-rotate-270"] = {{ @"object-rotate-left" }}
stock["gimp-rotate-90"] = {{ @"object-rotate-right" }}
#stock["gimp-scale"] = {{ @"edit-resize" }}
#stock["gimp-linked"] = {{ @"object-linked" }}
stock["gimp-visible"] = {{ @"object-visible" }}
stock["gimp-list"] = {{ @"view-list" }}
stock["gimp-grid"] = {{ @"view-grid" }}
#stock["gimp-portrait"] = {{ @"gtk-orientation-portrait" }}
#stock["gimp-landscape"] = {{ @"gtk-orientation-landscape" }}
stock["gimp-video"] = {{ @"gxine" }}
stock["gimp-web"] = {{ @"globe" }}
stock["gimp-image"] = {{ @"image" }}
stock["gimp-layer"] = {{ @"image" }}
#stock["gimp-layer-mask"] = {{ @"view-mask-on" }}
#stock["gimp-channel"] = {{ @"layer-merge-down" }}
#stock["gimp-channel-red"] = {{ @"layer-merge-down" }}
#stock["gimp-channel-green"] = {{ @"layer-merge-down" }}
#stock["gimp-channel-blue"] = {{ @"layer-merge-down" }}
#stock["gimp-channel-gray"] = {{ @"layer-merge-down" }}
#stock["gimp-channel-indexed"] = {{ @"layer-merge-down" }}
#stock["gimp-channel-alpha"] = {{ @"layer-merge-down" }}
#stock["gimp-path"] = {{ @"path-mode-spiro" }}
stock["gimp-text-layer"] = {{ @"draw-text" }}
#stock["gimp-floating-selection"] = {{ @"layer-merge-down" }}
stock["gimp-template"] = {{ @"template-x-generic" }}
stock["gimp-images"] = {{ @"image" }}
stock["gimp-layers"] = {{ @"dialog-layers" }}
#stock["gimp-channels"] = {{ @"dialog-channels" }}
#stock["gimp-paths"] = {{ @"path-mode-spiro" }}
#stock["gimp-colormap"] = {{ @"video-display" }}
stock["gimp-cursor"] = {{ @"tool-pointer" }}
#stock["gimp-sample-point"] = {{ @"video-display" }}
stock["gimp-shape-circle"] = {{ @"draw-ellipse" }}
stock["gimp-shape-square"] = {{ @"draw-rectangle" }}
stock["gimp-shape-diamond"] = {{ @"draw-diamond" }}
stock["gimp-cap-butt"] = {{ @"stroke-cap-butt" }}
stock["gimp-cap-round"] = {{ @"stroke-cap-round" }}
stock["gimp-cap-square"] = {{ @"stroke-cap-square" }}
stock["gimp-join-miter"] = {{ @"stroke-join-miter" }}
stock["gimp-join-round"] = {{ @"stroke-join-round" }}
stock["gimp-join-bevel"] = {{ @"stroke-join-bevel" }}
stock["gimp-selection"] = {{ @"edit-select-frame" }}
stock["gimp-selection-all"] = {{ @"edit-select-all" }}
stock["gimp-selection-none"] = {{ @"edit-select-none" }}
stock["gimp-selection-grow"] = {{ @"edit-select-grow" }}
stock["gimp-selection-shrink"] = {{ @"edit-select-shrink" }}
stock["gimp-selection-border"] = {{ @"video-display" }}
stock["gimp-selection-add"] = {{ @"video-display" }}
stock["gimp-selection-subtract"] = {{ @"video-display" }}
stock["gimp-selection-replace"] = {{ @"video-display" }}
stock["gimp-selection-intersect"] = {{ @"video-display" }}
stock["gimp-selection-stroke"] = {{ @"video-display" }}
stock["gimp-selection-to-channel"] = {{ @"video-display" }}
stock["gimp-selection-to-path"] = {{ @"video-display" }}
stock["gimp-gradient-linear"] = {{ @"paint-gradient-linear" }}
stock["gimp-gradient-bilinear"] = {{ @"paint-gradient-bilinear" }}
stock["gimp-gradient-radial"] = {{ @"paint-gradient-radial" }}
#stock["gimp-gradient-square"] = {{ @"video-display" }}
#stock["gimp-gradient-conical-symmetric"] = {{ @"video-display" }}
#stock["gimp-gradient-conical-asymmetric"] = {{ @"video-display" }}
#stock["gimp-gradient-shapeburst-spherical"] = {{ @"gimp-gradient-shapeburst-spherical" }}
#stock["gimp-gradient-shapeburst-angular"] = {{ @"" }}
#stock["gimp-gradient-shapeburst-dimpled"] = {{ @"" }}
#stock["gimp-gradient-spiral-clockwise"] = {{ @"" }}
#stock["gimp-gradient-spiral-anticlockwise"] = {{ @"video-display" }}
#stock["gimp-gravity-north-west"] = {{ @"video-display" }}
#stock["gimp-gravity-north"] = {{ @"video-display" }}
#stock["gimp-gravity-north-east"] = {{ @"video-display" }}
#stock["gimp-gravity-west"] = {{ @"video-display" }}
#stock["gimp-gravity-east"] = {{ @"video-display" }}
#stock["gimp-gravity-south-west"] = {{ @"video-display" }}
#stock["gimp-gravity-south"] = {{ @"video-display" }}
#stock["gimp-gravity-south-east"] = {{ @"video-display" }}
#stock["gimp-hcenter"] = {{ @"video-display" }}
#stock["gimp-vcenter"] = {{ @"video-display" }}
stock["gimp-char-picker"] = {{ @"accessories-character-map" }}
#stock["gimp-letter-spacing"] = {{ @"video-display" }}
#stock["gimp-line-spacing"] = {{ @"video-display" }}
stock["gimp-text-dir-ltr"] = {{ @"format-text-direction-horizontal" }}
stock["gimp-text-dir-rtl"] = {{ @"format-text-direction-rtl" }}
stock["gimp-print-resolution"] = {{ @"video-display" }}
stock["gimp-tools"] = {{ @"applications-accessories" }}
stock["gimp-tool-options"] = {{ @"xfce4-settings" }}
stock["gimp-device-status"] = {{ @"dialog-information" }}
stock["gimp-input-device"] = {{ @"input-devices" }}
stock["gimp-display-filter"] = {{ @"filter" }}
#stock["gimp-curve-free"] = {{ @"input-devices" }}
#stock["gimp-curve-smooth"] = {{ @"input-devices" }}
stock["gimp-color-picker-black"] = {{ @"color-picker-black" }}
stock["gimp-color-picker-gray"] = {{ @"color-picker-grey" }}
stock["gimp-color-picker-white"] = {{ @"color-picker-white" }}
#stock["gimp-color-triangle"] = {{ @"input-devices" }}
stock["gimp-color-pick-from-screen"] = {{ @"color-picker" }}
stock["gimp-convert-grayscale"] = {{ @"edit-convert" }}
stock["gimp-convert-rgb"] = {{ @"edit-convert" }}
stock["gimp-convert-indexed"] = {{ @"edit-convert" }}
#stock["gimp-transparency"] = {{ @"video-display" }}
#stock["gimp-default-colors"] = {{ @"video-display" }}
stock["gimp-swap-colors"] = {{ @"swap-values" }}
stock["gimp-undo-history"] = {{ @"edit-undo-history" }}
#stock["gimp-hchain"] = {{ @"video-display" }}
#stock["gimp-vchain"] = {{ @"video-display" }}
#stock["gimp-hchain-broken"] = {{ @"video-display" }}
#stock["gimp-vchain-broken"] = {{ @"video-display" }}
#stock["gimp-texture"] = {{ @"video-display" }}
#stock["gimp-frame"] = {{ @"video-display" }}
stock["gimp-error"] = {{ @"dialog-error" }}
stock["gimp-info"] = {{ @"dialog-information" }}
stock["gimp-question"] = {{ @"dialog-question" }}
stock["gimp-warning"] = {{ @"dialog-warning" }}
stock["gimp-gegl"] = {{ @"gegl" }}
stock["gimp-user-manual"] = {{ @"system-help" }}
stock["gimp-wilber"] = {{ @"gimp" }}
stock["gimp-wilber-outline"] = {{ @"gimp" }}
stock["gimp-logo"] = {{ @"gimp" }}
stock["wilber"] = {{ @"gimp" }}
stock["gimp-wilber-eek"] = {{ @"face-raspberry" }}
stock["gimp-zoom-follow-window"] = {{ @"zoom-fit-best" }}
stock["gimp-controller-wheel"] = {{ @"input-mouse-wheel" }}
stock["gimp-template"] = {{ @"template-x-generic" }}
stock["gimp-clipboard"] = {{ @"edit-paste" }}
stock["gimp-close-all"] = {{ @"document-close-all" }}

#####FIXME-add-tools#####################################################################

}class "*" style "gimp4"
