#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>

using namespace std;
    
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>
#include <cmath>
#include <iomanip>
#include <limits>
#include <bits/stdc++.h>
using namespace std;
struct UNION{
    vector<int> par;
    vector<int> rank;
    void Union(int sz){
        par.resize(sz);
        rank.assign(sz,0);
        for(int i=0;i<sz;i++){
            par[i]=i;
        }
    }        

int find(int a){
    if(a==par[a])return a;
    return find(par[a]);
}
void unite(int a,int b){
    int root_a = find(a);
    int root_b = find(b);
    if(root_a==root_b) return;
    if(rank[root_a]>rank[root_b]){
        par[root_b] = root_a;
    }else if(rank[root_a]<rank[root_b]){
        par[root_a] = root_b;
    }else{
        rank[root_a]++;
        par[root_b] = root_a;
    }
}
};
int main(){
   UNION uni;
   int n,q;
   cin >> n >> q;
   uni.Union(n);
   for(int i=0;i < q;i++){
       int x;
       cin >> x;
       int num1,num2;
       cin >>num1 >>num2;
       if(x==0){
           uni.unite(num1,num2);
       }else{
           
           if(uni.find(num1)==uni.find(num2)){
               cout << 1 << endl;
           }else{
               cout << 0 << endl;
           }
       }
   }
}



