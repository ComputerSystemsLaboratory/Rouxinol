#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main(){
  int a,b;
  string day[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
  int months[] = {31,29,31,30,31,30,31,31,30,31,30,31};
  while(cin>>a>>b,a,b){
    a--;b--;
    // --a;--b;
    // cout << a<<b;
    rep(i,a) b+=months[i];
    // cout<<b<<endl;
    cout<<day[b%7]<<endl;
    // rep(i,a) b+=months[i];
  }
  return 0;
}

