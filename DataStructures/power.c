//
//  power.c
//  DataStructures
//
//  Created by Mango on 13-12-9.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>

long power1(int number,int times)
{
    if (times == 0)
    {
        return 1;
    }
    else if (times % 2 == 0)
    {
        return power1(number * number, times/2);
    }
    else
    {
        return power1(number * number, times/2) * number;
    }
}

long power2(int number,int times)
{
    if (times == 1)
    {
        return number;
    }
    else if (times % 2 == 0)
    {
        return power2(number * number, times/2);
    }
    else
    {
        return power2(number * number, times/2) * number;
    }
}


