#include <bits/stdc++.h>
 #include <math.h>
using namespace std;
#define ll long long
#define pi 3.14159265359

map<int,int>prime_factor(int n){
  map<int,int>res;
  for(int i=2;i*i<=n;i++){
    while(n%i==0){
      res[i]++;
      n/=i;
    }
  }
  if(n!=1)res[n]=1;
  return res;
}
int main(){
  int n;
  cin>>n;
  cout<<n<<":";
  for(auto p:prime_factor(n)){
    auto k=p.first;
    auto v=p.second;
    for(int i=0;i<v;i++){
      cout<<" "<<k;
    }
  }
  cout<<endl;
}
  
