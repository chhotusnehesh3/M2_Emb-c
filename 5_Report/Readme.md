# Seat Heater

# Table of Content
* Abstract
* Introduction
* Objective
* Description
* Block Diagram
* Control Flow and Flow Charts
* Specifications
    * Hardware
    * Software
    * Embedded C Language
* Components
    * Temperature Sensor
    * Switches
    * LCD
    * LED for Indication
    * Potential Switches
    * Resistor
* Features
* Test Plan
* Circuit Diagram PNG
* SWOT Analysis
* 4W's and 1H
* Output

# Abstract

## Introduction

Now a days many countries are facing problem with cooling issue due to weather conditions because of that the vechicle seats are getting cold and making the passenger drive the vechile uncomfortably ,So inorder to resolve this issue we have coe up with an idea that is seat heater controlled by the passenger.

So in nowdays everything is becoming automated and everyone is looking for the new products to made the life easier.

In our project the main aim is to design and develop the system which is capable of monitoring the passanger's existance and Heat Monitoring and Displaying.

Some vehicles come with car seat warmers, which heat up the seat with the push of a button. Normally the buttons are located on the side of the driver and passenger door. In some vehicles, just the bottom of the seat warms up, where in others both the bottom and back warm up. Seat warmers were first introduced by Cadillac in 1966 to help with backaches.

## Objective
The Seat Heating control system is basically used to control the temperature of a car seat. When a passanger or a driver of the car seats on a car, the button sensor gets activated (which acts as one switch here). After that, the user can turn on the heater(which acts as another switch). The temperature sensor keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through UART( through serial communication).


## Description
 The aim of this project is to turn on the Heater and sense the temperature in the environment of the passenger when he is seated on the seat and the Heater switch is turned on.

## Implementation
 The passenger's seating status and the Heater switch is shown using 2 switches.To indicate the success of this condition and to show Heater is ON, LED glows.
The sensing of the temperature is depicted with the help of a potentiometer.
The analaog value from pot is converted to digital depending on the given limits with respect to voltage in terms of temperature.
The output from this ADC in terms of PWM is shown in the oscilloscope.
The data in terms of temperature is transmitted with the help of USART and shown in the Serial Monitor. 

# Block Diagram
![image](https://user-images.githubusercontent.com/101269692/164626073-6c6f520e-dde4-4897-a78d-e99f0d7e1e50.png)


# Control Flow and Flow Charts
 * Control Flow 
  
![image](https://user-images.githubusercontent.com/101269692/164626241-a977cede-93c8-43e6-997e-2cf0436971f1.png)
* Flow Chart

![image](https://user-images.githubusercontent.com/101269692/164626343-ff402a7b-5d9b-4b42-8ab5-ca01d7d83431.png)
 
  
# Specifications
## Hardware
 The Haredware components are used to build the passenger controled seat heater system and made circuit by hardware
## Software
Simulate the hardware by using software.Here the hex fill will created and by using software dump the code into ATmega328 Microcontroller
## Embedded C language
The programming for Atmega328 implemented using basic C programming languge.Develop the code using functions,loops and structures etc.

# Components
    * Temperature Sensor
    * Switches
    * LCD
    * LED for Indication
    * Potential Switches
    * Resistor

# Features
 * If the passager in side the car than switch is ON
 * Passanger was existed in the vehicle it will gives the indication
 * After the indication it will determine the heat.
 * Driver and the passanger can have the access to modifying the temperature in the vehicle.
 * The passanger can modify the temperature by watching the display as the display is given in the system
 * Modular Based Programming
 
# Test Plan
|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Is person seated  | push button=1| push button=1| PASS  |
| TID_02  | Is person not seated  | push button=0| push button=0 | PASS  |
| TID_03  | Temperature Request | Temp=0| heater=Off | PASS  |
| TID_04  | Temperature Request | Temp=20| heater=20 degree generation | PASS  |
| TID_05  | Temperature Request | Temp=25| heater=25 degree generation | PASS  |
| TID_06  | Temperature Request | Temp=29| heater=29 degree generation | PASS  |
| TID_07  | Temperature Request | Temp=33| heater=33 degree generation | PASS  |
| TID_08  | LED ON | Button=1 && Heater=1| LED=1 | PASS  |
| TID_09  | LED OFF | Button=0 && Heater=0| LED=0 | PASS  |
| TID_10  | LCD Display | Temperature :)<br />20 deg Cel| Temperature :)<br />20 deg Cel| PASS  |

# The Test Plan Of The Project Is:
* To know the importance of the project.
* The working conditions of the project.
* The working principle and architecture of sensors.
* The microcontroller chip.
* The sensors interfacing with the microcontroller.


# SWOT Analysis

## Strengths
 * User Friendly.
 * Easy to modify the temperature value
 * The system is robust
 * Low cost.
 * Modular Based Program
## Weakness
 * It's only applicable for the countries which are having having low temperature.
## Opportunities
 * It can be implemented by adding heater along with air conditioners so that it will be helpful all the countries.
## Threats
 * Not suitable for average or high temperature environment.
  
# 4W's and 1'H
 * WHAT Passanger seat and Heat Monitoring System.
 * WHERE Used in automotive industry,
 * WHEN At low temperature,
 * WHY For being healthy.
 * HOW Operates by modifying the temperature.


