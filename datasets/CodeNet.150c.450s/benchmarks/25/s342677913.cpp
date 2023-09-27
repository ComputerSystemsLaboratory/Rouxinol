//
//  main.cpp
//  ITP1_8-C
//
//  Created by ?????¶??? on 15/8/15.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <ctype.h>
#include <vector>

using namespace std;

int main() {
    
    char ch;
    
    int count[26] = {};
    
    while (cin >> ch) {
        
        ch = tolower(ch);
        
        int num = ch - 'a';
        
        count[num]++;
        
//        cout << ch << " " << count[num] << endl;
    }
    
    // ??????
    
    cout << "a : " << count[0] << endl;
    cout << "b : " << count[1] << endl;
    cout << "c : " << count[2] << endl;
    cout << "d : " << count[3] << endl;
    cout << "e : " << count[4] << endl;
    cout << "f : " << count[5] << endl;
    cout << "g : " << count[6] << endl;
    cout << "h : " << count[7] << endl;
    cout << "i : " << count[8] << endl;
    cout << "j : " << count[9] << endl;
    cout << "k : " << count[10] << endl;
    cout << "l : " << count[11] << endl;
    cout << "m : " << count[12] << endl;
    cout << "n : " << count[13] << endl;
    cout << "o : " << count[14] << endl;
    cout << "p : " << count[15] << endl;
    cout << "q : " << count[16] << endl;
    cout << "r : " << count[17] << endl;
    cout << "s : " << count[18] << endl;
    cout << "t : " << count[19] << endl;
    cout << "u : " << count[20] << endl;
    cout << "v : " << count[21] << endl;
    cout << "w : " << count[22] << endl;
    cout << "x : " << count[23] << endl;
    cout << "y : " << count[24] << endl;
    cout << "z : " << count[25] << endl;
    
    return 0;
}