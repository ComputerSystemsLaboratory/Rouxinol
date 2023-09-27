//
//  main.cpp
//  TP1_2-C
//
//  Created by Saicj on 2015/07/13.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[])
{

    int a,b,c;
    
    std::cin >> a >> b >> c;
    
//    int numList[] = {a,b,c};
//    std::vector<int> myVector (numList, numList + 3);
//     std::vector<int>::iterator it;
//    
//    sort (myVector.begin(), myVector.begin()+3);
//    
//    
//    for (it=myVector.begin(); it!=myVector.end(); ++it)
//        std::cout << " " << *it;
//    
//     std::cout << "\n";

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    if (b > c){
        
        int temp = b;
        b = c;
        c= temp;
    }
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    std::cout << a <<" " <<b <<" " <<c << "\n";
    
    return 0;
}