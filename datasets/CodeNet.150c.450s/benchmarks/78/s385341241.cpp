//
//  main.cpp
//  AOJ1167
//
//  Created by aki33524 on 2014/07/09.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

const int MAX_N = 1000000;
const int MAX_T = 200;

vector<int> tetras;
vector<int> oddtetras;
int dp1[2][MAX_N];
int dp2[2][MAX_N];

void init(){
    memset(dp1, 0x3f, sizeof(dp1));
    memset(dp2, 0x3f, sizeof(dp2));
    
    for(int i=0; i<MAX_T; i++){
        int t = i*(i+1)*(i+2)/6;
        tetras.push_back(t);
        if(t%2)
            oddtetras.push_back(t);
    }
    
    for(int i=0; i<tetras.size(); i++)
        dp1[0][tetras[i]] = 1;
    for(int i=0; i<tetras.size(); i++){
        int t = tetras[i];
        for(int j=0; j<MAX_N; j++){
            if(j < t){
                dp1[(i+1)&1][j] = dp1[i&1][j];
            }else{
                dp1[(i+1)&1][j] = min(dp1[i&1][j], dp1[(i+1)&1][j-t]+1);
            }
        }
    }
    
    for(int i=0; i<oddtetras.size(); i++)
        dp2[0][oddtetras[i]] = 1;
    for(int i=0; i<oddtetras.size(); i++){
        int t = oddtetras[i];
        for(int j=0; j<MAX_N; j++){
            if(j < t){
                dp2[(i+1)&1][j] = dp2[i&1][j];
            }else{
                dp2[(i+1)&1][j] = min(dp2[i&1][j], dp2[(i+1)&1][j-t]+1);
            }
        }
    }
}

int main(int argc, const char * argv[])
{
    init();
    
    int N;
    while(cin>>N, N){
        cout << dp1[tetras.size()&1][N] << " " << dp2[oddtetras.size()&1][N] << endl;;
    }
    
    return 0;
}