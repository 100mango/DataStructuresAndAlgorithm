//
//  insertion_sort.c
//  DataStructures
//
//  Created by Mango on 13-11-13.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#include "insertion_sort.h"

/*
void insertion_sort(int a[],int number)
{
    int i,j,temp;
    for (i = 1; i < number; i++)
    {
        temp = a[i];
        
        for (j = i - 1; j >= 0 && a[j] > temp; j--)   //a[j] > temp 一定要放在终止循环的条件中，这是算法的思想决定的。
        {
            a[j+1] = a[j];
        }
            
        a[j+1] = temp;    //循环结束后，j-- 此时a[j]是不符合条件的，因此要a[j+1]
    }
}
 */

void insertion_sort(int a[],int number)
{
    int i,j;
    for (i = 0; i < number-1; i ++)  //N-1趟搜索
    {
        int temp = a[i + 1];
        for (j = i; j >= 0 && a[j] > temp; j--) //和前面已经排好的元素进行比较，插入合适位置
        {
            a[j+1] = a[j];
        }
        a[j+1] = temp; //这里还是需要注意一下的
    }
}
