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
| HR05   | Smoke detector,fire alarm system or any component of that system which fails should be repaired or replaced immediately.


# Applications :
* Fire Alarm Circuits are very useful in homes, offices, schools, labs, etc. to detect and prevent any disasters due to fire.
* For residential applications, smoke detectors should be installed outside.
* Fire Alarm Systems can work as a stand – alone devices or be a part of a complex home security system with other security features like smoke detection, intruder alert, motion detection, etc.
* Installing Fire Alarm Systems and Smoke Sensors in commercial buildings like offices, movie theatres, shopping malls and other public places is compulsory.
 
 
# Mid-Complex Embedded System

# Vacuum Cleaner
![Vaccum Cleaner (3)](https://user-images.githubusercontent.com/98873866/154832153-52ef89b6-cc54-4b92-a4c2-df091efe6e0f.png)



# Components :

## Mechanical Keypad :
* Mechanical Keypad is used to give input instruction from users to Vacuum Cleaner such as suction pressure, speed , timer , automatic on/off modes.

## EEPROM :
* EEPROM is user-modifiable read-only memory (ROM) that allow users to erase and reprogram stored data repeatedly in Vaccum Cleaner.

## Main Switch :
* The main switch provides a high speed/low speed switch and a power switch.  The power switch is automatically moved to its open or OFF position in response to the mounting of an accessory.
* The control switch and motor provide plug-type connectors which automatically connect the internal motor wiring when the switch is installed.

## Analog to Digital Converter (ADC) :
* An analog-to-digital converter (ADC) is used to convert an analog signal such as voltage to a digital form so that it can be read and processed by a microcontroller.

## Relay :
* An Vacuum Cleaner uses relays to switch the system's high-voltage parts on and off.


## Backlight :
* A backlight is a form of illumination used in LCD. Backlights are used in small displays to increase readability in low light conditions such as in Vacuum Cleaner to produce light in a manner similar to a CRT display.

## LCD :
* The vacuum cleaner also has an LCD Digital Display that provides all the information including your suction level settings and remaining battery time at a glance. 

## Buffer :
* When the buffer is in operation, a vacuum force starts water flowing through a hose; as it enters the combustion chamber of the engine, it cools the engine in the form of a mist that turns to steam when it encounters the engine's high temperatures.

## Temperature sensor :
* It is used to detect temperature of system .

## Buzzer :
* The use of Buzzer in vaccum cleaner is to give warning to user to turn off switch if system detects any fault.

## Signal Conditioning and Comparators :
* The main function of a signal conditioner & Comparator is to pick up the signal and convert it into a higher level of electrical signal.

## Gate driver :
* A gate driver is a power amplifier that accepts a low power input from a controller and produces the appropriate high current gate drive for a power device.

## BLDC motor :
* BLDC motor spins a fan, sucking in air and any small particles caught up in it and pushing it out the other side, into a bag to create the negative pressure.

# Requirements
## Low Level Requirements

|ID     |      Description
|:----- |:--------------------------
| LR01  | Users must be able to input in mechanical keypad 
| LR02  | Comparator should be able to pick up the signal and convert it into a higher level of electrical signal.
| LR03  | It should be able to detect temperature of the system.
| LR04  | ADC should be able to give signal to microcontroller.
| LR05  | Microcontroller should give signal to activate buzzer.


## High Level Requirements
| ID    |      Description
|:----- |:--------------------------
|  HR01 | It should be able to detect dust on floor or surfaces.
|  HR02 | It should adjust the speed and suction pressure whenever needed.
|  HR03 | It should show display on mechanical keypad.
|  HR04 | It should be able to switch into a low power mode after a reasonable amount of time.
|  HR05 | It should have low noise level while working.

# Applications :
* They are majorly used to remove dirt and dust from  carpets, velveteen furniture and floors.
* Vacuum cleaner Captures Excess Pet Hair ,Trap Dust Before It Spreads,Clean Kitchen Appliances.
* Use the vacuum cleaner to remove dust from the refrigerator coils and condenser. 
* Vacuum Cleaner helps you to get small items, if you dropped something small like an earring, nail, or screw behind a piece of furniture.

