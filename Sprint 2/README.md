# Sprint 2
## Configuring instruction

## Board emulator

## Revised functional requirements
1. [Smoke Detection Use Case](https://github.com/computationalmystic/Zephyr-group12/blob/master/Use%20Cases/Smoke%20Detection%20Use%20Case.md)
	- The users shall be able to activate and deactivate the smoke sensor.
	- The system shall display the specific location the smoke detected.
	- The home owner shall be able to manage the access level of family members.
	- Children should have low access level, and when they try to deactivate any smoke sensor, it will be done only if parents get notified and approve the request.
	- The system shall be able to call 911 when no response from any user.
2. [Access Detection Use Case](https://github.com/computationalmystic/Zephyr-group12/blob/master/Use%20Cases/Access%20Detection%20Use%20Case.md)		
	- The users shall be able to activate and deactivate the access sensor.
	- The home owner shall control the access sensor via simple control panel interface or detail Web interface, locally or remotely.
	- The system shall alarm when unauthorized access to the specific location (door or window) was detected.
	- Home owner can update his/her personal information and system’s password through control panel or web interface.

3. [Temperature Control Use Case](https://github.com/computationalmystic/Zephyr-group12/blob/master/Use%20Cases/Temperature%20Control%20Use%20Case.md)
	- The user should be able to set individual room temperatures.
	- The system will display current and user set temperatures based on temperature sensors placed in each room.
	- The user should be able to set the temperature to automatically change based on the time of day. 
	- The system will be able to display temperature control options based on the time of day.
	- The system will display system settings.
	- The user will be able to access the system settings to edit them such as system date.
## Revised ERD
![ERD](../ERD/RevisedERD1.png)
![ERD](../ERD/RevisedERD2.png)
## What is necessary for your whole system to work – data sources, functions, etc. The full inventory.

## Show clearly how the different software components communicate.
- Document the reasons for your decisions where you have choices in design.

## Mock up a full visual design
- [guowenbin.space/group12](guowenbin.space/group12)
- ![ERD](../Visual%20Design/WebUI1.png)
- ![ERD](../Visual%20Design/WebUI2.png =50x)
- The web interface design is PC and mobile compatible. Users can manage and control the system remotely.
- ![ERD](../Visual%20Design/AppUI.PNG)
## Coding
- DDL
- Dummy data
	- User
	
	UserID|UserName|UserPassword|AccessLevel
	|:--:|:------:|:----------:|:--------:|
	1|user1|123456|Admin
	2|user2|1234567|Children
	
	- ThermoStat
	
	ThermostatID|RoomNum|Mode|Temperature
	|:---------:|:-----:|:--:|:---------:|
	1|1|Cooling|72|
	
	- TempSensor
	
	SensorID|SensorIP|RoomNum
	|:-----:|:------:|:-----:|
	1|192.168.10.1|1
	
	- Room
	
	RoomID|Type|UserID
	|:---:|:--:|:----:|
	1|Bedroom|1
	
	- RoomStatus
	
	StatusID|RoomID|Temperature
	|:-----:|:----:|:---------:|
	1|1|80
	
	
	      
- Prototype code
- Unit tests

## Testing

