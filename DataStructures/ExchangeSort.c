//
//  ExchangeSort.c
//  DataStructures
//
//  Created by Mango on 15/3/1.
//  Copyright (c) 2015年 Mango. All rights reserved.
//

#include "ExchangeSort.h"
#include <stdio.h>

void bubbleSort(int *array,int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i -1; j++) //只需比较length - i 次即可 因为一次交换两个
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array[i]);
    }
}