[Variables]
TypeW=1
TypeH=0.25
PaddingW=15
PaddingH=0

[bg]
Meter=Image
ImageName=#@#\Graphics\separator.png
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Width#+(#Padding#*2))*#ScaleDpi#
H=#Height#*#ScaleDpi#
solidcolor=0,0,0,1
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#\Graphics\hover.png"][!SetOption #CURRENTSECTION# solidcolor "255,255,255,20"][!UpdateMeter bg][!ShowMeter Down][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#\Graphics\separator.png"][!SetOption #CURRENTSECTION# solidcolor "0,0,0,1"][!UpdateMeter bg][!HideMeter Down][!Redraw]
ScaleMargins=10,10,10,10

[Down]
Meter=Image
ImageName=#@#Graphics\settings.png
LeftMouseUpAction=[!SkinCustomMenu]
X=(#Width#+(#Padding#*2)-25)*#ScaleDpi#
y=0
w=(25)*#scaledpi#
ImageTint=#arrowcolor#
ImageAlpha=180
Hidden=1
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 255][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 180][!Update]
MouseActionCursor=1

[TextStyle]
X=(#Width#/2+5)*#ScaleDpi#
Y=(#Width#/7+5)*#ScaleDpi#
StringAlign=CENTER
FontFace=#fonttype#
FontColor=#textcolor2#,#PanelTitleOpacity#
FontSize=(#height#/10)*#ScaleDpi#
StringEffect=#Shadow#
FontEffectColor=#ItemShadowColor#,#ItemShadowOpacity#
AntiAlias=1
LeftMouseUpAction=["#PanelAction#"]
solidcolor=0,0,0,1
Text=#PanelName#

[FullTextStyle]
X=(#Width#/30+5)
StringAlign=LEFT
Y=(#Width#/30+5)
W=(#Width#)
ClipString=1
H=(#Width#/10)
MeterStyle=DriveText
FontColor=#TextColor2#,1
FontSize=(#Width#/15-#Width#/150)
FontFace=#fonttype#
Antialias=1

[IconStyle]
X=(#Width#/2-(#Width#/3/2)+5)*#ScaleDpi#
Y=(#Width#/12+5)*#ScaleDpi#
W=(#Width#/3.1)*#ScaleDpi#
ImageTint=#TextColor2#,1
AntiAlias=1
LeftMouseUpAction=["#PanelAction#"]
ImageName=#IconLocation#

[IconStyle2]
ImageTint=#textcolor2#,50

[FullStyle]
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Width#+(#Padding#*2))*#ScaleDpi#
H=#Height#*#ScaleDpi#
AntiAlias=1
