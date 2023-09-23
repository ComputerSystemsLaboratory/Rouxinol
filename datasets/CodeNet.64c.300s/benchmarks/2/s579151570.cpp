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
    int m, f, r;
    char grade = '\0';
    
    cin >> m >> f >> r;
    while( !(m==-1 && f==-1 && r==-1) ) {
        if( m==-1 || f==-1 ) grade = 'F';
        else if( m+f >= 80 ) grade = 'A';
        else if( m+f >= 65 ) grade = 'B';
        else if( m+f >= 50 ) grade = 'C';
        else if( m+f >= 30 && r >= 50 ) grade = 'C';
        else if( m+f >= 30 && r < 50 ) grade = 'D';
        else if( m+f < 30) grade = 'F';
        
        cout << grade << endl;
        
        cin >> m >> f >> r;
    }
    
    return 0;
}