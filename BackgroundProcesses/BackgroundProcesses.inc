[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

; [MeasureCPUTemp]
; Measure=Plugin
; Plugin=CoreTemp
; CoreTempType=Temperature
; CoreTempIndex=0
; OnChangeAction=[!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
; UpdateDivider=10

[RandomSizeLabel]
Measure = Calc
UpdateRandom = 1
LowBound = 14
HighBound = 18
Formula = Random

[RandomSizeInput]
Measure = Calc
UpdateRandom = 1
LowBound = 10
HighBound = 15
Formula = Random 
