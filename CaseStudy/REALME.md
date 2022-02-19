# Fire Alarm Circuit
![Fire Alarm Circuit (2)](https://user-images.githubusercontent.com/98873866/154792901-72a432dc-1bca-40cc-b042-e060988e817d.png)

# Components Used
 ## Main Switch Supply :
  * A well regulated power supply is essential for this circuit because even slight variations in the supply voltage could alter the biasing of the transistor used in the fire    sensing section and this could seriously affect the circuit’s performance.
  * Switch Supply is used to provide voltage to the microcontroller, Display , Alarm ,Sensors etc.

## Smoke Sensor :
  * A Smoke Sensor is a smoke sensing device that indicates fire. It can detect flammable gas. It's most common use is domestic gas leakage alarms and detectors with a high sensitivity to propane and smoke.
  * It can detect flammable gas.It's most common use is domestic gas leakage alarms and detectors with a high sensitivity to propane and smoke.
 
## Temperature Sensor :
* Temperature Sensor can be used in fire alarms to detect fires based on a sudden change in temperature.
* The temperature sensor sense the temprature if it exceeds the max temperature level then it sends the signal to the ADC. If fire is detected, then fire sensor gives signal to the microcontroller.

## Analog to Digital converter (ADC) :
* The Analog to Digital Converter Module can be used as a fire alarm by connecting the temperature sensor which is an analog type. The module converts the analog signal to digital signal and activates the output.
* ADC receive signal from temp sensor & smoke sensor & convert it into digital form & this digital signal sends to the microcontroller.

## Microcontroller (8051) :
* The 8051 family of microcontrollers is based on an architecture which is highly
optimized for embedded control systems like in this fire alarm system.
* Once microcontroller gets signal from sensors (via ADC), if fire is detected then it will immediately turn on the buzzer & send the signal to the GSM modem.

## 
