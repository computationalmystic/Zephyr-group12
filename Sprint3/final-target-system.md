# Final Target System
Our final target system will run zephyr on EC2 instance including user interfaces and functions mentioned in the use cases of previous sprint.
## User interface
Our user interfaces include a login page and home page to implement our use cases. When users login they will be directed to home page where they can monitor the thermostat of their house, and they can edit some settings for their smoke detector.
## Smoke detection
Smoke detection is a part of security system protecting users from fire. Users will receive alert when very high temperatures are detected and the system will report to 911 if no user responds to this alert after a default 30 seconds. Users can navigate the smoke sensor settings to set sensor profiles like activate/deactivate, waiting time for response etc.
## Intruder detection
Unfortunately due to board limitations, limited knowledge of Zephyr, and time constraints, we will not be continuing to work on Intruder detection. We haven't been able to find or utilize any board that can give us the necessary information to complete this task.
## Temperature control
In the home page, users can see the average temperature of the house, and they can monitor and set temperatures of all the rooms (if we can setup multiple sensors) when they go to temperature control page.
