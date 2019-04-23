Create Table Users(
UserID int not null,
UserName varchar(255),
UserPassword varchar(255),
AccessLevel varchar(255),
Primary key (UserID)
);

Create Table Room (
RoomNum int not null,
RoomType Varchar (255),
UserID int,
Foreign key (UserID) references Users(UserID),
primary key (RoomNum)
);

Create Table Thermostat(
ThermostatID int,
RoomNum int, 
ThermostatMode varchar(255),
Temperature int,
Foreign key (RoomNum) references Room(RoomNum),
primary key (ThermostatID)
);

Create Table SmokeSensor (
SensorID int not null,
SensorIP varchar(255),
RoomNum int,
SmokeDetected varchar(255),
isActivated varchar (255),
Foreign key (RoomNum) references Room(RoomNum),
Primary key (SensorID)
);

Create Table MotionSensor (
SensorID int not null,
SensorIP varchar(255),
RoomNum int,
IntruderDetected varchar(255),
isActivated varchar (255),
Foreign key (RoomNum) references Room(RoomNum),
Primary key (SensorID)
);

Create Table TempSensor (
SensorID int not null,
SensorIP varchar(255),
RoomNum int,
Foreign key (RoomNum) references Room(RoomNum),
Primary key (SensorID)
);

Create Table Alarm (
AlarmID int not null,
Timeout int,
Primary key (AlarmID)
);

Create Table RoomStatus (
StatusID int,
RoomNum int,
Temperature int,
Primary key (StatusID),
Foreign key (RoomNum) references Room(RoomNum)
);