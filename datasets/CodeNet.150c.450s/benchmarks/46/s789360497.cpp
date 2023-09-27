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
    int n, x;
    int i, j, k;
    int cnt = 0;
    
    cin >> n >> x;
    
    while( !(n==0 && x==0) ) {
        cnt = 0;
        
        for(i=1; i<=n-2; i++) {
            for(j=i+1; j<=n-1; j++) {
                for(k=j+1; k<=n; k++) {
                    int sum = i + j + k;
                    //cout << i << " " << j << " " << k << " : " << sum << endl;
                    if( sum==x ) cnt++;
                }
            }
        }
        
        cout << cnt << endl;
        
        cin >> n >> x;
    }
    
    return 0;
}