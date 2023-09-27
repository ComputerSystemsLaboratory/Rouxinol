//
//  main.cpp
//  TP1_9-B
//
//  Created by Saicj on 2015/08/04.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;


int main(int argc, const char * argv[]) {

    std::vector<string> results;
    
    string str;
    int count;
    string shuffle;
    
    while (true) {
        
        cin >> str;
        
        if (str == "-"){
            break;
        }
        
        cin >> count;
        
        for (int i = 0; i < count; i++) {
            
            cin >> shuffle;
            
            int shuffleNum = atoi(shuffle.c_str());
            
            string left = str.substr(0, shuffleNum);
            string right = str.substr(shuffleNum, str.size());
            
            str = right + left;
        }
        cout << str << endl;
    }
    
    
    
    
    return 0;
}