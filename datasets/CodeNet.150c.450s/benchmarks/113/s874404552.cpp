//
//  main.cpp
//  ITP1_3
//
//  Created by Saicj on 2015/07/13.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
    int x;
    int i=0;
    
    while (true) {
        
        cin >> x;
        
        if (x == 0){
            break;
            
        }
        
          printf("Case %d: %d\n", ++i, x);
    }

    
    

    
    return 0;
}