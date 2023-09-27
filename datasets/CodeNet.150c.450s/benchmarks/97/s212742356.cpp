#include <bits/stdc++.h>
using namespace std;

int xv[]={-1,0,1,0},yv[]={0,-1,0,1};

void solve(int n){
   vector<int> x(1,0);
   vector<int> y(1,0);
   
   for(int i=0;i<n-1;i++){
       int a,b;
       cin>>a>>b;
       x.push_back(x[a]+xv[b]);
       y.push_back(y[a]+yv[b]);
   }
   cout<<(*max_element(x.begin(),x.end())-*min_element(x.begin(),x.end())+1)<<" "<<(*max_element(y.begin(),y.end())-*min_element(y.begin(),y.end())+1)<<endl;
   
   
}

int main (){
    int a;
    while(cin>>a,a){
        solve(a);
    }
}