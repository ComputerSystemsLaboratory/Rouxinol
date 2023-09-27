//
//  main.cpp
//  no.3
//
//  Created by MacBook_Virgo on 2015/05/12.
//  Copyright (c) 2015??´ MacBook_Virgo. All rights reserved.
//

#include <iostream>
#define rep(i,n) for(int (i) = 0;(i) < (n); (i)++)
using namespace std;
int n,r,p,c;
int main(int argc, const char * argv[]) {
    while(cin >> n >> r,(n!=0)||(r!=0)){
        int A[2][60];
        rep(i,n){
            A[0][i] = n-i;
        }
        int now = 0;
        int next = 1;
        rep(i,r){
            cin >> p >> c;
            rep(j,c){A[next][j]=A[now][p-1+j];}
            for(int j = p+c-1; j < n; j++){
                A[next][j] = A[now][j];}
            for(int j = c; j<c+p-1; j++){
                A[next][j] = A[now][j-c];}
            int temp;
            temp = now;
            now = next;
            next = temp;
            
        }
        cout << A[now][0] << endl;
    }
    
    return 0;
}