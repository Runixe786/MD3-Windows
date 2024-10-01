

[Variables]
Velocity=0
Offset2=770
Amount3=50
Offset3=0
Amount4=(#SCREENAREAWIDTH# / 2)
Offset4=0
Amount5=(#SCREENAREAWIDTH# / 2)
Offset5=0
Amount6=400
Offset6=400
Amount7=400
Offset7=400
State=1
State2=1
State3=1
State5=1
SlideAmount=50
SlideAmount2=5
SlideAmount3=15
U=[!UpdateMeasure DeceleratingSlider][!UpdateMeasure DeceleratingSlider2][!UpdateMeasure DeceleratingSlider3][!UpdateMeasure DeceleratingSlider3][!UpdateMeasure DeceleratingSlider4][!UpdateMeasure DeceleratingSlider5][!UpdateMeasure DeceleratingSlider6][!UpdateMeasure DeceleratingSlider7][!UpdateMeterGroup Sliders][!UpdateMeter *][!Redraw]


___________________________________________________________________________________


[DeceleratingSlider2]
Measure=Plugin
Plugin=ActionTimer
Group=Sliders
ActionList1=Repeat SlideRight,3,22
ActionList2=Repeat SlideLeft,3,22
SlideRight=[!SetVariable State5 "2"][!SetVariable Offset2 "(Clamp(#Offset2#-#SlideAmount#,0,(770*#Scale#)))"]#U#
SlideLeft=[!SetVariable State5 "1"][!SetVariable Offset2 "(Clamp(#Offset2#+#SlideAmount#,0,(770*#Scale#)))"]#U#
DynamicVariables=1


[DeceleratingSlider3]
Group=Sliders 
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat SlideDown, 30, 22
SlideDown=[!SetVariable Velocity "(Clamp((#Velocity#+1),0,20))"][!SetVariable Offset3 "(Trunc((#Amount3#-#Amount3#*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
ActionList2=Repeat SlideUp, 30, 22
SlideUp=[!SetVariable Velocity "(Clamp((#Velocity#-1),0,20))"][!SetVariable Offset3 "(Trunc((#Amount3#-#Amount3#*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
DynamicVariables=1


[DeceleratingSlider4]
Group=Sliders 
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat SlideDown, 25, 25
SlideDown=[!SetVariable Velocity "(Clamp((#Velocity#+1),0,20))"][!SetVariable Offset4 "(Trunc(((#Amount4#-(250*#Scale#))-(#Amount4#-(250*#Scale#))*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
ActionList2=Repeat SlideUp, 25, 25
SlideUp=[!SetVariable Velocity "(Clamp((#Velocity#-1),0,20))"][!SetVariable Offset4 "(Trunc(((#Amount4#-(250*#Scale#))-(#Amount4#-(250*#Scale#))*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
DynamicVariables=1


[DeceleratingSlider5]
Group=Sliders 
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat SlideDown, 25, 25
SlideDown=[!SetVariable Velocity "(Clamp((#Velocity#+1),0,20))"][!SetVariable Offset5 "(Trunc(((#Amount5#-(200*#Scale#))-(#Amount5#-(200*#Scale#))*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
ActionList2=Repeat SlideUp, 25, 25
SlideUp=[!SetVariable Velocity "(Clamp((#Velocity#-1),0,20))"][!SetVariable Offset5 "(Trunc(((#Amount5#-(200*#Scale#))-(#Amount5#-(200*#Scale#))*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
DynamicVariables=1

[DeceleratingSlider6]
Group=Sliders 
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat SlideDown, 25, 30
SlideDown=[!SetVariable State2 "2"][!SetVariable Velocity "(Clamp((#Velocity#+1),0,20))"][!SetVariable Offset6 "(Trunc((#Amount6#-#Amount6#*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
ActionList2=Repeat SlideUp, 25, 25
SlideUp=[!SetVariable State2 "1"][!SetVariable Velocity "(Clamp((#Velocity#-1),0,20))"][!SetVariable Offset6 "(Trunc((#Amount6#-#Amount6#*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
DynamicVariables=1


[DeceleratingSlider7]
Group=Sliders 
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat SlideDown, 25, 25
SlideDown=[!SetVariable State3 "2"][!SetVariable Velocity "(Clamp((#Velocity#+1),0,20))"][!SetVariable Offset7 "(Trunc((#Amount7#-#Amount7#*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
ActionList2=Repeat SlideUp, 25, 25
SlideUp=[!SetVariable State3 "1"][!SetVariable Velocity "(Clamp((#Velocity#-1),0,20))"][!SetVariable Offset7 "(Trunc((#Amount7#-#Amount7#*(1-1/(2048**(0.05*#Velocity#))))))"]#U#
DynamicVariables=1
