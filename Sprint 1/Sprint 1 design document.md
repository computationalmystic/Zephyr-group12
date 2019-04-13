# Sprint 1 Design Document

## Deployment Environment

- Describe how, with relative ease, your TA's and instructors can run  the programs you have built. If they are deployed on a server, don't worry about that, but they might not be. 
- Instructions on environment parameters we need to set and use. Look at Christian's example in slack. 
- You may decide not to deploy a database on a server, but please do describe how your system will save data to be loaded on restart. And, if you don't plan to do this, also let us know. 

## Functional Requirements

1. Smoke Detection Use Case
	- The users shall be able to activate and deactivate the smoke sensor.
	- The system shall display the specific location the smoke detected.
	- The home owner shall be able to manage the access level of family members.
	- The system shall be able to call 911 when no response from any user.
2. Access Detection Use Case		
	- The users shall be able to activate and deactivate the access sensor.
	- The home owner shall control the access sensor via simple control panel interface or detail Web interface, locally or remotely.
	- The system shall alarm when unauthorized access to the specific location (door or window) was detected.
	- Home owner can update his/her personal information and system’s password through control panel or web interface.

3. Temperature Control Use Case
	- The user should be able to set individual room temperatures.
	- The system will display current and user set temperatures based on temperature sensors placed in each room.
	- The user should be able to set the temperature to automatically change based on the time of day. 
	- The system will be able to display temperature control options based on the time of day.
	- The system will display system settings.
	- The user will be able to access the system settings to edit them such as system date.

## Database Design

### ERD

**some kind of logical ERD, at least, that lets us know what data is being managed**
![ERD](../UseCaseDiagrams/example.png)

### DDL 

n/a

## Files that are stubbed out in your repository, with comments about the use cases they are connected to. These sections may not all exist for the Zephyr project teams. Simply explain them as best you can. 

### User Interface Files

1. first one
2. second one
3. etc.


### Model Files (Database Access)

1. first one
2. second one
3. etc


### Controller Files (API or other)

1. first one 
2. second one
3. etc. 

## Describe languages you need to use, and any gaps in skills on your team. 

1. first language 
    - how you will use examples or learn what you need
2. second language 
    - how you will use examples or learn what you need
3. Skill gaps, if any, otherwise specify who is doing what
    - name
    - name
    - skill gap 
