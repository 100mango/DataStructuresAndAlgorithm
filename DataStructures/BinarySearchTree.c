//
//  BinarySearchTree.c
//  DataStructures
//
//  Created by Mango on 13-12-4.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"

struct treeNode
{
    elementType element;
    searchTree left;
    searchTree right;
};

searchTree initTree ()
{
    searchTree tree = malloc(sizeof(struct treeNode));
    return tree;
}

searchTree insert(elementType x,searchTree tree)
{
    if (tree == NULL)
    {
        tree = malloc(sizeof(struct treeNode));
        tree->element = x;
        tree->left = NULL;
        tree->right = NULL;
    }
    else if (x < tree->element)
    {
        tree->left = insert(x, tree->left);  //如果tree的left是空的，则插入，否则不断往后递归
    }
    else if (x > tree->element)
    {
        tree->right = insert(x, tree->right);
    }
    
    return tree;
}

position find(elementType x,searchTree tree)
{
    while (tree != NULL)
    {
        if (x < tree->element)
        {
            tree = tree->left;
        }
        else if (x > tree->element)
        {
            tree = tree->right;
        }
        else
            return tree;
    }
    return tree;
}

position findMin(searchTree tree)   //非递归的方法
{
    if (tree != NULL)
    {
        while (tree->left!= NULL)
        {
            tree = tree->left;
        }
    }
    return tree;
}

position findMax(searchTree tree)  //递归的方法
{
    if (tree == NULL)
    {
        return tree;
    }
    else if (tree->right == NULL)
    {
        return tree;
    }
    else
    {
        return findMax(tree->right);
    }
}

void deleteElement(elementType x,searchTree *tree)
{
    if(*tree == NULL)
        printf("element not found\n");
    else if ((*tree)->element > x)
    {
        deleteElement(x, &(*tree)->left);
    }
    else if ((*tree)->element < x)
    {
        deleteElement(x, &(*tree)->right);
    }
    else //if ((*tree)->element == x)
    {
        if ((*tree)->left && (*tree)->right)   //节点有两个儿子
        {
            searchTree temptree = findMin(*tree);
            (*tree)->element = temptree->element;
            deleteElement(temptree->element, &temptree);
        }
        else
        {
            if ((*tree)->left == NULL)
            {
                searchTree tempTree = *tree;
                *tree = (*tree)->right;
                free(tempTree);
            }
            else
            {
                searchTree tempTree = *tree;
                *tree = (*tree)->left;
                free(tempTree);
            }
        }
    }
}

void printTree (searchTree tree)
{
    if (tree == NULL)
    {
        printf("done");
    }
    else
    {
        printf("%d\n",tree->element);
        if (tree->left != NULL) {
            printTree(tree->left);
        }
        if (tree->right != NULL) {
            printTree(tree->right);
        }
    }
}

