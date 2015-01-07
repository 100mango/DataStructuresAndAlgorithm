//
//  cursorList.h
//  DataStructures
//
//  Created by Mango on 13-11-11.
//  Copyright (c) 2013年 Mango. All rights reserved.
//

#ifndef DataStructures_cursorList_h
#define DataStructures_cursorList_h

typedef int pointerToNode;
typedef pointerToNode List;
typedef pointerToNode position;
typedef int elementType;

void initializeCursorSpace ();
position find(elementType x,List list);
void insert (elementType x,List list,position p);
void deleteElement (elementType x,List list);

#endif
