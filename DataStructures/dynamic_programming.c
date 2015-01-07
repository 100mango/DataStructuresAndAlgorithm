//
//  dynamic_programming.c
//  DataStructures
//
//  Created by Mango on 14-3-5.
//  Copyright (c) 2014年 Mango. All rights reserved.
//

#include <stdio.h>
#include "dynamic_programming.h"

/*
void fastestWay ()
{
    //入口花费
    int entrance1 = 2;
    int entrance2 = 4;
    //出口花费
    int exit1 = 3, exit2 = 6;
    //站台花费
    int station1[5] = {7,9,3,4,8};
    int station2[5] = {8,5,6,4,5};
    //移动花费
    int transportation1[4] = {2,3,1,3}; //走向第二条
    int transportation2[4] = {2,1,2,2}; //走向第一条
    //记录到达当前站点最少的花费
    int fast1[5],fast2[5];
    //记录在该条线上 最优解的 上一个站台的标号  location[0][]代表第一条线
    int location[2][4];
    //int location2[4];
    //最后一个站台
    int final;
    
    fast1[0] = entrance1 + station1[0];
    fast2[0] = entrance2 + station2[0];
    
    for (int i = 1; i < 5; i++)
    {
        //从前面走来的是第一站台
        if (fast1[i-1] + station1[i] <= fast2[i-1] + station1[i] + transportation2[i-1] )
        {
            fast1[i] = fast1[i-1] + station1[i];
            location[0][i-1] = 0; //location[0][0] 代表第一条生产线第二个站台前面的一个站台
        }
        else//从前面走来的是第二站台
        {
            fast1[i] = fast1[i-1] + station1[i] + transportation2[i-1];
            location[0][i-1] = 1;
        }
        
        if (fast2[i-1] + station2[i] <= fast2[i-1] + station2[i] + transportation1[i-1])
        {
            fast2[i] = fast2[i-1] + station2[i];
            location[1][i-1] = 1;
        }
        else
        {
            fast2[i] = fast2[i-1] + station2[i] + transportation1[i-1];
            location[1][i-1] = 0;
        }
    }
    
    if (fast1[4] + exit1 <= fast2[4] + exit2)
    {
        final = 0;
    }
    else
    {
        final = 1;
    }
    
    if (final == 0)
    {
        int i = 0;
        printf("line %d station %d \n",i,5);
        for (int j = 4; j >= 1; j--)
        {
            i = location[i][j-1];
            printf("line %d station %d \n",i,j);
        }
    }
    else
    {
        int i = 1;
        printf("line %d station %d \n",i,5);
        for (int j = 4; j >= 1; j--)
        {
            i = location[i][j-1];
            printf("line %d station %d \n",i,j);
        }
        
    }
}

*/



