//
//  main.cpp
//  AOJ0189
//
//  Created by aki33524 on 2014/08/25.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e8;

void solve(int c, int G[10][10]){
    for(int k=0; k<c; k++)
        for(int i=0; i<c; i++)
            for(int j=0; j<c; j++)
                G[i][j] = min(G[i][j], G[i][k]+G[k][j]);
    
    int tmin = INF;
    int res;
    for(int i=0; i<c; i++){
        int s = 0;
        for(int j=0; j<c; j++)
            s += G[i][j];
        if(s < tmin){
            tmin = s;
            res = i;
        }
    }
    cout << res << " " << tmin << endl;
}

int main(int argc, const char * argv[])
{
    int n;
    while(cin >> n, n){
        int G[10][10];
        for(int i=0; i<10; i++)
            for(int j=0; j<10; j++)
                G[i][j] = i!=j ? INF : 0;
        
        int s, t, d;
        int c = 0;
        for(int i=0; i<n; i++){
            cin >> s >> t >> d;
            G[s][t] = d;
            G[t][s] = d;
            c = max(c, max(s, t));
        }
        solve(++c, G);
    }
    
    return 0;
}