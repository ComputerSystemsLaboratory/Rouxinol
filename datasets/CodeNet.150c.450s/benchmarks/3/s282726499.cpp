//
//  main.cpp
//  ITP1_9-D
//
//  Created by Saicj on 2015/08/04.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main(int argc, const char * argv[]) {

    string str;
    int count;
    
    cin >> str;
    cin >> count;
    
    string order;
    int a;
    int b;
    string instead;

    
    for (int i = 0; i < count; i++) {
        
        cin >> order >> a >> b;
        
        if (order == "replace") {
            
            cin >> instead;
            
            str = str.replace(a, instead.length(), instead);
            
        }else if (order == "reverse"){
            
            string tempStr = str.substr(a,(b-a)+1);
            reverse(tempStr.begin(), tempStr.end());
            
             str = str.replace(a, tempStr.length(), tempStr);
            
        }else if (order == "print"){
            
            cout << str.substr(a, (b-a)+1) << endl;
        }
    }

    
    return 0;
}