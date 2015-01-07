//
//  BinarySearchTree.h
//  DataStructures
//
//  Created by Mango on 13-12-4.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#ifndef DataStructures_BinarySearchTree_h
#define DataStructures_BinarySearchTree_h

struct treeNode;
typedef struct treeNode * position;
typedef struct treeNode * searchTree;
typedef int elementType;

searchTree initTree ();
searchTree insert(elementType x,searchTree tree);
void deleteElement(elementType x,searchTree *tree);
position find(elementType x,searchTree tree);
position findMin(searchTree tree);
position findMax(searchTree tree);
void printTree (searchTree tree);
#endif
