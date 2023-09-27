//Prime Number
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;

int main(){
  ll n;
  v.push_back(2);
  for(ll i=3; i<1000000; i+=2){
    bool flag=true;
    for(vector<int>::iterator it=v.begin(); it!=v.end() && (*it)*(*it)<=i; it++){
      if(i%(*it)==0){
        flag=false;
        break;
      }
    }
    if(flag)v.push_back(i);
  }
  while(scanf("%lld", &n)!=EOF){
    ll ans=0;
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
      if(*it>n)break;
      ans++;
    }
    printf("%lld\n", ans);
  }
  return 0;
}