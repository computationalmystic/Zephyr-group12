This use case is done by Yongyu Deng, CS4320 Group 12.
## Title
Detect Smoke and Push Notification

## Description 
Children and grandparents' safety is one of the first concerns of a smart home system. There are smoke sensors with Zephyr installed in every room of the house, protecting security of families. The sensor in kitchen can be deactivate manually for cooking. When smoke detected, the fire alarm will ring and all family members who have a smartphone will get a notification with detailed information such as the location of the smoke and room temperature.

## Triggers 
The use case starts when any smoke sensor have detected the smoke.

## Actors 
Parents, grandparents.

## Preconditions 
- Zephyr is installed.
- Sensors have already connected to the cloud.
- Sensors are activated and working.
- Family members have installed the smart home application in their smartphones.

## Main Success Scenario (Goals)
1. Smoke sensors installed Zephyr.
2. Smoke in the house trigger one or more detectors.
3. Fire alarm in the house rings.
4. All the registered users get notified by smartphone app.
5. Users check the actual situation and decide if call 911 or not.

## Alternate Success Scenarios 
1. Same as Step 1 to Step 4 in main success scenario.
2. If the smart home system haven't received response in a specific time, then call 911 automatically.

## Failed End Condition 
- User artificially deactivate the smoke detector, smoke and fire can't be detected and reported.
- Kids physically break sensors by accident.
- Poor network condition.

## Extensions
- If a sensor can't connect to the cloud for a long time, the cloud will push a notification to users through app.

## Steps of Execution (Requirements)
1. Homeowner install sensors in rooms.
2. Register sensors in smartphone app.
3. Activate.
4. When smoke detected, check the house and send response to system (call 911 or not).

## A use case diagram
![](https://github.com/Thomas-Ertl/SmartHome/blob/yong/UseCaseDiagrams/smoke%20use%20case.png)

## Dependent Use Cases
