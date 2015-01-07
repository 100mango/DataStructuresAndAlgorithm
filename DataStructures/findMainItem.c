//
//  findMainItem.c
//  DataStructures
//
//  Created by Mango on 13-12-12.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>

int findPossibleMainItem(int a[],int length)
{
    if (length == 1)
        return a[0];
    else if(length == 0)
        return -1;
    
    int b[length];
    int bLength = 0;
    
    for (int i = 0; i < length; i += 2)
    {
        if (a[i] == a[i+1] )
        {
            b[bLength] = a[i];
            bLength++;
        }
    }
    return findPossibleMainItem(b,bLength);
}

int isMainItem (int a[],int length ,int item)//测试是否为真正的item
{
    int times = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] == item)
        {
            times++;
        }
    }
    if (times > length / 2)
    {
        return 1;
    }
    else
        return -1;
}

int findMainItem(int a[],int length)
{
    int i = findPossibleMainItem(a, length);
    if(i == -1)
    {
        if ( isMainItem(a, length, a[length - 1]) == 1)
        {
            return a[length - 1];
        }
        else
            return -1;
    }
    else
    {
        if (isMainItem(a, length, i) == 1) {
            return i;
        }
        else return -1;
    }
}

