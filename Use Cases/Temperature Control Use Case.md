
This use case is done by Thomas Ertl.

## Title 
Smart Home Temperature Control

## Description 
Wireless temperature sensors using Zephyr will report temperature of its zone to the main thermostat and/or the user's devices. These sensors can be programmable to act on changes in temperature, time of day, or different zones of the home. It can then give notifications to the users or main thermostat. These sensors can give more accurate zonal temperature readings throughout the home which can lead to more efficient heating/cooling and give the user higher control over their ideal home temperature.  

## Triggers 
Wireless temperature sensors detects ambient temperature of the zone it's in.

## Actors 
Wireless temperature sensor, homeowner, grandparents and children

## Preconditions 
* Zephyr is installed.
* Sensors are active and operable via wireless connection.
* Sensors accurately detect ambient temperature.
* Family has installed and setup the smart thermostat.

## Main Success Scenario (Goals)
Wireless temperature sensor accurately depicts ambient temperature and reports back to the main thermostat and/or other user's devices. The user can program the smart thermostat to change temperature based on zone or time of day.

## Alternate Success Scenarios 
User can setup smart thermostat through the app.

## Failed End Condition 
* Poor wireless connection fails to report temperature to the thermostat. 
* Sensors fail to report temperature accurately.

## Extensions
If a sensor can't connect to the cloud for a long time, the cloud will push a notification to users through app.

## Steps of Execution (Requirements)
1. Homeowner installs smart thermostat and wireless temperature sensors with Zephyr installed.
2. Users can set temperature based on different zones and/or by time of day. 
3. When programmed trigger occurs, the thermostat will change temperature accordingly.

## A use case diagram
![](https://github.com/Thomas-Ertl/SmartHome/blob/master/UseCaseDiagrams/TempControlUseCaseDiagram.png?raw=true)

In this diagram the homeowner is given the most control over the thermostat. They are able to set the system time and day, configure the system settings, configure a temporary or indefinite change to the settings, and configure the fan setting. The children and grandparents can configure the system settings as well, typically in their specific zone (bedrooms). Once settings are configured, the settings are pushed to the furnace or air conditioner to heat or cool the zones of the home. The wireless sensors will update the thermostat to act on the configured settings from the users of the thermostat.