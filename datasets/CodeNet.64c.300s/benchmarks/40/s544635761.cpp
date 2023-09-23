//
//  main.cpp
//  ITP1_8-A
//
//  Created by Saicj on 2015/07/15.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <stdio.h>
#include <cctype>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    
    
    char ch;
    //    bool toUpper = true;
    //    bool space = false;
    
    while (1) {
        
        scanf("%c", &ch);
        
        if (isupper(ch) || islower(ch)){
            
            if (isupper(ch)) {
                ch = tolower(ch);
            }else if(islower(ch)){
                ch = toupper(ch);
            }
            
        }
        //
        //        if (isdigit(ch)){
        //           toUpper = true;
        //        }
        //
        //        if (isspace(ch)){
        //            space = true;
        //        }
        //
                printf("%c", ch);
        
        
        
        
        if (ch == '\n') {
            break;
        }
    }
    
    return 0;
}