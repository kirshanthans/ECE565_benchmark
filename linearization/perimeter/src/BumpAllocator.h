//
//  BumpAllocator.hpp
//  Arch_Project
//
//  Created by lsakka on 11/30/16.
//  Copyright © 2016 lsakka. All rights reserved.
//

#ifndef BumpAllocator_hpp
#define BumpAllocator_hpp

#include <stdio.h>
#include <stdlib.h>

extern char * heap_ptr ;

char * alloc(long long  n);
void deAlloc(long long n);
void initBumpAlloc(long long n );




#endif /* BumpAllocator_hpp */
