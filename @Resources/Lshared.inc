[Rainmeter]
ContextTitle=Edit variables...
ContextAction=["#CONFIGEDITOR#" "#@#Bvariables.inc"]
MiddleMouseUpAction=!Refresh
Group=MD# Windows

; ===== STYLES


[Long]
Shape=Rectangle 0,0,135,129,15  
UpdateDivider=-1
AntiAlias=1


[Bar]
W=150
H=150
Container=#CURRENTSECTION#Container
SolidColor=[&MeterialYou:GetToken("OnSecondaryContainer")]
BarColor=[&MeterialYou:GetToken("Primary")]
DynamicVariables=1
AntiAlias=1
Flip=0

[Start]
X=9
Y=9

[Next]
X=9
Y=9

[Background]
Meter=Shape
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#+9),(#CURRENTCONFIGHEIGHT#+9),18| Fill Color [&MeterialYou:GetToken("OnSurface")]
DynamicVariables=1
AntiAlias=1
UpdateDivider=-1




