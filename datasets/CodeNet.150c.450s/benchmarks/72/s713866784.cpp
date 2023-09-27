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

//A-Z = 65 - 90
//a-z = 97 - 122

using namespace std;

int main(void) {
    string str;
    
    getline(cin, str);
    
    for(char i:str) {
        if( islower(i) ) cout << (char)toupper(i);
        else if( isupper(i) ) cout << (char)tolower(i);
        else cout << i;
    }
    cout << endl;
    
    return 0;
    
}