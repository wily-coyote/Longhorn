[MeasureTime]
Measure=Time

; https://forum.rainmeter.net/viewtopic.php?t=13038
; I would not wish this upon anybody

[MeasureMinutes]
Measure=Calc
Formula=((MeasureTime / 3600) - FLOOR(MeasureTime / 3600))

[MeasureHours]
Measure=Calc
Formula=((MeasureTime / 43200) - FLOOR(MeasureTime / 43200))

[MeasureTime1]
Measure=Time
Format=#clockName#

[MeasureSM1]
Measure=Calc
Formula=Cos((MeasureTime*6)/360*2*PI) * #ScaleFactor#
[MeasureSM2]
Measure=Calc
Formula=Sin((MeasureTime*6)/360*2*PI) * #ScaleFactor#
[MeasureSM3]
Measure=Calc
Formula=-Sin((MeasureTime*6)/360*2*PI) * #ScaleFactor#
[MeasureSM4]
Measure=Calc
Formula=Cos((MeasureTime*6)/360*2*PI) * #ScaleFactor#
[MeasureSM5]
Measure=Calc
Formula=((-150)*#scaledpi#)*MeasureSM1 - ((-150)*#scaledpi#)*MeasureSM2 + #OffsetX#*#scaledpi#
[MeasureSM6]
Measure=Calc
Formula=((-150)*#scaledpi#)*MeasureSM2 + ((-150)*#scaledpi#)*MeasureSM1 + #OffsetY#*#scaledpi#

[MeasureMM1]
Measure=Calc
Formula=Cos((MeasureMinutes)*2*PI) * #ScaleFactor#
[MeasureMM2]
Measure=Calc
Formula=Sin((MeasureMinutes)*2*PI) * #ScaleFactor#
[MeasureMM3]
Measure=Calc
Formula=-Sin((MeasureMinutes)*2*PI) * #ScaleFactor#
[MeasureMM4]
Measure=Calc
Formula=Cos((MeasureMinutes)*2*PI) * #ScaleFactor#
[MeasureMM5]
Measure=Calc
Formula=((-150)*#scaledpi#)*MeasureMM1 - ((-150)*#scaledpi#)*MeasureMM2 + #OffsetX#*#scaledpi#
[MeasureMM6]
Measure=Calc
Formula=((-150)*#scaledpi#)*MeasureMM2 + ((-150)*#scaledpi#)*MeasureMM1 + #OffsetY#*#scaledpi#

[MeasureHM1]
Measure=Calc
Formula=Cos((MeasureHours)*2*PI) * #ScaleFactor#
[MeasureHM2]
Measure=Calc
Formula=Sin((MeasureHours)*2*PI) * #ScaleFactor#
[MeasureHM3]
Measure=Calc
Formula=-Sin((MeasureHours)*2*PI) * #ScaleFactor#
[MeasureHM4]
Measure=Calc
Formula=Cos((MeasureHours)*2*PI) * #ScaleFactor#
[MeasureHM5]
Measure=Calc
Formula=((-150)*#scaledpi#)*MeasureHM1 - ((-150)*#scaledpi#)*MeasureHM2 + #OffsetX#*#scaledpi#
[MeasureHM6]
Measure=Calc
Formula=((-150)*#scaledpi#)*MeasureHM2 + ((-150)*#scaledpi#)*MeasureHM1 + #OffsetY#*#scaledpi#

[MeasureShowS]
Measure=Calc
Formula=#showseconds# = 0 ? 0 : 1
