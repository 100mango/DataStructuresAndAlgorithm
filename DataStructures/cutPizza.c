//
//  cutPizza.c
//  DataStructures
//
//  Created by Mango on 13-11-7.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#include "cutPizza.h"

long cutPizza (int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
        return cutPizza(number - 1) + number;
}

long cutPizza2 (int number)
{
    return (number * (number + 1))/2 + 1;
}

/*
int number = 10;
long sum =0;

void cutPizza3 ()
{
    if (number == 0)
    {
        sum += 1;
    }
    else
    {
        number--;
        cutPizza3();
        number++;
        sum+=number;
    }
}

long returnSomething ()
{
    cutPizza3();
    return sum;
}
*/