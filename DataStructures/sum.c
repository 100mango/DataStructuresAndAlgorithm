//
//  sum.c
//  DataStructures
//
//  Created by Mango on 13-11-8.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#include "sum.h"

long sum (int number)
{
    long sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    return sum;
}

long sum2 (int number)
{
    if (number % 2)
    {
        return (number+2) * (number/2) + 1;
    }
    else
        return (long)(number+1) * (number/2);
}

long sum3 (int number)
{
    if (number == 1)
        return 1;
    else
        return sum3(number - 1)+number;
}