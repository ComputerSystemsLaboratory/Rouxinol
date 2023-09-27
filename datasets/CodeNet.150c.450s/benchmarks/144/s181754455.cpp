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
    int N, M, L;
    int i, j, k;
    
    cin >> N >> M >> L;
    
    long long a[N][M], b[M][L], c[N][L];
    
    //input a
    for(i=0; i<N; i++) {
        for(j=0; j<M; j++) {
            cin >> a[i][j];
        }
    }
    
    //input b
    for(i=0; i<M; i++) {
        for(j=0; j<L; j++) {
            cin >> b[i][j];
        }
    }

    
    //calc. c
    for(i=0; i<N; i++) {
        for(j=0; j<L; j++) {
            long long sum = 0;
            for(k=0; k<M; k++) {
                sum += a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }
    
    //display c
    for(i=0; i<N; i++) {
        for(j=0; j<L; j++) {
            if(j==0) cout << c[i][j];
            else cout << " " << c[i][j];
        }
        cout << endl;
    }
    
    return 0;
    
}