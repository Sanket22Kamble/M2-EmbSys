# Automatic Water Level Controller
## Badges

|  Codeac                                                                                      | code grade            | Codacy Code Quality 
|:-------------------------------------------------------------------------------------------------------------:|:---------------------:|:------------------------- 
|[![Codeac](https://static.codeac.io/badges/2-461123539.svg "Codeac")](https://app.codeac.io/github/Sanket22Kamble/M2-EmbSys)|![image](https://user-images.githubusercontent.com/98873866/153565420-c4bf3256-bbb6-42f3-a72f-eef13c76c91a.png)                                               |[![Codacy Badge](https://app.codacy.com/project/badge/Grade/d6fdd08a858648c6948c06829ea9cbb3)](https://www.codacy.com/gh/Sanket22Kamble/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Sanket22Kamble/M2-EmbSys&amp;utm_campaign=Badge_Grade)

## Abstract
Automatic water level controllers are a product that was created to automatically control a motor, which helps to ensure a constant reserve of water in a storage tank. These automatic water level controllers are used to automatically fill the over-head tank.

A water level controller senses the level of water in a tank and drives the water pump. Water level controllers switch the motor on whenever the water level drops below a certain level and shuts the motor off when the water rises well above a fixed level. This circuit which will detect the water level and will blink a red or green colour upon getting the water tank full or a preset level.

![maxresdefault_7_34](https://user-images.githubusercontent.com/98873866/157091995-dc80fef5-2816-4660-8b29-19349d7219b2.jpg)



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
![swot-analysis-concept-strengths-weaknesses-opportunities-and-threats-of-the-company-vector-illustration-with-icons-and-text-R7KD9D_3_27](https://user-images.githubusercontent.com/98873866/157092308-0ba72655-7dbf-431d-bf9a-56052e7464e7.jpg)


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

![image](https://user-images.githubusercontent.com/98873866/157194689-7d30f525-1efa-4a91-a190-9fb79560d22e.png)

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
