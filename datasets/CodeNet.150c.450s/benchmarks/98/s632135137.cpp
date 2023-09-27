//
//  main.cpp
//  AOJ1153
//
//  Created by aki33524 on 2014/07/15.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void solve(vector<int> v1, vector<int> v2){
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    int sum1 = accumulate(v1.begin(), v1.end(), 0);
    int sum2 = accumulate(v2.begin(), v2.end(), 0);
    int sum = sum1 + sum2;
    if(sum%2 == 1){
        cout << -1 << endl;
        return;
    }
    
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v2.size(); j++){
            if(sum1 - v1[i] + v2[j] == sum/2){
                cout << v1[i] << " " << v2[j] << endl;
                return;
            }
        }
    }
    
    cout << -1 << endl;
}

int main(int argc, const char * argv[])
{
    int n, m;
    while(cin>>n>>m, n|m){
        vector<int> v1(n);
        vector<int> v2(m);
        for(int i=0; i<n; i++)
            cin >> v1[i];
        for(int i=0; i<m; i++)
            cin >> v2[i];
        
        solve(v1, v2);
    }

    return 0;
}