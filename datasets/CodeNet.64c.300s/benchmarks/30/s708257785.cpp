#include <bits/stdc++.h>//復習必須
#include<iostream>
#include<vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <string>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;
#define P pair<int, int>
int main (){ 
     int a = 1;
    
    while(a != 0){
        cin >> a ;
       if(a == 0){
           break;
       }
        a = 1000 - a ;
        int num = 0 ;
        num += a / 500 ;
        a -= 500 * (a / 500) ;
        num += a / 100 ;
        a -= 100 * (a / 100) ;
        num += a / 50 ;
        a -= 50 * (a / 50) ;
        num += a / 10 ;
        a -= 10 * (a / 10) ;
        num += a / 5 ;
        a -= 5 * (a / 5) ;
        num += a ; 
        cout << num << endl;
        a = 1 ;
    }
    

}

 

