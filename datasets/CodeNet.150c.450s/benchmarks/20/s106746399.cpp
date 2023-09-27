//
//  main.cpp
//  ITP1_1
//
//  Created by Saicj on 2015/07/13.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>

int main()
{

    int second;
    
    std::cin >> second;
    
    //1h??? 3600s
    
    
    
    int time = second / 3600;
    int minute = (second - time * 3600) / 60;
    second = second % 60;
    
    std::cout << time << ":" << minute << ":" << second << "\n";
    return 0;
}