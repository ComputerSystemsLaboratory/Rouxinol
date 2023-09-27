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
    int cnt[26] = {0};
    
    //cout
    while( getline(cin, str) ) {
        
        for(auto c : str) {
            //cout << c << " ";
            if( isalpha(c) ) {
                //cout << tolower(c) - 'a' << " ";
                cnt[ tolower(c) - 'a' ]++;
            }
            //cout << isalpha(c) << endl;
        }
    }
    
    //output
    for(int i=0; i<26; i++) {
        cout << (char)('a' + i) << " : " << cnt[i] << endl;
    }
    
    
    return 0;
    
}