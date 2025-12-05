# MQTT: ESP32 Publish <a href="https://www.ohioiot.com"><img src="https://www.ohioiot.com/images/logo.jpg" width="40" ></a>

## Overview
This code is set up to get you connecting and then publishing to the MQTT broker of your choice.  The logic is explained in the YouTube video [MQTT - ESP32 Publish Using PubSubClient.h](https://www.youtube.com/watch?v=ahzX8AzNy48).


👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on "All Things IoT": hardware, firmware, connectivity, cloud computing, and dev toolkit.


## Getting Started

`git clone https://github.com/OhioIoT-MQTT-Examples/ESP32-Publish`


### PlatformIO
- Copy ***lib/credentials/credentials_template*** to ***lib/credentials/credentials.h***, and edit the credentials:
- Compile and upload your code


### Arduino IDE
- Copy ***lib/credentials/credentials_template*** to ***lib/credentials/credentials.h***, and edit the credentials
- Copy all folders in ***lib/*** to your Arduino ***libraries/*** folder
- Copy ***src/main.cpp*** into a new folder where the folder and filename match, such as ***publish/publish.ino***
- Download PubSubClient.h using the Arduino IDE Library Manager

Send a note if you have any questions about how to use this code.

## About
*OhioIoT is an IoT platform designed for small-scale IoT projects (https://www.ohioiot.com).*

