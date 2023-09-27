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
    string text, word;
    int cnt = 0;
    
    cin >> word;
    
    //word????°??????????
    for(int i=0; i<word.size(); i++) {
        word[i] = tolower(word[i]);
    }
    
    
    cin >> text;
    while ( text!="END_OF_TEXT" ) {
        //text????°??????????
        for(int i=0; i<text.size(); i++) {
            text[i] = tolower(text[i]);
        }
        
        if( text == word ) cnt++;
        
        //cout << text << " " << cnt << endl;
        
        cin >> text;
    }
    

    cout << cnt << endl;
    
    return 0;
    
}