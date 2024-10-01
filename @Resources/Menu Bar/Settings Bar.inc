[Rainmeter]
Author=link
AccurateText=1

[Variables]
______________________________________________________________

[SettingsSlider]
Meter=Shape
X=(#SCREENAREAWIDTH# - (335*#Scale#) + #Offset7#)
Y=(#WORKAREAHEIGHT# - #WORKAREAHEIGHT#)
Shape=Rectangle 0,0,(330*#Scale#),(#WORKAREAHEIGHT# - (55*#Scale#)),(13*#Scale#) | Fill Color 20,20,20 | StrokeWidth 0 | Stroke Color 2,2,2,0
MouseLeaveAction=[!CommandMeasure DeceleratingSlider7 "Execute #State3#"][!Update]
DynamicVariables=1
____________________________________________________

[MeterSettingsPageText]
Meter=String
StringAlign=Center
StringStyle=Bold
FontFace=Segoe UI Bold
FontColor=255,255,255
FontSize=(20*#Scale#)
X=(170*#Scale#)r
Y=(25*#Scale#)r
Text="SETTINGS"
AntiAlias=1
DynamicVariables=1
____________________________________________________

[MeterSkinColorText]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Bold
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(65*#Scale#)r
Text=Change Skin Color
AntiAlias=1
DynamicVariables=1

[MeterTextColor1]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Light
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(35*#Scale#)r
Text=Color 1     >>>>>>>>>
AntiAlias=1
DynamicVariables=1

[MeterTextColor1a]
Meter=String
StringAlign=Center
FontFace=Segoe UI
FontColor=#Color1#
FontSize=(12*#Scale#)
X=(230*#Scale#)r
Y=0r
W=(100*#Scale#)
Text=#Color1#
AntiAlias=1
SolidColor=0,0,0,80
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=Color1" "FileName=#@#Variables.inc"]
FinishAction=[!Refresh *]
DynamicVariables=1
____________________________________________________

[MeterTextColor2]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Light
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(35*#Scale#)r
Text=Color 2    >>>>>>>>>
AntiAlias=1
DynamicVariables=1

[MeterTextColor2a]
Meter=String
StringAlign=Center
FontFace=Segoe UI
FontColor=#Color2#
FontSize=(12*#Scale#)
X=(230*#Scale#)r
Y=0r
W=(100*#Scale#)
Text=#Color2#
AntiAlias=1
SolidColor=0,0,0,80
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=Color2" "FileName=#@#Variables.inc"]
FinishAction=[!Refresh *]
DynamicVariables=1
____________________________________________________

[MeterTextColor3]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Light
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(35*#Scale#)r
Text=Color 3    >>>>>>>>>
AntiAlias=1
DynamicVariables=1

[MeterTextColor3a]
Meter=String
StringAlign=Center
FontFace=Segoe UI
FontColor=#Color3#
FontSize=(12*#Scale#)
X=(230*#Scale#)r
Y=0r
W=(100*#Scale#)
Text=#Color3#
AntiAlias=1
SolidColor=0,0,0,80
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=Color3" "FileName=#@#Variables.inc"]
FinishAction=[!Refresh *]
DynamicVariables=1
____________________________________________________

[MeterTextColor4]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Light
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(35*#Scale#)r
Text=Color 4    >>>>>>>>>
AntiAlias=1
DynamicVariables=1

[MeterTextColor4a]
Meter=String
StringAlign=Center
FontFace=Segoe UI
FontColor=#Color4#
FontSize=(12*#Scale#)
X=(230*#Scale#)r
Y=0r
W=(100*#Scale#)
Text=#Color4#
AntiAlias=1
SolidColor=0,0,0,80
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=Color4" "FileName=#@#Variables.inc"]
FinishAction=[!Refresh *]
DynamicVariables=1
____________________________________________________

[MeterTextColor5]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Light
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(35*#Scale#)r
Text=Color 5    >>>>>>>>>
AntiAlias=1
DynamicVariables=1

[MeterTextColor5a]
Meter=String
StringAlign=Center
FontFace=Segoe UI
FontColor=#Color5#
FontSize=(12*#Scale#)
X=(230*#Scale#)r
Y=0r
W=(100*#Scale#)
Text=#Color5#
AntiAlias=1
SolidColor=0,0,0,80
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=Color5" "FileName=#@#Variables.inc"]
FinishAction=[!Refresh *]
DynamicVariables=1
____________________________________________________

[MeterTextColor6]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Light
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(35*#Scale#)r
Text=Color 6    >>>>>>>>>
AntiAlias=1
DynamicVariables=1

[MeterTextColor6a]
Meter=String
StringAlign=Center
FontFace=Segoe UI
FontColor=#Color6#
FontSize=(12*#Scale#)
X=(230*#Scale#)r
Y=0r
W=(100*#Scale#)
Text=#Color6#
AntiAlias=1
SolidColor=0,0,0,80
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=Color6" "FileName=#@#Variables.inc"]
FinishAction=[!Refresh *]
DynamicVariables=1
____________________________________________________

[MeterSkinSizeText]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Bold
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(55*#Scale#)r
Text=Change Skin Size
AntiAlias=1
DynamicVariables=1

[MeterSkinSize1]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=(20*#Scale#)r
Y=(35*#Scale#)r
Text=70%
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSkinSize1A][!HideMeter MeterSkinSize1][!Update]

[MeterSkinSize1A]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=70%
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables SkinSize "0.7" "#@#Variables.inc"][!ShowMeter MeterSkinSize1][!HideMeter MeterSkinSize1A][!Refresh *]
MouseLeaveAction=[!ShowMeter MeterSkinSize1][!HideMeter MeterSkinSize1A][!Update]

[MeterSkinSize2]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=(50*#Scale#)r
Y=r
Text=80%
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSkinSize2A][!HideMeter MeterSkinSize2][!Update]

[MeterSkinSize2A]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=80%
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables SkinSize "0.8" "#@#Variables.inc"][!ShowMeter MeterSkinSize2][!HideMeter MeterSkinSize2A][!Refresh *]
MouseLeaveAction=[!ShowMeter MeterSkinSize2][!HideMeter MeterSkinSize2A][!Update]

[MeterSkinSize3]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=(50*#Scale#)r
Y=r
Text=90%
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSkinSize3A][!HideMeter MeterSkinSize3][!Update]

[MeterSkinSize3A]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=90%
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables SkinSize "0.9" "#@#Variables.inc"][!ShowMeter MeterSkinSize3][!HideMeter MeterSkinSize3A][!Refresh *]
MouseLeaveAction=[!ShowMeter MeterSkinSize3][!HideMeter MeterSkinSize3A][!Update]


[MeterSkinSize4]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=(50*#Scale#)r
Y=r
Text=100%
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSkinSize4A][!HideMeter MeterSkinSize4][!Update]

[MeterSkinSize4A]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=100%
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables SkinSize "1" "#@#Variables.inc"][!ShowMeter MeterSkinSize4][!HideMeter MeterSkinSize4A][!Refresh *]
MouseLeaveAction=[!ShowMeter MeterSkinSize4][!HideMeter MeterSkinSize4A][!Update]


[MeterSkinSize5]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=(50*#Scale#)r
Y=r
Text=110%
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSkinSize5A][!HideMeter MeterSkinSize5][!Update]

[MeterSkinSize5A]
Meter=String
StringAlign=Center
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=110%
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables SkinSize "1.1" "#@#Variables.inc"][!ShowMeter MeterSkinSize5][!HideMeter MeterSkinSize5A][!Refresh *]
MouseLeaveAction=[!ShowMeter MeterSkinSize5][!HideMeter MeterSkinSize5A][!Update]
____________________________________________________

[MeterSkinDockText]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Bold
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(55*#Scale#)r
Text=Customize Dock & Icon
AntiAlias=1
DynamicVariables=1

[MeterSkinDock]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=r
Y=(30*#Scale#)r
Text=Change Dock & Icon
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSkinDockA][!HideMeter MeterSkinDock][!Update]

[MeterSkinDockA]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Change Dock & Icon
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=["#ROOTCONFIGPATH#@Resources\DockPath.inc"][!ShowMeter MeterSkinDock][!HideMeter MeterSkinDockA][!Refresh *]
MouseLeaveAction=[!ShowMeter MeterSkinDock][!HideMeter MeterSkinDockA][!Update]


[MeterLeft]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=r
Y=(30*#Scale#)r
Text=Left TaskBar
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterLeftA][!HideMeter MeterLeft][!Update]

[MeterLeftA]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Left TaskBar
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider4 "Execute 1"][!CommandMeasure DeceleratingSlider4 "Stop2"][!WriteKeyValue Variables Offset4 "0" "#@#Slider.inc"][!CommandMeasure DeceleratingSlider5 "Execute 1"][!CommandMeasure DeceleratingSlider5 "Stop2"][!WriteKeyValue Variables Offset5 "0" "#@#Slider.inc"][!ShowMeter MeterLeft][!HideMeter MeterLeftA][!Update]
MouseLeaveAction=[!ShowMeter MeterLeft][!HideMeter MeterLeftA][!Update]


[MeterCenter]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=(160*#Scale#)r
Y=r
Text=Center TaskBar
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterCenterA][!HideMeter MeterCenter][!Update]

[MeterCenterA]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(600*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Center TaskBar
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!CommandMeasure DeceleratingSlider4 "Execute 2"][!CommandMeasure DeceleratingSlider4 "Stop1"][!WriteKeyValue Variables Offset4 "((#SCREENAREAWIDTH# / 2)-250*#Scale#)" "#@#Slider.inc"][!CommandMeasure DeceleratingSlider5 "Execute 2"][!CommandMeasure DeceleratingSlider5 "Stop1"][!WriteKeyValue Variables Offset5 "((#SCREENAREAWIDTH# / 2)-200*#Scale#)" "#@#Slider.inc"][!ShowMeter MeterCenter][!HideMeter MeterCenterA][!Update]
MouseLeaveAction=[!ShowMeter MeterCenter][!HideMeter MeterCenterA][!Update]
____________________________________________________

[MeterMediaPlayerText]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Bold
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(55*#Scale#)r
Text=Choose Media Player
AntiAlias=1
DynamicVariables=1

[MeterMediaMonkeyButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(35*#Scale#)r
Text=MediaMonkey
SolidColor=0,0,0,1
AntiAlias=1
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterMediaMonkeyButtonActive][!HideMeter MeterMediaMonkeyButtonPassive][!Update]

[MeterMediaMonkeyButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=MediaMonkey
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterMediaMonkeyButtonPassive][!HideMeter MeterMediaMonkeyButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player MediaMonkey "#@#Variables.inc"][!Refresh *]

[MeteriTunesButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=iTunes
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeteriTunesButtonActive][!HideMeter MeteriTunesButtonPassive][!Update]

[MeteriTunesButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=iTunes
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeteriTunesButtonPassive][!HideMeter MeteriTunesButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player iTunes "#@#Variables.inc"][!Refresh *]

[MeterWMPButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=Windows Media Player
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterWMPButtonActive][!HideMeter MeterWMPButtonPassive][!Update]

[MeterWMPButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Windows Media Player
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterWMPButtonPassive][!HideMeter MeterWMPButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player WMP "#@#Variables.inc"][!Refresh *]

[MeterWinampButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=Winamp
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterWinampButtonActive][!HideMeter MeterWinampButtonPassive][!Update]

[MeterWinampButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Winamp
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterWinampButtonPassive][!HideMeter MeterWinampButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player Winamp "#@#Variables.inc"][!Refresh *]

[MeterFoobar2000ButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=Foobar2000
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterFoobar2000ButtonActive][!HideMeter MeterFoobar2000ButtonPassive][!Update]

[MeterFoobar2000ButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Foobar2000
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterFoobar2000ButtonPassive][!HideMeter MeterFoobar2000ButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player CAD "#@#Variables.inc"][!Refresh *]

[MeterAIMPButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=AIMP
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterAIMPButtonActive][!HideMeter MeterAIMPButtonPassive][!Update]

[MeterAIMPButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=AIMP
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterAIMPButtonPassive][!HideMeter MeterAIMPButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player AIMP "#@#Variables.inc"][!Refresh *]

[MeterMusicBeeButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=MusicBee
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterMusicBeeButtonActive][!HideMeter MeterMusicBeeButtonPassive][!Update]

[MeterMusicBeeButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=MusicBee
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterMusicBeeButtonPassive][!HideMeter MeterMusicBeeButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player CAD "#@#Variables.inc"][!Refresh *]

[MeterSpotifyButtonPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
Text=Spotify
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter MeterSpotifyButtonActive][!HideMeter MeterSpotifyButtonPassive][!Update]

[MeterSpotifyButtonActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(11*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
Text=Spotify
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
MouseLeaveAction=[!ShowMeter MeterSpotifyButtonPassive][!HideMeter MeterSpotifyButtonActive][!Update]
LeftMouseDownAction=[!WriteKeyValue Variables Player Spotify "#@#Variables.inc"][!Refresh *]
____________________________________________________

[MeterClockText]
Meter=String
StringAlign=Left
FontColor=255,255,255
FontFace=Segoe UI Bold
FontSize=(12*#Scale#)
X=(#SCREENAREAWIDTH# - (305*#Scale#) + #Offset7#)
Y=(55*#Scale#)r
Text=Change Time
AntiAlias=1
DynamicVariables=1

[Meter24hPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=r
Y=(35*#Scale#)r
W=(120*#Scale#)
Text=24 h Clock
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter Meter24hActive][!HideMeter Meter24hPassive][!Update]

[Meter24hActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
W=(120*#Scale#)
Text=24 h Clock
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables Format "H" "#@#Variables.inc"][!WriteKeyValue Variables Hidden2 "1" "#@#Variables.inc"][!WriteKeyValue Variables Hidden "0" "#@#Variables.inc"][!ShowMeter Meter24hPassive][!HideMeter Meter24hActive][!Refresh *]
MouseLeaveAction=[!ShowMeter Meter24hPassive][!HideMeter Meter24hActive][!Update]

[Meter12hPassive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontColor=255,255,255
X=r
Y=(25*#Scale#)r
W=(120*#Scale#)
Text=12 h Clock
SolidColor=0,0,0,1
AntiAlias=1
MouseOverAction=[!ShowMeter Meter12hActive][!HideMeter Meter12hPassive][!Update]

[Meter12hActive]
Meter=String
StringAlign=Left
FontFace=Segoe UI Light
FontSize=(13*#Scale#)
FontWeight=(800*#Scale#)
FontColor=18,160,230
X=r
Y=r
W=(120*#Scale#)
Text=12 h Clock
SolidColor=0,0,0,1
AntiAlias=1
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables Format "#I" "#@#Variables.inc"][!WriteKeyValue Variables Hidden2 "0" "#@#Variables.inc"][!WriteKeyValue Variables Hidden "1" "#@#Variables.inc"][!ShowMeter Meter12hPassive][!HideMeter Meter12hActive][!Refresh *]
MouseLeaveAction=[!ShowMeter Meter12hPassive][!HideMeter Meter12hActive][!Update]

