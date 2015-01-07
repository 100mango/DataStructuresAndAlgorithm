//
//  honoi.c
//  DataStructures
//
//  Created by Mango on 13-11-7.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#include "honoi.h"

void move (int number,char from,char to)
{
    printf("move disk%d from %c to %c \n",number,from,to);
}

void honoi(int number,char from ,char temp,char to)
{
    if (number == 1)
    {
        move(1,from,to);
    }
    else
    {
        honoi(number - 1,from,to,temp);
        move(number,from,to);
        honoi(number -1,temp,from,to);
        
    }
}
