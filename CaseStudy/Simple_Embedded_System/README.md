# Simple Embedded System
# Fire Alarm Circuit
![Fire Alarm Circuit (2)](https://user-images.githubusercontent.com/98873866/154792901-72a432dc-1bca-40cc-b042-e060988e817d.png)

# Components :
 ## Main Switch Supply :
  * A well regulated power supply is essential for this circuit because even slight variations in the supply voltage could alter the biasing of the transistor used in the fire    sensing section and this could seriously affect the circuit’s performance.
  * Switch Supply is used to provide voltage to the microcontroller, Display , Alarm ,Sensors etc.

## Smoke Sensor :
  * A Smoke Sensor is a smoke sensing device that indicates fire. It can detect flammable gas. It's most common use is domestic gas leakage alarms and detectors with a high sensitivity to propane and smoke.
  * It can detect flammable gas.It's most common use is domestic gas leakage alarms and detectors with a high sensitivity to propane and smoke.
 
## Temperature Sensor :
* Temperature Sensor can be used in fire alarms to detect fires based on a sudden change in temperature.
* The temperature sensor sense the temperature if it exceeds the max temperature level then it sends the signal to the ADC. If fire is detected, then fire sensor gives signal to the microcontroller.

## Analog to Digital converter (ADC) :
* The Analog to Digital Converter Module can be used as a fire alarm by connecting the temperature sensor which is an analog type. The module converts the analog signal to digital signal and activates the output.
* ADC receive signal from temp sensor & smoke sensor & convert it into digital form & this digital signal sends to the microcontroller.

## Microcontroller (8051) :
* The 8051 family of microcontrollers is based on an architecture which is highly
optimized for embedded control systems like in this fire alarm system.
* Once microcontroller gets signal from sensors (via ADC), if fire is detected then it will immediately turn on the buzzer & send the signal to the GSM modem.

## Display :
* Display presents vital information to operators concerning a fire situation, fire progression and evacuation details.

## Alarm :
* The primary purpose of fire alarm system is to provide an early warning of fire so that people can be evacuated & immediate action can be taken to stop or eliminate of the fire effect as soon as possible.
* Mainly Buzzer is used for alarm system. If fire is detecting, then microcontroller sends signal to the buzzer. Buzzer is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers include alarm devices.

## Automatic Water Sprinkler :
* An Automatic water sprinkler system is a system of sprinklers that release water to control and extinguish fires. These systems are activated by heat or smoke (or both). For many types of fires, water is an effective or the most effective fire suppression agent.

## GSM :
* A GSM (Global system for mobile Communication) modem interfaced with the microcontroller gets the
required command from the microcontroller to send an predefined message in the
form of an alerting sms to a single or multiple users.
* We used GSM modem for message sending. When microcontroller detects fire then it sends information to the GSM modem, then GSM modem sends this information via SMS. GSM modem is used to send the message to the fire stations well as to the responsible person.

# Requirements :
## Low Level Requirements

|   ID   |      Description
|:------ |:--------------------------
| LR01   | It should be able to monitor the given area.
| LR02   | Temperature should be sensed by smoke sensor.
| LR03   | Smoke should be sensed by smoke sensor.
| LR04   | ADC should receive signal from temperature sensor & smoke sensor.
| LR05   | The alarm system should be tested weekly to make sure all sensors and transmitters are work.

## High Level Requirements

|  ID    |      Description                                                           
|:-------|:----------------------------------------------------------------------------|
| HR01   | Fire alarm circuit should always be on.                                     |
| HR02   | It should be able to display temperature on screen.                         |
| HR03   | It should be able to turn on alarm circuit (Using Buzzer).                  |
| HR04   | It should be able to turn on automatic water sprinkler to get rid-off fire. |
| HR05   | Smoke detector,fire alarm system or any component of that system which fails should be repaired or replaced immediately




