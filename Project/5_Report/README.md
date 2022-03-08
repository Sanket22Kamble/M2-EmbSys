# Automatic Water Level Controller
## Abstract
Automatic water level controllers are a product that was created to automatically control a motor, which helps to ensure a constant reserve of water in a storage tank. These automatic water level controllers are used to automatically fill the over-head tank.

A water level controller senses the level of water in a tank and drives the water pump. Water level controllers switch the motor on whenever the water level drops below a certain level and shuts the motor off when the water rises well above a fixed level. This circuit which will detect the water level and will blink a red or green colour upon getting the water tank full or a preset level.

![maxresdefault_7_34](https://user-images.githubusercontent.com/98873866/157159470-b4c4fae8-3b65-4603-acaa-716704d9c62e.jpg)


## Requirements :
### High Level Requirements

|ID	    |DESCRIPTION
|:------|:-------------
|HLR01	|Servo motor should be ON/OFF at desired level.
|HLR02	|Ultrasonic Sensor should sense the level of water in tank.
|HLR03	|LED should glow RED/GREEN.
|HLR04	|Voltmeter should measure the voltage.

### Low Level Requirements
|ID	    |Description                                               |HLR ID
|:------|:---------------------------------------------------------|:----
|LLR01	|Servo motor valve should be opened when the water is less.|HLR01
|LLR02	|Servo motor valve should be closed when water is full.    |HLR01
|LLR03	|LED should glow Red when valve is open.                   |HLR03
|LLR04	|LED should glow green when valve is closed.               |HLR03
|LLR05	|Potentiometer should regulate the voltage properly.       |HLR04

# Block Diagram :

![Water_level_controller](https://user-images.githubusercontent.com/98873866/155764874-7e646d92-cba2-4127-8f11-fcbfc1ccee74.png)

# Components :
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

## Servo Motor (Actuator) :
* The function of the servo motor is to convert the control signal of the controller into the rotational angular displacement or angular velocity of the motor output shaft. Servo motor is used to drive the joints.

## LED :
* LED is a semiconductor device used in many electronic devices, mostly used for indication purposes. It is used widely as indicator during test for checking the validity of results at different stages.
* When servo motor valve open, the Red LED will glow indicating that there is less water within the tank and when the water level continues to increases and reaches the tank, Green LED will glow.


## SWOT analysis :
![Screenshot (24)](https://user-images.githubusercontent.com/98873866/157003729-e473d56c-a676-410b-a291-6f4180eb1180.png)

 ### STRENGTHS
* Easy to install, manage and maintain and low maintenance.
* Highly reliable and Economically competitive.
* Enhanced Security of Urban Water supply and Water use efficiency.
 
 ### WEAKNESSES
* The automatic water level controller shows poor durability.
* When a problem arose, there is no built-in function to help identify the source of the
failure.
* Water level controls need to be replaced every 3 years.

 ### OPPORTUNITIES
* It Develops Water Saving Technology.
* Maximize Water supply Benefits and provide balanced allocation of water resources.


 ### THREATS
* Skills for repair/spare parts not available in most of the areas.
* Any sort of defect or fault in the circuit will cause problem in water supply. 


## 4 W's and 1H's
 ### Who :
 * Everyone can use this device as for their commercial, industrial or domestic use.
 ### What :
 * This system is Automatic so it doesn't requires manual work which saves human time and energy.
 ### When :
 * This system is used when the water tank level is empty or full.
 ### Where :
 * In water supply system , Agricultural Use and also in Use for Hydropower Generation.
 ### How :
 * Automatic water level controllers switch the motor on whenever the water level drops below a certain level and shuts the motor off when the water rises well above a fixed level.
 

# Applications :
* It is used in Pump controller and can be used in water tanks to control water levels.
* It is used in Irrigation control as it automatically turn ON/OFF pumps.
* It can be used in factories, commercial complexes, apartments, home.
* It can be used in Oil tank Level Control.
* It can also be used in Sewage pump level control.

## Design :
### Behavourial :
 #### Flowchart
 
 ![Blank diagram](https://user-images.githubusercontent.com/98873866/155834244-e634cc92-1265-4852-8f34-73866a3568b4.png)

### Structural Diagram :
![images (13)](https://user-images.githubusercontent.com/98873866/155841419-becd2e23-8cb6-46f1-9c6d-ddafbdb8aa35.jpeg)

# TEST PLAN
## HIGH LEVEL TEST PLAN

|Test ID | Description | Exp I/P | Exp O/P | Exp O/P |
|--------|-------------|---------|---------|---------|
|HR_01    |Servo motor should ON/OFF             |Power supply         |  Servo Motor will ON/OFF        | Passed        |
|HR_02    |  Ultra-sonic sensor should sense the water level           | Water should be there in the tank to sense the level of water        |Sensor will sense the water level in the tank         | Passed  |
|HR_03    |  LED should glow RED/GREEN           | After sensing  Arduino will glow LED red or green        |   Red/green LED should glow      |    Passed     |
|HR_04    |         Voltmeter should measure the voltage    |      Potentiometer    |    Voltmeter will show the readings according to the potentiometer     |    Passed     |



## LOW LEVEL TEST PLAN

|Test ID | Description | Exp I/P | Exp O/P | Exp O/P |
|--------|-------------|---------|---------|---------|
|LR_01    |Servo motor valve should be open when the water is less.            |Less water level        |  Servo Motor will ON      | Passed        |
|LR_02    | Servo motor valve should close when water is full.       | Full water level       |Servo Motor will OFF     | Passed  |
|LR_03    |  LED should glow Red when valve is open.          | Taking input from Arduino       |   Red LED will glow    |    Passed     |
|LR_04    |         LED should glow green when valve is closed.|     Taking input from Arduino    |    Green LED will glow    |    Passed     |
|LR_05   |      Potentiometer should regulate the voltage properly|     5V supply  |    Voltmeter will show the reading.    |    Passed     |



## When motor valve is open :
![Screenshot (22)](https://user-images.githubusercontent.com/98873866/157002042-dec88598-cba4-46b9-bdb4-4b9f1ae2c09c.png)

## When motor valve is closed :
![Screenshot (23)](https://user-images.githubusercontent.com/98873866/157002261-8ce69871-bb58-409f-8234-5972244fa408.png)


## Arduino Programming :
![Arduino_module2_image - Copy](https://user-images.githubusercontent.com/98873866/157063792-96008ecb-8e63-44c7-bba5-14522632a03a.png)

