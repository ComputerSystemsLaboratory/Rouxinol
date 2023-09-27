//
//  main.cpp
//  AOJ1159
//
//  Created by aki33524 on 2014/07/15.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int p){
    vector<int> cans(n, 0);
    int peb = p;
    int pos = 0;
    
    while(1){
        if(0 < peb){
            cans[pos]++;
            peb--;
            if(cans[pos] == p)
                break;
        }else{
            peb += cans[pos];
            cans[pos] = 0;
        }
        pos = (pos+1)%n;
    }
    cout << pos << endl;
}

int main(int argc, const char * argv[])
{
    int n, p;
    while(cin>>n>>p, n|p){
        solve(n, p);
    }

    return 0;
}