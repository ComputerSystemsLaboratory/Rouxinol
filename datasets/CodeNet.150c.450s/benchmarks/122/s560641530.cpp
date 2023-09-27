#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
  string s;
  priority_queue<ll> q;
  vector<ll> ans;
  while(cin >> s,s!="end"){
    ll x;
    if(s=="insert"){
      cin >> x;
      q.push(x);
    }
    if(s=="extract"){
      ll tmp=q.top();
      q.pop();
      ans.push_back(tmp);
    }
  }
  int n=ans.size();
  for(int i=0;i<n;++i){
    cout << ans[i] << endl;
  }
  return 0;
}

