#include<bits/stdc++.h>
using namespace std;int S,T,a,i,j;
int main(){
for(j=0;j<4;j++){cin>>a;S+=a;}
for(j=0;j<4;j++){cin>>a;T+=a;}
cout<<max(S,T)<<endl;}
