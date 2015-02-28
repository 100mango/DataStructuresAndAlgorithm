//
//  findMainItem.h
//  DataStructures
//
//  Created by Mango on 13-12-12.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#ifndef DataStructures_findMainItem_h
#define DataStructures_findMainItem_h

//大小为N的数组A，其主元素是一个出现超过N/2次的元素，请你找出数组A的主元素。

//思路1：如果存在主元素的话，主元素一定是中位数
//思路2：如果一个数组中有主元素，则同时删除两个不相等的值，这个序列中的主元素不会改变


//如果有主元 则返回主元 否则返回-1
int findMainItem(int a[],int length);


int findPossibleMainItem(int a[],int length);
int isMainItem (int a[],int length ,int item);

#endif
