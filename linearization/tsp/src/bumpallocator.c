//
//  BumpAllocator.cpp
//  Arch_Project
//
//  Created by lsakka on 11/30/16.
//  Copyright © 2016 lsakka. All rights reserved.
//

#include "bumpallocator.h"
#include "stdlib.h"

#define LINEARIZE
char * heap_ptr ;
void deAlloc(long long n){
    heap_ptr -= n;
}

void initBumpAlloc(long long n){
#ifdef LINEARIZE
    heap_ptr=(char* ) malloc(n);
#endif
}
char * alloc(long long n){
#ifdef LINEARIZE
    char * ret=heap_ptr;
    heap_ptr += n;
    return ret;
#else
    ret=malloc(n);
#endif

}
