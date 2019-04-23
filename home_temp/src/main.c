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
void store_temperature(const char *filepath, const char *data);
void get_current_temp(const char *filepath);
void main(void)
{
	console_getline_init();

    char *curTemp = "70";
    
    //curTemp = get_current_temp("Output.txt");
    
    printk("Current home temperature is %sF\n", curTemp);
	printk("What temperature would you like your house to be?\n");

    // Wait for user input then read house temp back to them.
	while (1) {
		char *s = console_getline();
        int i = atoi(s);
        
        //printk("Your home has been set to: %sF\n", s);
        if(i > 70)
        {
            printk("Your home is heating to %sF\n", s);
        }else if(i == 70)
        {
            printk("Your home is already at %sF\n", s);
        }
        else
            printk("Your home is cooling to %sF\n", s);
        
        printk("Please push CTRL+A then X to exit\n");
		//printk("last char was: 0x%x\n", s[strlen(s) - 1]);
        
        //store_temperature("Output.txt", "%s");
	}
    
   /* void store_temperature(const char *filepath, const char *data)
    {
        FILE *fp = fopen(filepath, "w");
        if (fp != NULL)
        {
            fputs(data, fp);
            fclose(fp);
        }
    }
    
    char get_current_temp(const char *filepath)
    {
        char *temp[255];
        
        FILE *fp = fopen(filepath, "r");
        if(fp != NULL)
        {
            fgets(temp, 255, (FILE*)fp);
            return temp;
        }
        else
        {
            return "70";
        }
    }*/
}
