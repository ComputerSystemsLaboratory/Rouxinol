//
//  main.cpp
//  AOJ1165
//
//  Created by aki33524 on 2014/07/09.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

typedef struct {int h, w;} Tyle;
int N;

int dh[] = {0, 1, 0, -1};
int dw[] = {-1, 0, 1, 0};

int main(int argc, const char * argv[])
{
    while(cin>>N, N){
        vector<Tyle> tyles;
        Tyle t;
        t.h = 0; t.w = 0;
        tyles.push_back(t);
        
        for(int i=0; i<N-1; i++){
            int n, d;
            cin >> n >> d;
            Tyle t;
            t.h = tyles[n].h + dh[d];
            t.w = tyles[n].w + dw[d];
            tyles.push_back(t);
        }
        
        int l = 0, r = 0, u = 0, d = 0;
        for(int i=0; i<tyles.size(); i++){
            Tyle t = tyles[i];
            l = min(l, t.w);
            r = max(r, t.w);
            u = min(u, t.h);
            d = max(d, t.h);
        }
        cout << r-l+1 << " " << d-u+1 << endl;
    }
    
    return 0;
}