/*
 * Copyright (c) 2017 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <string.h>
#include <zephyr.h>
#include <misc/printk.h>
#include <console.h>
#include <stdio.h>

// This function will be used to get Administrator's permission
// when low access level users trying to do sensitive changes,
// and return a bool
bool requestAdmin()
{
    return permitted or not permitted
}


// This function will be used to activate smoke or motion sensors
// in Smoke Use Case and Access Detection Use Case
void activateSensor(int id)
{
    if(accesslevel == "Admin")
    {
        getSensor(id).activate();
    }
    else
    {
        permitted = requestAdmin();
        if(permitted)
        {
            getSensor(id).activate();
        }
        else
        {
            printk("No permission");
        }
    }
}

// This function will be used to deactivate smoke or motion sensors
// in Smoke Use Case and Access Detection Use Case
void deactivateSensor(int id)
{
    if(accesslevel == "Admin")
    {
        getSensor(id).deactivate();
    }
    else
    {
        permitted = requestAdmin();
        if(permitted)
        {
            getSensor(id).deactivate();
        }
        else
        {
            printk("No permission");
        }
    }
}

// This function will be used to alarm users when smoke or intruders
// detected in Smoke Use Case and Access Detection Use Case, return 
// true if get user response and return false if no respose from users
bool alarmToUser()
{
    send alarm to users
    if no response for a specific time
    {
        return false
    }
    if get response
    {
        stop alarm
        return true
    }
}

// This function will be used to handle the smoke detection event in 
// Smoke Use Case, and it will restart sensor when user confirm the
// room is safe or report to 911 when no response from user
void smokeDetected(int id)
{
    location = getSensor(id).location
    printk(location)
    response = alarmToUser()
    if(response)
    {
        restart smoke sensor
    }
    else
    {
        report to 911
    }
}

// This function will be used to handle the motion detection event in 
// Motion Detection Use Case, it will send alarm when intruder detected
void motionDetected(int id)
{
    location = getSensor(id).location
    printk(location)
    alarmToUser()
}

// This function will be used to init sensors
void initSensor(int id)
{
    connect sensor to network
    init data from backlog
}

// This function will be used to add users
void addUser()
{
    if(accesslevel == "Admin")
    {
        add user
    }
    else
    {
        printk("permission denied")
    }
}

// This function will be used to delete users
void deleteUser()
{
    if(accesslevel == "Admin")
    {
        delete user
    }
    else
    {
        printk("permission denied")
    }
}