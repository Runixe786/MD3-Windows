[Rainmeter]
ContextTitle=Edit variables...
ContextAction=["#CONFIGEDITOR#" "#@#variables.inc"]
MiddleMouseUpAction=!Refresh
Group=MD# Windows

; ===== STYLES


[Long]
Shape=Rectangle 0,0,(#IconSize#*4.5),(#IconSize#*4.3),15 | StrokeWidth 0  
UpdateDivider=-1


[BarL]
W=[#CURRENTSECTION#Container:W]
H=[#CURRENTSECTION#Container:H]
Container=#CURRENTSECTION#Container
SolidColor=[&MeterialYou:GetToken("OnPrimaryContainer")]
BarColor=[&MeterialYou:GetToken("Primary")]
DynamicVariables=1
Flip=0

[BarD]
W=[#CURRENTSECTION#Container:W]
H=[#CURRENTSECTION#Container:H]
Container=#CURRENTSECTION#Container
SolidColor=[&MeterialYou:GetToken("OnSecondary")]
BarColor=[&MeterialYou:GetToken("PrimaryContainer")]
DynamicVariables=1
Flip=0

[Start]
X=9
Y=9

[Next]
X=9
Y=9

[Background]
Meter=Shape
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#+9),(#CURRENTCONFIGHEIGHT#+9),18| Fill Color [&MeterialYou:GetToken("OnBackground")]
DynamicVariables=1
 | StrokeWidth 0
UpdateDivider=-1

[Background1]
Meter=Shape
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#+9),(#CURRENTCONFIGHEIGHT#+9),18| Fill Color 255,255,255,100
DynamicVariables=1
 | StrokeWidth 0
UpdateDivider=-1




