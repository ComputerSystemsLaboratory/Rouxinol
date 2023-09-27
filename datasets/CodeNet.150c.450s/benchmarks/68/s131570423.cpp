#include <iostream>

#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>

#include <cassert>

#include <algorithm>

#include <functional>

#include <cmath>

#include <iomanip>

#include <limits>
#include <bits/stdc++.h>
#include<queue>
#include<type_traits>
#include<cstdint>
using namespace std;
using ll=long long;
int main(){
    while(1){
   int n;
   cin >> n;
   if(n==0){
       break;
   }
   vector<ll> vec(n);
   for(int i=0;i<n;i++){
       int x;
       cin >> x;
       vec[i]=x;
   }
   
   ll MIN=1e9;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           MIN = min(abs(vec[i]-vec[j]),MIN);
       }
   }
   cout << MIN <<endl;
    }
}

