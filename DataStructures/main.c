//
//  main.c
//  DataStructures
//
//  Created by Mango on 13-11-7.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include "cutPizza.h"
#include "honoi.h"
#include "sum.h"
//#include "cursorList.h"
#include "insertion_sort.h"
#include "BinarySearchTree.h"
#include "power.h"
#include "findMainItem.h"
#include "shell_sort.h"
#include "dynamic_programming.h"
#include "strassen.h"
#include "ExchangeSort.h"


int main(int argc, const char * argv[])
{
    /*  测试切披萨
    long bigin = clock();
    long i = cutPizza2(100000);
    long end = clock();
    
    printf("%ld \n",i);
    printf("%ld\n", end - bigin);
    */
    
    /*    测试汉诺塔
    long bigin = clock();
    honoi(20,'A','B','C');
    long end = clock();
    printf("%ld\n", end - bigin);
    */
    
    /*  测试前N个数的求和
    long bigin =clock();
    long i = sum3(100000);
    long end = clock();
    
    printf("%ld \n",i);
    printf("%ld\n", end - bigin);
     */
    
    /*  测试插入搜索
    int a[] = {3,2,1,4,5,7,6,8,10,9};
    shell_sort(a, 10);
    for (int i = 0 ; i<10; i++)
    {
        printf("%d\n",a[i]);
    }
     */
    
    /*  测试BSD
    searchTree tree = NULL;
    tree = insert(1, tree);
    tree = insert(2, tree);
    tree = insert(4, tree);
    tree = insert(6, tree);
    printTree(tree);
    deleteElement(2, &tree);
    printTree(tree);
     */
    
    /*   测试指数计算
    long bigin =clock();
    long i = power3(2, 5);
    long end = clock()*1000;
    printf("%ld \n%ld \n",i,end - bigin);
     */
    
    /*测试主元
    int a[] = {1,1,1,1,1,3,3,2,2};
    int i = findMajorityElement(a, 9);
    printf("%d\n",i);
    */
    
    /*  尚未完成的矩阵算法
    int A[N][N],B[N][N],C[N][N];
    
    //对A和B矩阵赋值，随便赋值都可以，测试用
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            A[i][j] = 1;//i * j;
            B[i][j] = 1;//i * j;
        }
    }
    
    //调用Strassen方法实现C=A*B
    Strassen(N, A, B, C);
    
    //输出矩阵C中值
    output(N, C);
     */
    
    //  测试冒泡搜索
     int a[] = {3,2,1,4,5,7,6,8,10,9};
     bubbleSort(a, 10);
}


