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
    string card1, card2;
    int score1, score2;
    int N;
    int i;
    
    cin >> N;
    
    score1 = score2 = 0;
    for(i=0; i<N; i++) {
        cin >> card1 >> card2;

        if( card1 < card2 ) score2 += 3;
        else if( card1 == card2 ) { score1++; score2++; }
        else if( card1 > card2 ) score1 += 3;
        
//        cout << card1 << " " << card2 << " : " << (card1 < card2) << " / " << score1 << " " << score2 << endl;
    }
    
    cout << score1 << " " << score2 << endl;
    
    return 0;
    
}