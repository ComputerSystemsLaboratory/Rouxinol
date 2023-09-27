//
//  main.cpp
//  AOJ1180
//
//  Created by aki33524 on 2014/07/08.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A, L;

void solve(){
    vector<int> vec;
    vec.push_back(A);
    
    for(int i=0; i<=20; i++){
        int al = vec[vec.size()-1];
        vector<int> digits(L);
        
        for(int j=0; j<L; j++){
            digits[j] = al%10;
            al /= 10;
            if(al == 0)
                break;
        }
        sort(digits.begin(), digits.end());
        
        int maxa = 0, mina = 0;
        int base = 1;
        for(int j=0; j<L; j++){
            maxa += base * digits[j];
            mina += base * digits[L-j-1];
            base *= 10;
        }
        vec.push_back(maxa - mina);
    }
    
    int n = vec.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(vec[i] == vec[j]){
                cout << j << " " << vec[j] << " " << i-j << endl;
                return;
            }
        }
    }
}

int main(int argc, const char * argv[])
{
    while(cin>>A>>L, A|L){
        solve();
    }
    return 0;
}