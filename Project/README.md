# Automatic Water Level Controller
Automatic water level controllers are a product that was created to automatically control a motor, which helps to ensure a constant reserve of water in a storage tank. These automatic water level controllers are used to automatically fill the over-head tank.

A water level controller senses the level of water in a tank and drives the water pump. Water level controllers switch the motor on whenever the water level drops below a certain level and shuts the motor off when the water rises well above a fixed level. This circuit which will detect the water level and will blink a red or green colour upon getting the water tank full or a preset level.

# Requirements :
## High Level Requirements

|ID	    |DESCRIPTION
|:------|:-------------
|HLR01	|Servo motor should be ON/OFF at desired level.
|HLR02	|Ultrasonic Sensor should sense the level of water in tank.
|HLR03	|LED should glow RED/GREEN.
|HLR04	|Voltmeter should measure the voltage.

## Low Level Requirements
|ID	    |Description                                               |HLR ID
|:------|:---------------------------------------------------------|:----
|LLR01	|Servo motor valve should be opened when the water is less.|HLR01
|LLR02	|Servo motor valve should be closed when water is full.    |HLR01
|LLR03	|LED should glow Red when valve is open.                   |HLR03
|LLR04	|LED should glow green when valve is closed.               |HLR03
|LLR05	|Potentiometer should regulate the voltage properly.       |HLR04



# Block Diagram :

![Water_level_controller](https://user-images.githubusercontent.com/98873866/155764874-7e646d92-cba2-4127-8f11-fcbfc1ccee74.png)

## Components :

 ## Main Switch :
 * A main switch detects the level of a water in a tank. Based on the water level, it will open or close an electrical circuit generally used to pump water in or out of the tank.
 * The control switch and motor provide plug-type connectors which automatically connect the internal motor wiring when the switch is installed. Switch Supply is used to provide voltage to the Arduino, Servo motor, Sensors etc.

## Arduino :
* Arduino is an open-source electronics platform based on easy-to-use hardware and software.
* Arduino reads the voltage dropped across each pull down resistor for sensing the level of water in the tank.

## Voltmeter :
* A voltmeter is an instrument used for measuring electric potential difference between two points in an electric circuit.
* In this circuit we have connected voltmeter to potentiometer and Ultrasonic sensor.

## Potentiometer :
* The mechanical system of sensor is destined to convert linearly the value of potentiometer resistance to the water level variation. The signal conditioning consists of analog and digital system especially microcontroller circuit.

## Ultrasonic Sensor (HC-SR01) :
* To determine the distance to the water, it transmits a sound pulse that reflects from the surface of the water and measures the time it takes for the echo to return. To automatically control open and close the water gate, we use Ultrasonic sensors as input values.

## Servo Motor :
* The function of the servo motor is to convert the control signal of the controller into the rotational angular displacement or angular velocity of the motor output shaft. Servo motor is used to drive the joints.

## LED :
* LED is a semiconductor device used in many electronic devices, mostly used for indication purposes. It is used widely as indicator during test for checking the validity of results at different stages.
* When servo motor valve open, the Red LED will glow indicating that there is less water within the tank and when the water level continues to increases and reaches the tank, Green LED will glow.

# Applications :
* It is used in Pump controller and can be used in water tanks to control water levels.
* It is used in Irrigation control as it automatically turn ON/OFF pumps.
* It can be used in factories, commercial complexes, apartments, home.
* It can be used in Oil tank Level Control.
* It can also be used in Sewage pump level control.
