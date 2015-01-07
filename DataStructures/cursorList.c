//
//  cursorList.c
//  DataStructures
//
//  Created by Mango on 13-11-11.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#define SPACE_SIZE 1000
#include "cursorList.h"
struct Node
{
    elementType element;
    position next;
};

struct Node cursorSpace[SPACE_SIZE];

static position CursorAlloc ()
{
    position p;
    p = cursorSpace[0].next;
    cursorSpace[0].next = cursorSpace[p].next;
    return p;
}

static void cursorFree (position p)
{
    cursorSpace[p].next = cursorSpace[0].next;
    cursorSpace[0].next = p;
}

void initializeCursorSpace ()
{
    for (int i = 0; i < SPACE_SIZE - 1; i++)
    {
        cursorSpace[i].next = i + 1;
    }
    cursorSpace[SPACE_SIZE - 1].next = 0;
}

position find(elementType x,List list)
{
    /*我的写法
    position i = list;
    while (cursorSpace[i].element != x && cursorSpace[i].next != 0)
    {
        if (cursorSpace[i].element == x)
        {
            return i;
        }
        i++;
    }
    */
    
    //更简洁的写法
    
    position p = cursorSpace[list].next;      //获取第一个元素的position
    while (p && cursorSpace[p].element != x)  //在找到之前，不断后移，免去if判断
        p++;
    return p;                                 //直接返回
}

position findPrevious (elementType x,List List)
{
    position p = cursorSpace[List].next;
    while (p && cursorSpace[cursorSpace[p].next].element != x)
        p++;
    return p;
}

void insert (elementType x,List list,position p)
{
    position newCell = CursorAlloc();
    if (newCell)
    {
        cursorSpace[newCell].element = x;
        cursorSpace[newCell].next = cursorSpace[p].next;
        cursorSpace[p].next = newCell;
    }
}

void deleteElement (elementType x,List list)
{
    position p = findPrevious(x, list);
    position temp = cursorSpace[p].next;
    cursorSpace[p].next = cursorSpace[temp].next;
    cursorFree(temp);
}











