This use case is done by Wenbin Guo (Group 12).
## Title 
Detect an intruder and push notification

## Description 
Wireless access sensor with Zephyr installed can detect an intruder and trigger to push notification to homeowner and grandparents. The sensor triggers the local and mobile alarms. The local alarm will ring loudly to notify the persons in the house, and frighten the intruder. The mobile alarm will push notifications to homeowner and grandparents of the intruder detection. The sensor will decrease the incidence rate of home invasion and protect the children and grandparents safety.

## Triggers 
Wireless access sensor detects intruder opening doors or windows.

## Actors 
Wireless access sensor, homeowner, grandparents and children

## Preconditions 
Wireless access sensor with Zephyr installed is armed either the home or away condition.
Wireless access sensor (with Zephyr installed) is armed and operable via a wireless connection.
Local and mobile intruder alarms are armed and operable via the wireless connection.
Homeowner and grandparents have installed the smart home application in their smartphones.

## Main Success Scenario (Goals)
Wireless access sensor with Zephyr installed triggers via detection of an intruder comes into the house.
Wireless access sensor (with Zephyr installed) triggers the local intruder alarm.
Wireless access sensor (with Zephyr installed) triggers the mobile intruder alarm.
Homeowner and grandparents get the notification of the intruder detection via the local or mobile alarm.

## Alternate Success Scenarios 
Police department gets the notification of the intruder detection via the mobile alarm.

## Failed End Condition 
Poor wireless connection and fail to push notification to users.
Users deactivate the wireless access sensor, the intruder can't be detected and reported.

## Extensions
If a sensor can't connect to the cloud for a long time, the cloud will push a notification to users through app.

## Steps of Execution (Requirements)
1. Homeowner installs wireless access sensors with Zephyr installed in doors and windows.
2. Sign up and set up PIN for wireless access sensors.
3. Activate wireless access sensors in smartphone.
4. When the intruder is detected, the wireless access sensors will push notification to users.

## A use case diagram
![](https://github.com/Thomas-Ertl/SmartHome/blob/Wenbin/UseCaseDiagrams/AccessDetectionUC.png)

## Dependent Use Cases