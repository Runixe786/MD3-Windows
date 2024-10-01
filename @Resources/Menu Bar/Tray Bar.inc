[Rainmeter]
Author=link
AccurateText=1

[Variables]
Action=[!UpdateMeter "MeterPercent"][!UpdateMeter "MeterBrightnessIcon"][!Redraw]
Radius=80
______________________________________________________________

[TraySlider]
Meter=Shape
Shape=Rectangle (#SCREENAREAWIDTH# - (335*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (435*#Scale#)),(330*#Scale#),(380*#Scale#),(13*#Scale#) | Fill Color #Color1# | StrokeWidth 0 | Stroke Color 2,2,2,0
DynamicVariables=1

____________________________________________________Battery____________________________________________________
[Batterybar]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (320*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (420*#Scale#)),(140*#Scale#),(140*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,250
MouseOverAction=[!SetOption Batterybar BGcolor "Fill Color #Color4#,160"][!Update]
MouseLeaveAction=[!SetOption Batterybar BGcolor "Fill Color #Color4#,250"][!Update]
AntiAlias=1
DynamicVariables=1


[MeasureBatteryPercent]
Measure=Plugin
Plugin=PowerPlugin
PowerState=PERCENT
MinValue=0
MaxValue=100

[MeasureBatteryACLine]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLINE
Substitute="0":"Battery","1":"Mains"

[MeasureBatteryStatus]
Measure=Plugin
Plugin=PowerPlugin
PowerState=STATUS
Substitute="0":"Battery","1":"Now Charging","2":"Your Battery Critical","3":"Your Battery is Low","4":"Your Battery is almost Full"

[CalcBatteryTint]
Measure=Calc
Formula=MeasureBatteryPercent<20 ? -1 : -2
Substitute="-1":"#Colour3#","-2":"#Colour1#"


[MeterMainBG]
Meter=Roundline
Group=Meters
X=(#SCREENAREAWIDTH# - (325*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (435*#Scale#))
H=(150*#Scale#)
W=(150*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineColor=#Color2#
LineLength=(38.5*#Scale#)
LineStart=(45.5*#Scale#)
Solid=1
Antialias=1
DynamicVariables=1

[MeterMain]
Meter=Roundline
Group=Meters
MeasureName=MeasureBatteryPercent
X=(#SCREENAREAWIDTH# - (325*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (435*#Scale#))
H=(150*#Scale#)
W=(150*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineColor=#Color5#
LineLength=(38*#Scale#)
LineStart=(46*#Scale#)
Solid=1
Antialias=1
DynamicVariables=1

[MeterMainText]
Meter=String
MeasureName=MeasureBatteryPercent
MeterStyle=StringStyle
StringAlign=CenterCenter
FontFace=Segoe UI Variable Static Display
X=(75*#Scale#)r
Y=(75*#Scale#)r
FontColor=#Color6#
FontSize=(22*#Scale#)
Text="%1%"
AntiAlias=1

[MeterMainLabel]
Meter=String
StringAlign=Center
X=r
Y=(19*#Scale#)r
FontSize=(8*#Scale#)
FontColor=#Color6#
FontFace=Segoe UI Variable Static Text Light
Text=Battery#CRLF##CRLF##CRLF#[MeasureBatteryStatus]
Antialias=1
DynamicVariables=1

____________________________________________________Wifi____________________________________________________

[Wifi]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (160*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (420*#Scale#)),(140*#Scale#),(60*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,240
MouseOverAction=[!SetOption Wifi BGcolor "Fill Color #Color4#,160"][!Update]
MouseLeaveAction=[!SetOption Wifi BGcolor "Fill Color #Color4#,250"][!Update]
AntiAlias=1
DynamicVariables=1

[MeasureRunConnect]
Measure=Plugin
Plugin=RunCommand
Parameter="netsh wlan connect name=myWLAN"
OutputType=ANSI
State=Hide
Timeout=5000

[MeasureRunDisconnect]
Measure=Plugin
Plugin=RunCommand
Parameter="netsh wlan disconnect"
OutputType=ANSI
State=Hide
Timeout=5000

[MeasureLAN]
Measure=Plugin
Plugin=SysInfo
SysInfoType=LAN_CONNECTIVITY
IfCondition=(MeasureLAN = 1)
IfTrueAction=[!HideMeter "MeterWifiOn"][!HideMeter "MeterWifiBar"][!ShowMeter  "MeterWifiBar2"][!ShowMeter "MeterWifiOff"][!ShowMeter "WifiTextConnect"][!HideMeter "WifiTextDisonnect"][!HideMeter "BltWifi"][!ShowMeter  "AltWifi"][!Update]
IfFalseAction=[!ShowMeter "MeterWifiOn"][!ShowMeter "MeterWifiBar"][!HideMeter "MeterWifiBar2"][!HideMeter "MeterWifiOff"][!ShowMeter "WifiTextDisonnect"][!HideMeter "WifiTextConnect"][!HideMeter "AltWifi"][!ShowMeter  "BltWifi"][!Update]

[MeterWifiBar]
Meter=Shape
Group=Sliders 
Shape=Ellipse (#SCREENAREAWIDTH# - (130*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (390*#Scale#)),(21*#Scale#) |Fill Color #Color5# | StrokeWidth 0 | Stroke Color 0,110,255,0
MouseOverAction=[!ShowMeter MeterWifiBar3][!ShowMeter MeterWifiOn2][!HideMeter MeterWifiOn][!HideMeter MeterWifiBar][!Update]
DynamicVariables=1
hidden=1

[MeterWifiBar2]
Meter=Shape
Group=Sliders 
Shape=Ellipse (#SCREENAREAWIDTH# - (130*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (390*#Scale#)),(21*#Scale#) |Fill Color #Color5# | StrokeWidth 0 | Stroke Color 0,110,255,0
MouseOverAction=[!ShowMeter MeterWifiBar4][!ShowMeter MeterWifiOff2][!HideMeter MeterWifiOff][!HideMeter MeterWifiBar2][!Update]
DynamicVariables=1
hidden=1

[MeterWifiBar3]
Meter=Shape
Group=Sliders 
Shape=Ellipse (#SCREENAREAWIDTH# - (130*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (390*#Scale#)),(21*#Scale#) |Fill Color #Color2# | StrokeWidth 0 | Stroke Color 0,0,0,0
MouseLeaveAction=[!ShowMeter MeterWifiBar][!ShowMeter MeterWifiOn][!HideMeter MeterWifiOn2][!HideMeter MeterWifiBar3][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureRunDisconnect "Run"]
DynamicVariables=1
hidden=1

[MeterWifiBar4]
Meter=Shape
Group=Sliders 
Shape=Ellipse (#SCREENAREAWIDTH# - (130*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (390*#Scale#)),(21*#Scale#) |Fill Color #Color2# | StrokeWidth 0 | Stroke Color 0,0,0,0
MouseLeaveAction=[!ShowMeter MeterWifiBar2][!ShowMeter MeterWifiOff][!HideMeter MeterWifiOff2][!HideMeter MeterWifiBar4][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureRunDisconnect "Run"]
DynamicVariables=1
hidden=1

[MeterWifiOn]
Meter=Image
Group=Sliders 
ImageName=#@#Skin Icons\Wifi Off.png
X=(#SCREENAREAWIDTH# - (143*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (401*#Scale#))
W=(26*#Scale#)
ImageTint=#Color6#
DynamicVariables=1
UpdateDivider=-1
hidden=1

[MeterWifiOn2]
Meter=Image
Group=Sliders 
ImageName=#@#Skin Icons\Wifi Off.png
X=(#SCREENAREAWIDTH# - (143*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (401*#Scale#))
W=(26*#Scale#)
ImageTint=#Color6#
LeftMouseUpAction=[!CommandMeasure MeasureRunDisconnect "Run"]
UpdateDivider=-1
DynamicVariables=1
AntiAlias=1
hidden=1

[MeterWifiOff]
Meter=Image
Group=Sliders 
ImageName=#@#Skin Icons\Wifi On.png
X=(#SCREENAREAWIDTH# - (143*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (401*#Scale#))
W=(26*#Scale#)
ImageTint=#Color6#
DynamicVariables=1
UpdateDivider=-1
hidden=1

[MeterWifiOff2]
Meter=Image
Group=Sliders 
ImageName=#@#Skin Icons\Wifi On.png
X=(#SCREENAREAWIDTH# - (143*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (401*#Scale#))
W=(26*#Scale#)
ImageTint=#Color6#
LeftMouseUpAction=[!CommandMeasure MeasureRunDisconnect "Run"]
UpdateDivider=-1
DynamicVariables=1
AntiAlias=1
hidden=1

[WifiTextConnect]
Meter=String
StringAlign=Center
X=(75*#Scale#)r
Y=r
FontSize=(9*#Scale#)
FontColor=#Color6#
FontFace=Segoe UI Variable Static Text Light
Text=Wifi #CRLF#Connect
Antialias=1
DynamicVariables=1
hidden=1

[WifiTextDisonnect]
Meter=String
StringAlign=Center
X=r
Y=r
FontSize=(9*#Scale#)
FontColor=#Color6#
FontFace=Segoe UI Variable Static Text Light
Text=Wifi#CRLF#Disconnect
Antialias=1
DynamicVariables=1
hidden=1
____________________________________________________Cpu & Ram____________________________________________________

[CpuRamBG]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (160*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (340*#Scale#)),(140*#Scale#),(60*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,250
MouseOverAction=[!SetOption CpuRamBG BGcolor "Fill Color #Color4#,160"][!ShowMeter MeterAverageCPU][!ShowMeter MeterRamPercent][!HideMeter MeterAverageCPUText][!HideMeter MeterRamText][!Update]
MouseLeaveAction=[!SetOption CpuRamBG BGcolor "Fill Color #Color4#,250"][!ShowMeter MeterRamText][!ShowMeter MeterAverageCPUText][!HideMeter MeterRamPercent][!HideMeter MeterAverageCPU][!Update]
AntiAlias=1
DynamicVariables=1


[MeasureCPU]
Measure=CPU
Processor=0
AverageSize=50

[MeasureAverageCPU]
Measure=CPU
AverageSize=50


[MeasurePhysMemUsed]
Measure=PhysicalMemory
UpdateDivider=20

[MeterCPURoundBG]
Meter=Roundline
X=(#SCREENAREAWIDTH# - (135*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (320*#Scale#))
W=(20*#Scale#)
H=(20*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineStart=(20*#Scale#)
LineLength=(16*#Scale#)
Solid=1
LineColor=#Color2#
AntiAlias=1
UpdateDivider=-1
DynamicVariables=1

[MeterProgressCPU]
Meter=Roundline
MeasureName=MeasureCPU
X=(#SCREENAREAWIDTH# - (135*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (320*#Scale#))
W=(20*#Scale#)
H=(20*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineStart=(20*#Scale#)
LineLength=(16*#Scale#)
LineColor=#Color5#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterAverageCPUText]
Meter=String
MeasureName=MeasureAverageCPU
StringAlign=Left
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
FontSize=(7*#Scale#)
X=(#SCREENAREAWIDTH# - (134*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (317*#Scale#))
Text="CPU"
Percentual=1
AutoScale=1
AntiAlias=1
DynamicVariables=1
hidden=0

[MeterAverageCPU]
Meter=String
MeasureName=MeasureAverageCPU
StringAlign=Left
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
FontSize=(7*#Scale#)
X=(#SCREENAREAWIDTH# - (134*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (317*#Scale#))
Text="%1 %"
Percentual=1
AutoScale=1
AntiAlias=1
DynamicVariables=1
hidden=1
____________________________________________________


[MeterRamRoundBG]
Meter=Roundline
X=(#SCREENAREAWIDTH# - (65*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (320*#Scale#))
W=(20*#Scale#)
H=(20*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineStart=(20*#Scale#)
LineLength=(16*#Scale#)
Solid=1
LineColor=#Color2#
AntiAlias=1
UpdateDivider=-1
DynamicVariables=1

[MeterProgressRam]
Meter=Roundline
MeasureName=MeasurePhysMemUsed
X=(#SCREENAREAWIDTH# - (65*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (320*#Scale#))
W=(20*#Scale#)
H=(20*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineStart=(20*#Scale#)
LineLength=(16*#Scale#)
LineColor=#Color5#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterRamText]
Meter=String
MeasureName=MeasurePhysMemUsed
StringAlign=Left
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
FontSize=(7*#Scale#)
X=(#SCREENAREAWIDTH# - (65*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (317*#Scale#))
Text="RAM"
Percentual=1
AutoScale=1
AntiAlias=1
DynamicVariables=1
hidden=0

[MeterRamPercent]
Meter=String
MeasureName=MeasurePhysMemUsed
StringAlign=Left
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
FontSize=(7*#Scale#)
X=(#SCREENAREAWIDTH# - (65*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (317*#Scale#))
Text="%1 %"
Percentual=1
AutoScale=1
AntiAlias=1
DynamicVariables=1
hidden=1
____________________________________________________Brightness____________________________________________________

[Brightness]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (320*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (265*#Scale#)),(300*#Scale#),(55*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,250
MouseOverAction=[!SetOption Brightness BGcolor "Fill Color #Color4#,160"][!Update]
MouseLeaveAction=[!SetOption Brightness BGcolor "Fill Color #Color4#,250"][!Update]
AntiAlias=1
DynamicVariables=1


[MeterBackground]
Meter=Image

[MeasureBacklight]
Measure=Plugin
Plugin=Backlight
Divide=100
UpdateDivider=-1

IfCondition=MeasureBacklight = 0
IfTrueAction=[!SetOption MeterBrightnessIcon ImageName "Brightness21.png"]

IfCondition2=(MeasureBacklight > 0) && (MeasureBacklight <= 4)
IfTrueAction2=[!SetOption MeterBrightnessIcon ImageName "Brightness20.png"]

IfCondition3=(MeasureBacklight > 5) && (MeasureBacklight <= 9)
IfTrueAction3=[!SetOption MeterBrightnessIcon ImageName "Brightness19.png"]

IfCondition4=(MeasureBacklight > 10) && (MeasureBacklight <= 14)
IfTrueAction4=[!SetOption MeterBrightnessIcon ImageName "Brightness18.png"]

IfCondition5=(MeasureBacklight > 15) && (MeasureBacklight <= 19)
IfTrueAction5=[!SetOption MeterBrightnessIcon ImageName "Brightness17.png"]

IfCondition6=(MeasureBacklight > 20) && (MeasureBacklight <= 24)
IfTrueAction6=[!SetOption MeterBrightnessIcon ImageName "Brightness16.png"]

IfCondition7=(MeasureBacklight > 25) && (MeasureBacklight <= 29)
IfTrueAction7=[!SetOption MeterBrightnessIcon ImageName "Brightness15.png"]

IfCondition8=(MeasureBacklight > 30) && (MeasureBacklight <= 34)
IfTrueAction8=[!SetOption MeterBrightnessIcon ImageName "Brightness14.png"]

IfCondition9=(MeasureBacklight > 35) && (MeasureBacklight <= 39)
IfTrueAction9=[!SetOption MeterBrightnessIcon ImageName "Brightness13.png"]

IfCondition10=(MeasureBacklight > 40) && (MeasureBacklight <= 44)
IfTrueAction10=[!SetOption MeterBrightnessIcon ImageName "Brightness12.png"]

IfCondition11=(MeasureBacklight > 45) && (MeasureBacklight <= 49)
IfTrueAction11=[!SetOption MeterBrightnessIcon ImageName "Brightness11.png"]

IfCondition12=(MeasureBacklight > 50) && (MeasureBacklight <= 54)
IfTrueAction12=[!SetOption MeterBrightnessIcon ImageName "Brightness10.png"]

IfCondition13=(MeasureBacklight > 55) && (MeasureBacklight <= 59)
IfTrueAction13=[!SetOption MeterBrightnessIcon ImageName "Brightness9.png"]

IfCondition14=(MeasureBacklight > 60) && (MeasureBacklight <= 64)
IfTrueAction14=[!SetOption MeterBrightnessIcon ImageName "Brightness8.png"]

IfCondition15=(MeasureBacklight > 65) && (MeasureBacklight <= 69)
IfTrueAction15=[!SetOption MeterBrightnessIcon ImageName "Brightness7.png"]

IfCondition16=(MeasureBacklight > 70) && (MeasureBacklight <= 74)
IfTrueAction16=[!SetOption MeterBrightnessIcon ImageName "Brightness6.png"]

IfCondition17=(MeasureBacklight > 75) && (MeasureBacklight <= 79)
IfTrueAction17=[!SetOption MeterBrightnessIcon ImageName "Brightness5.png"]

IfCondition18=(MeasureBacklight > 80) && (MeasureBacklight <= 84)
IfTrueAction18=[!SetOption MeterBrightnessIcon ImageName "Brightness4.png"]

IfCondition19=(MeasureBacklight > 85) && (MeasureBacklight <= 89)
IfTrueAction19=[!SetOption MeterBrightnessIcon ImageName "Brightness3.png"]

IfCondition20=(MeasureBacklight > 90) && (MeasureBacklight <= 94)
IfTrueAction20=[!SetOption MeterBrightnessIcon ImageName "Brightness2.png"]

IfCondition21=(MeasureBacklight > 95) && (MeasureBacklight <= 99)
IfTrueAction21=[!SetOption MeterBrightnessIcon ImageName "Brightness1.png"]

IfCondition22=(MeasureBacklight > 99)
IfTrueAction22=[!SetOption MeterBrightnessIcon ImageName "Brightness0.png"]

IfConditionMode=1
DynamicVariables=1


[MeterBrightness]
Meter=Shape
Group=Sliders 
Shape=Rectangle (#SCREENAREAWIDTH# - (310*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (257*#Scale#)),(120*#Scale#),(40*#Scale#),(13*#Scale#) | Extend BGcolor  | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color5#
MouseOverAction=[!SetOption MeterBrightness BGcolor "Fill Color #Color2#"][!ShowMeter MeterPercent][!HideMeter MeterBrightnessText][!Update]
MouseLeaveAction=[!SetOption MeterBrightness BGcolor "Fill Color #Color5#"][!ShowMeter MeterBrightnessText][!HideMeter MeterPercent][!Update]
MouseScrollDownAction=[!CommandMeasure MeasureBacklight "Backlight-"][!UpdateMeasure MeasureBacklight][!Update]
MouseScrollUpAction=[!CommandMeasure MeasureBacklight "Backlight+"][!UpdateMeasure MeasureBacklight][!Update]
DynamicVariables=1


[MeterPercent]
Meter=String
MeasureName=MeasureBacklight
X=(#SCREENAREAWIDTH# - (250*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (246*#Scale#))
FontFace=Segoe UI Variable Static Text
StringAlign=Center
FontSize=(10*#Scale#)
AntiAlias=1
FontColor=#Color6#
;Text=[MeasureBacklight:]
DynamicVariables=1
hidden=1

[MeterBrightnessText]
Meter=String
MeasureName=MeasureBacklight
FontFace=Segoe UI Variable Static Text
StringAlign=Center
FontSize=(9*#Scale#)
AntiAlias=1
FontColor=#Color6#
X=(#SCREENAREAWIDTH# - (235*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (246*#Scale#))
Text="Brightness"
DynamicVariables=1
hidden=0

[MeterBrightnessIcon]
Meter=Image
ImagePath=#@#/Skin Icons/Brightness
X=(#SCREENAREAWIDTH# - (300*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (249*#Scale#))
W=(25*#Scale#)
ImageTint=#Color6#
PreserveAspectRatio=1
LeftMouseUpAction=[!CommandMeasure MeasureBacklight "SetBacklight 0"][!UpdateMeasure MeasureBacklight][!Update]
DynamicVariables=1


____________________________________________________Voulume____________________________________________________

[MeterBackground]
Meter=Image

[MeasureVolume]
Measure=Plugin
Plugin=Win7AudioPlugin

IfCondition=MeasureVolume = -1
IfTrueAction=[!SetOption MeterMuteIcon ImageName "volume_mute.png"]

IfCondition2=(MeasureVolume = 0)
IfTrueAction2=[!SetOption MeterMuteIcon ImageName "volume_0.png"]

IfCondition3=(MeasureVolume > 0) && (MeasureVolume <= 34)
IfTrueAction3=[!SetOption MeterMuteIcon ImageName "volume_1.png"]

IfCondition4=(MeasureVolume > 34) && (MeasureVolume <= 67)
IfTrueAction4=[!SetOption MeterMuteIcon ImageName "volume_2.png"]

IfCondition5=(MeasureVolume > 67)
IfTrueAction5=[!SetOption MeterMuteIcon ImageName "volume_3.png"]

IfConditionMode=1

[MeasureVolume2]
Measure=Plugin
Plugin=Win7AudioPlugin

IfCondition=MeasureVolume = -1
IfTrueAction=[!SetOption MeterVoluIcon ImageName "volume_mute.png"]

IfCondition2=(MeasureVolume = 0)
IfTrueAction2=[!SetOption MeterVoluIcon ImageName "volume_0.png"]

IfCondition3=(MeasureVolume > 0) && (MeasureVolume <= 34)
IfTrueAction3=[!SetOption MeterVoluIcon ImageName "volume_1.png"]

IfCondition4=(MeasureVolume > 34) && (MeasureVolume <= 67)
IfTrueAction4=[!SetOption MeterVoluIcon ImageName "volume_2.png"]

IfCondition5=(MeasureVolume > 67)
IfTrueAction5=[!SetOption MeterVoluIcon ImageName "volume_3.png"]

IfConditionMode=1


[MeterVoulumeBG]
Meter=Shape
Group=Sliders 
Shape=Rectangle (#SCREENAREAWIDTH# - (150*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (257*#Scale#)),(120*#Scale#),(40*#Scale#),(13*#Scale#) | Extend BGcolor   | StrokeWidth 0 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color5#
MouseScrollDownAction=[!CommandMeasure MeasureVolume "ChangeVolume -5"][!Update]
MouseScrollUpAction=[!CommandMeasure MeasureVolume "ChangeVolume +5"][!Update]
MouseOverAction=[!SetOption MeterVoulumeBG BGcolor "Fill Color #Color2#"][!ShowMeter MeterVolumePercent][!HideMeter MeterVolumeText][!Update]
MouseLeaveAction=[!SetOption MeterVoulumeBG BGcolor "Fill Color #Color5#"][!ShowMeter MeterVolumeText][!HideMeter MeterVolumePercent][!Update]
DynamicVariables=1
Hidden=0


[MeterVolumePercent]
Meter=String
MeasureName=MeasureVolume
StringAlign=Center
FontSize=(10*#Scale#)
X=(#SCREENAREAWIDTH# - (98*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (246*#Scale#))
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
Text=[MeasureVolume:%,0]
AntiAlias=1
DynamicVariables=1
hidden=1

[MeterVolumeText]
Meter=String
MeasureName=MeasureBacklight
FontFace=Segoe UI Variable Static Text
StringAlign=Center
FontSize=(9*#Scale#)
AntiAlias=1
FontColor=#Color6#
X=(#SCREENAREAWIDTH# - (103*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (246*#Scale#))
Text="Volume"
DynamicVariables=1
hidden=0

[MeterMuteIcon]
Meter=Image
ImagePath=#@#/Skin Icons/Volume
X=(#SCREENAREAWIDTH# - (63*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (249*#Scale#))
W=(25*#Scale#)
PreserveAspectRatio=1
ImageTint=#Color6#
LeftMouseUpAction=[!CommandMeasure "MeasureVolume" "ToggleMute"][!Update]
DynamicVariables=1
Hidden=0
____________________________________________________xxxx____________________________________________________

[Player]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (320*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (195*#Scale#)),(300*#Scale#),(60*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,250
MouseOverAction=[!SetOption Player BGcolor "Fill Color #Color4#,160"][!Update]
MouseLeaveAction=[!SetOption Player BGcolor "Fill Color #Color4#,250"][!Update]
AntiAlias=1
DynamicVariables=1

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=ARTIST
Substitue="":""

[MeasureTitle]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=TITLE
Substitue="":""

[MeasureAlbum]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=ALBUM
Substitue="":""

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#Player#
PlayerType=COVER


[MeasureStateButton]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=STATE

___________________________________________________________________________________

[MeterArtist]
Meter=String
MeasureName=MeasureArtist
StringAlign=Left
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
FontSize=(10*#Scale#)
X=(#SCREENAREAWIDTH# - (250*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (190*#Scale#))
W=(220*#Scale#)
Text="Now Playing#CRLF#%1"
ClipString=1
AntiAlias=1
DynamicVariables=1

[MeterTitle]
Meter=String
MeasureName=MeasureTitle
StringAlign=Left
FontFace=Segoe UI Variable Static Text Light
FontColor=#Color6#,200
FontSize=(8*#Scale#)
X=(0*#Scale#)r
Y=(36*#Scale#)r
W=(220*#Scale#)
Text="%1"
ClipString=1
AntiAlias=1
DynamicVariables=1

___________________________________________________________________________________

[MeterPlayerMask]
Meter=Image
ImageName=#@#Skin Icons/Mask BG.png
X=(-55*#Scale#)r
Y=(-32*#Scale#)r
W=(42*#Scale#)
ImageTint=255,255,255
AntiAlias=1
UpdateDivider=-1
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "MeasureStateButton" "PlayPause"]

[MeterMask3]
Meter=Image
ImageName=#@#Skin Icons/Mask 3.png
X=r
Y=r
W=(42*#Scale#)
AntiAlias=1
UpdateDivider=-1
DynamicVariables=1

[MeterAlbumArt]
Meter=Image
MeasureName=MeasureCover
X=r
Y=r
W=(42*#Scale#)
MaskImageName=#@#Skin Icons/Mask 2.png
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "MeasureStateButton" "PlayPause"]

____________________________________________________Settings____________________________________________________

[MeterskinSettings]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (320*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (120*#Scale#)),(80*#Scale#),(50*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,250
MouseOverAction=[!SetOption MeterskinSettings BGcolor "Fill Color #Color4#,160"][!Update]
MouseLeaveAction=[!SetOption MeterskinSettings BGcolor "Fill Color #Color4#,250"][!Update]
AntiAlias=1
DynamicVariables=1

[SkinSetting]
Meter=Shape
Group=Sliders 
Shape=Rectangle (#SCREENAREAWIDTH# - (313*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (113*#Scale#)),(65*#Scale#),(36*#Scale#),(12*#Scale#) | Extend BGcolor   | StrokeWidth 0 | Stroke Color 0,0,0,0
BGcolor=Fill Color #Color5#
MouseOverAction=[!SetOption SkinSetting BGcolor "Fill Color #Color2#"][!Update]
MouseLeaveAction=[!SetOption SkinSetting BGcolor "Fill Color #Color5#"][!Update]
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider7 "Execute #State3#"][!Update]
AntiAlias=1
DynamicVariables=1

[SkinSettingIcon]
Meter=Image
ImageName=#@#Skin Icons/Skin Settings.png
X=(#SCREENAREAWIDTH# - (301*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (113*#Scale#))
W=(36*#Scale#)
ImageTint=#Color6#
AntiAlias=1
DynamicVariables=1

____________________________________________________Network____________________________________________________

[MeterNetwork]
Meter=Shape
Group=Meters
Shape=Rectangle (#SCREENAREAWIDTH# - (220*#Scale#) + #Offset6#),(#WORKAREAHEIGHT# - (120*#Scale#)),(200*#Scale#),(50*#Scale#),(13*#Scale#) | Extend BGcolor | StrokeWidth 1 | Stroke Color #Color4#,0
BGcolor=Fill Color #Color4#,250
MouseOverAction=[!SetOption MeterNetwork BGcolor "Fill Color #Color4#,160"][!Update]
MouseLeaveAction=[!SetOption MeterNetwork BGcolor "Fill Color #Color4#,250"][!Update]
AntiAlias=1
DynamicVariables=1


[MeasureNetworkIn]
Measure=NetIn
Interface=Best

[MeasureNetworkOut]
Measure=NetOut
Interface=Best


[MeterupDownIcon]
Meter=Image
ImageName=#@#Skin Icons\Download.png
X=(#SCREENAREAWIDTH# - (200*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (112*#Scale#))
W=(18*#Scale#)
ImageTint=#Color6#
DynamicVariables=1

[MeterDownload]
Meter=String
MeasureName=MeasureNetworkOut
MeasureName2=MeasureNetworkIn
StringAlign=Left
FontFace=Segoe UI Variable Static Text
FontColor=#Color6#
FontSize=(10*#Scale#)
X=(#SCREENAREAWIDTH# - (170*#Scale#) + #Offset6#)
Y=(#WORKAREAHEIGHT# - (112*#Scale#))
Text="Up %1bps.#CRLF#Down %2bps."
AntiAlias=1
AutoScale=1
NumOfDecimals=1
DynamicVariables=1





