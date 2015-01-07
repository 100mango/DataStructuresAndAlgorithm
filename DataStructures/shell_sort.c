//
//  shell_sort.c
//  DataStructures
//
//  Created by Mango on 14-1-4.
//  Copyright (c) 2014年 Mango. All rights reserved.
//

#include <stdio.h>
#include "shell_sort.h"

void shell_sort(int a[], int number)
{
    int i,j,temp,increment;
    
    for (increment = number/2; increment > 0; increment /= 2) //控制步长序列
    {
        for (i = increment; i < number ; i++)   //对increment和它之后的每一个位置的元素 进行增量排序
        {
            temp = a[i];
            //使用类似插入排序的增量排序,将元素和前面的元素比较，插入到前面合适的位置
            for (j = i - increment ; j >=0 && a[j] > temp; j -= increment)
            {
                a[j+increment] = a[j];
            }
            a[j+increment] = temp; //和插入排序一样，要注意这里，j-=increment后判断不通过，此时j是不满足条件的，前一个才是满足的
        }
    }
}