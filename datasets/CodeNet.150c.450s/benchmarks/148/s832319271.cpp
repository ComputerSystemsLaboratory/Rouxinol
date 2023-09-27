#include <bits/stdc++.h>
using namespace std;
#define input(d) cin >> d
#define inputs(n,d) for(auto i=0;i<n;i++)cin >> d.at(i)
#define output(d) cout << d << endl
#define outputs(n,d) for(auto i=0;i<n;i++)cout<<d[i]<<endl
#define ll long long
#define l_ long
#define f0(n) for(ll i=0;i<n;i++)
#define f(a,b) for(ll i=a;i<b;i++)

int main(){
  ll n,d[4]={0,0,0,0};
  string s;
  input(n);
  f0(n){
    input(s);
    if(s=="AC"){
      d[0]++;
    }else if(s=="WA"){
      d[1]++;
    }else if(s=="TLE"){
      d[2]++;
    }else if(s=="RE"){
      d[3]++;
    }
  }
  cout << "AC x "<<d[0]<<"\nWA x "<<d[1]<<"\nTLE x "<<d[2]<<"\nRE x "<<d[3]<<endl;
}
