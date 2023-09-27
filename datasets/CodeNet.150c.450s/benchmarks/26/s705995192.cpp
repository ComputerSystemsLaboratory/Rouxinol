//
//  main.cpp
//  ITP1_2-A
//
//  Created by Saicj on 2015/07/13.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>

int main()
{

    int a,b;
    
    std::cin >> a >> b;
    
    if (a > b) {
        std::cout << "a > b" << "\n";
    }else if (a < b){
        std::cout << "a < b" << "\n";
    }else{
        std::cout << "a == b" << "\n";
    }
    
    return 0;
}