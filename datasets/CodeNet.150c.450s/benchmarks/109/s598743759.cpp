#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

ll ttol(string time) {
  ll res=0;
  res+=(int(time[0]-'0')*10+int(time[1]-'0'))*60*60;
  res+=(int(time[3]-'0')*10+int(time[4]-'0'))*60;
  res+=(int(time[6]-'0')*10+int(time[7]-'0'));
  return res;
}

int main() {
  while(1) {
    ll n;
    cin >> n;
    if(n==0) {
      break;
    }
    priority_queue<ll,vector<ll>,greater<ll>> s;
    priority_queue<ll,vector<ll>,greater<ll>> e;
    for(ll i=0;i<n;i++) {
      string temps,tempe;
      cin >> temps >> tempe;
      s.push(ttol(temps));
      e.push(ttol(tempe));
    }
    ll ready=0;
    ll ans=0;
    for(ll i=0;i<24*60*60;i++) {
      while(e.size()&&e.top()==i) {
        ready++;
        e.pop();
      }
      while(s.size()&&s.top()==i) {
        if(ready>0) {
          ready--;
        }
        else {
          ans++;
        }
        s.pop();
      }
    }
    cout << ans << endl;
  }
}
