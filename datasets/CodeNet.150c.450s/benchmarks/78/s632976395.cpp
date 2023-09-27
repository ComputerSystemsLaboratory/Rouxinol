//Pollok's conjecture
#include<bits/stdc++.h>
using namespace std;

#define INF 1000000
typedef long long ll;
vector<ll> v1;
vector<ll> v2;
ll num1[1000001], num2[1000001];

int main(){
  ll tmp;
  for(ll i=1; (tmp=(i*(i+1)*(i+2)/6))<1000000; i++){
      v1.push_back(tmp);
      if(tmp%2==1)
	v2.push_back(tmp);
    }

  for(ll i=0; i<=1000000; i++){num1[i]=i; num2[i]=i;}
  for(ll i=1; i<v1.size(); i++){
    for(ll j=0; j<=1000000; j++){
      if(v1[i]<=j)num1[j]=min(num1[j], num1[j-v1[i]]+1);
    }
  }
  for(ll i=1; i<v2.size(); i++){
    for(ll j=0; j<=1000000; j++){
      if(v2[i]<=j)num2[j]=min(num2[j], num2[j-v2[i]]+1);
    }
  }
  ll n;
  while(cin>>n, !(n==0)){
    cout<<num1[n]<<" "<<num2[n]<<endl;
  }
  return 0;
}