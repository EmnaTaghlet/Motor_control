# BLDC Motor Control with Field-Oriented Control (FOC)

## Overview

This project implements Field-Oriented Control (FOC) for a BLDC motor using STM32 microcontrollers. The implementation uses Space Vector Modulation (SVM), PI controllers for current and speed regulation, and an encoder for rotor position feedback. The system is designed to precisely control the motor speed and torque.

## Features

- **Field-Oriented Control (FOC):** Efficient control of BLDC motors with decoupled torque and flux control.
- **Space Vector Modulation (SVM):** Efficient generation of PWM signals for the inverter.
- **PI Controllers:** Closed-loop control for both motor current (Id, Iq) and speed.
- **Encoder Feedback:** Accurate rotor position measurement for FOC.
- **Hall Sensor Integration:** Speed estimation using hall sensors with input capture.

## Project Structure

- **main.c**: The main application code that initializes peripherals and implements the control loop.
- **motorcontrol.c**: Contains the motor control logic, including FOC, SVM, and PI controllers.
- **motorcontrol.h**: Header file for motor control functions and constants.
- **picontrol.c**: Implements the Proportional-Integral (PI) controllers for current and speed regulation.
- **tim.c**: Handles timer configurations, including input capture for speed measurement.
- **adc.c**: Manages ADC configurations and current sensing via DMA.
- **transformations.c**: Implements Clarke and Park transformations and their inverses for FOC.


## Hardware Requirements

- **STM32 Microcontroller**: The code is designed for STM32 series microcontrollers.
- **BLDC Motor**: Any standard BLDC motor compatible with the STM32 peripherals.
- **Inverter**: To drive the BLDC motor, typically a 3-phase inverter.
- **Encoder**: For accurate rotor position feedback.
- **Hall Sensors**: For estimating motor speed.

## Software Requirements

- **STM32CubeIDE**: For compiling and debugging the firmware.
- **STM32CubeMX**: For configuring peripherals and generating initialization code.
- **STM32 Motor Control Workbench**: Optional tool for configuring motor control parameters.

