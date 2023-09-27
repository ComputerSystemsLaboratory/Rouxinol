//
//  main.cpp
//  Test
//
//  Created by Nag on 2017/08/18.
//  Copyright ?? 2017??´ Nag. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>

using namespace std;

int main(void) {
    string str, str1, str2;
    int times;
    int h;
    int i;
    
    cin >> str;
    
    while( str!="-" ) {
        cin >> times;
        
        for(i=0; i<times; i++) {
            cin >> h;
            str1 = str.substr(0, h);
            str2 = str.erase(0, h);
            str = str2 + str1;
            
            //cout << str << endl;
        }
        
        cout << str << endl;
        
        cin >> str;
    }
    
    return 0;
    
}