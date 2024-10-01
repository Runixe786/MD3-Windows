

[Variables]
______________________________________________________________

[BackgroundSlider]
Meter=Shape
Shape=Rectangle (#Offset4# + 5*#Scale#),((#WORKAREAHEIGHT# - (705*#Scale#)) + #Offset2#),(550*#Scale#),(650*#Scale# + #Offset2#),(40*#Scale#) | Fill LinearGradient ShapeGradient | StrokeWidth 0 | Stroke Color #Color1#,0
ShapeGradient=360 | #Color1#,200 ; 0.42 | #Color1#,190 ;0.42
Shape2=Rectangle (#Offset4# +360*#Scale#),((#WORKAREAHEIGHT# - (760*#Scale#)) + #Offset2#),(120*#Scale#),(120*#Scale#),(140*#Scale#) | Fill LinearGradient Shape2Gradient | StrokeWidth 0 | Stroke Color #Color1#,0
Shape2Gradient=90 | #Color2#,80 ; 0.0 | #Color2#,80 ; 1
MouseScrollUpAction=[!CommandMeasure DeceleratingSlider3 "Execute 1"][!CommandMeasure DeceleratingSlider3 "Stop2"][!Update]
MouseScrollDownAction=[!CommandMeasure DeceleratingSlider3 "Execute 2"][!CommandMeasure DeceleratingSlider3 "Stop1"][!Update]
DynamicVariables=1

____________________________________________________
[MeasureProfile]
Meter=Image
Group=Sliders 
X=(#Offset4# + 200*#Scale#)
Y=((#WORKAREAHEIGHT# - (755*#Scale#)) + #Offset2#)
W=(110*#Scale#)
ImagePath=%USERPROFILE%\AppData\Local\Temp\
MaskImagePath=#@#Skin Icons\
ImageName=%USERNAME%.bmp
MaskImageName=Mask.png
DynamicVariables=1

[UserName]
Meter=String
StringAlign=Center
MeterStyle=Segoe UI Variable Static Small
FontColor=#Color6#
FontSize=(10*#Scale#)
X=(#Offset4#+255*#Scale#)
Y=((#WORKAREAHEIGHT# - (630*#Scale#)) + #Offset2#)
StringCase=Upper
Text=%USERNAME%
AntiAlias=1
DynamicVariables=1
____________________________________________________

[ThisPCIcon]
Meter=Image
Group=Meters
ImageName=#@#Skin Icons\Computer
X=(#Offset4# + 50*#Scale#)
Y=((#WORKAREAHEIGHT# - (567*#Scale#)) + #Offset2#)
W=(19*#Scale#)
ImageTint=#Color6#
SolidColor=0,0,0,1
DynamicVariables=1
AntiAlias=1

[ThisPCText]
Meter=String
Group=Meters
StringAlign=Left
MeterStyle=Segoe UI Variable Static Small
FontColor=#Color6#
FontSize=(9*#Scale#)
X=R
Y=((#WORKAREAHEIGHT# - (565*#Scale#)) + #Offset2#)
Text="  This PC"
MouseOverAction=[!SetOption ThisPCIcon ImageTint "#Color6#,80"][!SetOption ThisPCText FontColor "#Color6#,80"][!Update]
MouseLeaveAction=[!SetOption ThisPCIcon ImageTint "#Color6#,255"][!SetOption ThisPCText FontColor "#Color6#,255"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=Shell:::{20D04FE0-3AEA-1069-A2D8-08002B30309D}
SolidColor=0,0,0,1
AntiAlias=1
DynamicVariables=1

____________________________________________________

[TrashIcon]
Meter=Image
Group=Meters
ImageName=#@#Skin Icons\Recycle
X=(#Offset4# + 170*#Scale#)
Y=((#WORKAREAHEIGHT# - (569*#Scale#)) + #Offset2#)
W=(20*#Scale#)
ImageTint=#Color6#
SolidColor=0,0,0,1
DynamicVariables=1
AntiAlias=1

[TrashText]
Meter=String
Group=Meters
StringAlign=Left
MeterStyle=Segoe UI Variable Static Small
FontColor=#Color6#
FontSize=(9*#Scale#)
X=R
Y=((#WORKAREAHEIGHT# - (565*#Scale#)) + #Offset2#)
Text=" Trash"
MouseOverAction=[!SetOption TrashIcon ImageTint "#Color6#,80"][!SetOption TrashText FontColor "#Color6#,80"][!Update]
MouseLeaveAction=[!SetOption TrashIcon ImageTint "#Color6#,255"][!SetOption TrashText FontColor "#Color6#,255"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=Shell:::{645FF040-5081-101B-9F08-00AA002F954E}
SolidColor=0,0,0,1
AntiAlias=1
DynamicVariables=1

____________________________________________________

[SettingsIcon]
Meter=Image
Group=Meters
ImageName=#@#Skin Icons\Settings
X=(#Offset4# + 275*#Scale#)
Y=((#WORKAREAHEIGHT# - (570*#Scale#)) + #Offset2#)
W=(22*#Scale#)
ImageTint=#Color6#
DynamicVariables=1
AntiAlias=1

[SettingsText]
Meter=String
Group=Meters
StringAlign=Left
MeterStyle=Segoe UI Variable Static Small
FontColor=#Color6#
FontSize=(9*#Scale#)
X=R
Y=((#WORKAREAHEIGHT# - (565*#Scale#)) + #Offset2#)
Text=" Settings"
MouseOverAction=[!SetOption SettingsIcon ImageTint "#Color6#,80"][!SetOption SettingsText FontColor "#Color6#,80"][!Update]
MouseLeaveAction=[!SetOption SettingsIcon ImageTint "#Color6#,255"][!SetOption SettingsText FontColor "#Color6#,255"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=Shell:::{5399E694-6CE5-4D6C-8FCE-1D8870FDCBA0}
SolidColor=0,0,0,1
AntiAlias=1
DynamicVariables=1

____________________________________________________

[PowerIcon]
Meter=Image
Group=Meters
ImageName=#@#Skin Icons\Turn Off
X=(#Offset4# + 390*#Scale#)
Y=((#WORKAREAHEIGHT# - (569*#Scale#)) + #Offset2#)
W=(20*#Scale#)
ImageTint=#Color6#
DynamicVariables=1
AntiAlias=1

[PowerText]
Meter=String
Group=Meters
StringAlign=Left
MeterStyle=Segoe UI Variable Static Small
FontColor=#Color6#
FontSize=(9*#Scale#)
X=R
Y=((#WORKAREAHEIGHT# - (565*#Scale#)) + #Offset2#)
Text=" Power"
MouseOverAction=[!SetOption PowerIcon ImageTint "#Color6#,80"][!SetOption PowerText FontColor "#Color6#,80"][!HideMeter ShatdownIcon][!HideMeter RestartIcon][!HideMeter LogoffIcon][!Update]
MouseLeaveAction=[!SetOption PowerIcon ImageTint "#Color6#,255"][!SetOption PowerText FontColor "#Color6#,255"][!Update]
LeftMouseupAction=[!ShowMeter ShatdownIcon][!ShowMeter RestartIcon][!ShowMeter LogoffIcon][!Update]
SolidColor=0,0,0,1
AntiAlias=1
DynamicVariables=1


[ShatdownIcon]
Meter=Image
Group=Meters
ImageName=#@#Skin Icons\Turn Off
X=(25*#Scale#)R
Y=((#WORKAREAHEIGHT# - (610*#Scale#)) + #Offset2#)
W=(20*#Scale#)
ImageTint=#Color6#
MouseOverAction=[!SetOption ShatdownIcon ImageTint "#Color6#,80"][!Update]
MouseLeaveAction=[!SetOption ShatdownIcon ImageTint "#Color6#,255"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=shutdown.exe -s -t 00
ToolTipText=Shatdown
DynamicVariables=1
AntiAlias=1
hidden=1

[RestartIcon]
Meter=Image
Group=Meters
ImageName=#@#Skin Icons\Restart
X=r
Y=((#WORKAREAHEIGHT# - (570*#Scale#)) + #Offset2#)
W=(20*#Scale#)
ImageTint=#Color6#
MouseOverAction=[!SetOption RestartIcon ImageTint "#Color6#,80"][!Update]
MouseLeaveAction=[!SetOption RestartIcon ImageTint "#Color6#,255"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=shutdown.exe -r -t 00
ToolTipText=Restart
DynamicVariables=1
AntiAlias=1
hidden=1

____________________________________________________

[MeterRoundedRectangle]
Meter=Shape
X=(#Offset4# + 65*#Scale#)
Y=((#WORKAREAHEIGHT# - (530*#Scale#)) + #Offset2#)
Shape=Rectangle (0*#Scale#),(0*#Scale#),(380*#Scale#),(35*#Scale#),(5*#Scale#) | Extend MyModifiers1
MyModifiers1=Fill Color #Color2#,100| StrokeWidth (2*#Scale#) | Stroke Color 5,5,5,20
AntiAlias=1
DynamicVariables=1

[GoogleSearchText]
Meter=String
StringAlign=Left
FontFace=Segoe UI Variable Static Small 
FontSize=(13*#Scale#)
FontColor=#Color6#
X=(#Offset4# + 190*#Scale#)
Y=(5*#Scale#)r
W=(377*#Scale#)
H=(30*#Scale#)
Text=" Google Search "
AntiAlias=1
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "MeterGoogleSearchMeasure" "ExecuteBatch 1"][!Redraw]

[MeterGoogleSearchMeasure]
Measure=Plugin
Plugin=InputText
FontColor=#Color6#
FontFace=Segoe UI Variable Static Small 
FontSize=(15*#Scale#)
X=(#Offset4# + 100*#Scale#)
Y=((#WORKAREAHEIGHT# - (530*#Scale#)) + #Offset2#)
W=(310*#Scale#)
H=(35*#Scale#)
SolidColor=#Color1#,255
AntiAlias=1
DynamicVariables=1
OnDismissAction=[!SetOption SearchbarGoogle Text "Google"][!SetOption SearchbarBing Text "Bing"][!SetOption SearchbarWikipedia Text "Wikipedia"]
Command1=!Execute [!SetOption SearchbarGoogle Text "Google"]["http://www.google.com/search?q=$UserInput$"] DefaultValue=""[!DeactivateConfig "Linux Menu\Menu" "Menu.ini"][!ShowMeter GoogleSearchText][!Redraw]
FocusDismiss=1

[MeterSearchIconTop]
Meter=Image
ImageName=#@#Skin Icons\Search Icon.png
X=(#Offset4# + 415*#Scale#)
Y=(3*#Scale#)r
W=(20*#Scale#)
ImageTint=#Color6#
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock1BG]
Meter=Shape
Group=Meters
X=(#Offset4# + 50*#Scale#)
Y=(((#WORKAREAHEIGHT# - (425*#Scale#)) + (#Offset2#*#Scale#)) - (#Offset3#*#Scale#))
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock1BG BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock1BG BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath1#
AntiAlias=1
DynamicVariables=1

[Icon1]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 1#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1

____________________________________________________

[Dock1BG2]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock1BG2 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock1BG2 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath2#
AntiAlias=1
DynamicVariables=1

[Icon2]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 2#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock1BG3]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock1BG3 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock1BG3 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath3#
AntiAlias=1
DynamicVariables=1

[Icon3]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 3#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock1BG4]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock1BG4 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock1BG4 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath4#
AntiAlias=1
DynamicVariables=1

[Icon4]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 4#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock1BG5]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock1BG5 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock1BG5 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath5#
AntiAlias=1
DynamicVariables=1

[Icon5]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 5#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
________________________________________________________________________________________________________________________________________________________________________________________________________________

[Dock2BG1]
Meter=Shape
Group=Meters
X=(#Offset4# + 50*#Scale#)
Y=(15*#Scale#)R
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock2BG1 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock2BG1 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath6#
AntiAlias=1
DynamicVariables=1

[Icon6]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 6#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock2BG2]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock2BG2 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock2BG2 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath7#
AntiAlias=1
DynamicVariables=1

[Icon7]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 7#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock2BG3]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock2BG3 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock2BG3 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath8#
AntiAlias=1
DynamicVariables=1

[Icon8]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 8#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock2BG4]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock2BG4 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock2BG4 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath9#
AntiAlias=1
DynamicVariables=1

[Icon9]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 9#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock2BG5]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((70 - #Offset3#)*#Scale#),((70 - #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock2BG5 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock2BG5 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath10#
AntiAlias=1
DynamicVariables=1

[Icon10]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 10#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((50 - #Offset3#)*#Scale#)
H=((50 - #Offset3#)*#Scale#)
ImageTint=255,255,255
AntiAlias=1
DynamicVariables=1
________________________________________________________________________________________________________________________________________________________________________________________________________________

[Dock3BG1]
Meter=Shape
Group=Meters
X=(#Offset4# + 50*#Scale#)
Y=(15*#Scale#)R
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock3BG1 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock3BG1 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath11#
AntiAlias=1
DynamicVariables=1

[Icon11]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 11#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock3BG2]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock3BG2 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock3BG2 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath12#
AntiAlias=1
DynamicVariables=1

[Icon12]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 12#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock3BG3]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock3BG3 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock3BG3 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath13#
AntiAlias=1
DynamicVariables=1

[Icon13]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 13#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock3BG4]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock3BG4 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock3BG4 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath14#
AntiAlias=1
DynamicVariables=1

[Icon14]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 14#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock3BG5]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock3BG5 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock3BG5 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath15#
AntiAlias=1
DynamicVariables=1

[Icon15]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 15#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
________________________________________________________________________________________________________________________________________________________________________________________________________________

[Dock4BG1]
Meter=Shape
Group=Meters
X=(#Offset4# + 50*#Scale#)
Y=(15*#Scale#)R
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock4BG1 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock4BG1 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath16#
AntiAlias=1
DynamicVariables=1

[Icon16]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 16#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock4BG2]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock4BG2 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock4BG2 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath17#
AntiAlias=1
DynamicVariables=1

[Icon17]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 17#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock4BG3]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock4BG3 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock4BG3 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath18#
AntiAlias=1
DynamicVariables=1

[Icon18]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 18#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock4BG4]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock4BG4 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock4BG4 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath19#
AntiAlias=1
DynamicVariables=1

[Icon19]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 19#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock4BG5]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,(70*#Scale#),(70*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock4BG5 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock4BG5 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath20#
AntiAlias=1
DynamicVariables=1

[Icon20]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 20#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=(50*#Scale#)
H=(50*#Scale#)
AntiAlias=1
DynamicVariables=1
________________________________________________________________________________________________________________________________________________________________________________________________________________

[Dock5BG1]
Meter=Shape
Group=Meters
X=(#Offset4# + 50*#Scale#)
Y=(15*#Scale#)R
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock5BG1 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock5BG1 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath21#
AntiAlias=1
DynamicVariables=1

[Icon21]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 21#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock5BG2]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock5BG2 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock5BG2 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath22#
AntiAlias=1
DynamicVariables=1

[Icon22]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 22#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock5BG3]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock5BG3 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock5BG3 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath23#
AntiAlias=1
DynamicVariables=1

[Icon23]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 23#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock5BG4]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock5BG4 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock5BG4 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath24#
AntiAlias=1
DynamicVariables=1

[Icon24]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 24#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock5BG5]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock5BG5 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock5BG5 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath25#
AntiAlias=1
DynamicVariables=1

[Icon25]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 25#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
________________________________________________________________________________________________________________________________________________________________________________________________________________

[Dock6BG1]
Meter=Shape
Group=Meters
X=(#Offset4# + 50*#Scale#)
Y=(15*#Scale#)R
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock6BG1 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock6BG1 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath26#
AntiAlias=1
DynamicVariables=1

[Icon26]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 26#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock6BG2]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock6BG2 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock6BG2 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath27#
AntiAlias=1
DynamicVariables=1

[Icon27]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 27#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock6BG3]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock6BG3 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock6BG3 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath28#
AntiAlias=1
DynamicVariables=1

[Icon28]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 28#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock6BG4]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock6BG4 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock6BG4 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath29#
AntiAlias=1
DynamicVariables=1

[Icon29]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 29#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________

[Dock6BG5]
Meter=Shape
Group=Meters
X=(25*#Scale#)R
Y=(-10*#Scale#)r
Shape=Rectangle 0,0,((20 + #Offset3#)*#Scale#),((20 + #Offset3#)*#Scale#),(7*#Scale#) | Extend BGcolor | StrokeWidth 0 | Stroke Color 0,0,0,1
BGcolor=Fill Color #Color3#,1
MouseOverAction=[!SetOption Dock6BG5 BGcolor "Fill Color #Color3#,15"][!Update]
MouseLeaveAction=[!SetOption Dock6BG5 BGcolor "Fill Color #Color3#,1"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider "Execute #State#"][!CommandMeasure DeceleratingSlider2 "Execute #State#"][!Update]
LeftMouseDownAction=#LocationPath30#
AntiAlias=1
DynamicVariables=1

[Icon30]
Meter=Image
Group=Meters
ImageName=#@#Icons\#Dock 30#
X=(10*#Scale#)r
Y=(10*#Scale#)r
W=((0 + #Offset3#)*#Scale#)
H=((0 + #Offset3#)*#Scale#)
AntiAlias=1
DynamicVariables=1
____________________________________________________