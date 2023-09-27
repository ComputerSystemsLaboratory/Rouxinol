#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
#define ll long long
using namespace std;

const int CountStop=245959;

int main() {
  while (1) {
    int n; cin>>n;
    if (n==0) break;
    vector<int> x(CountStop+1, 0);
    rep(i, n) {
      string S,G; cin>>S>>G;
      int start=0;
      start+=(int)(S[0]-'0')*100000;
      start+=(int)(S[1]-'0')*10000;
      start+=(int)(S[3]-'0')*1000;
      start+=(int)(S[4]-'0')*100;
      start+=(int)(S[6]-'0')*10;
      start+=(int)(S[7]-'0')*1;
      x[start]++;
      int goal=0;
      goal+=(int)(G[0]-'0')*100000;
      goal+=(int)(G[1]-'0')*10000;
      goal+=(int)(G[3]-'0')*1000;
      goal+=(int)(G[4]-'0')*100;
      goal+=(int)(G[6]-'0')*10;
      goal+=(int)(G[7]-'0')*1;
      x[goal]--;
    }
    rep(i, CountStop) x[i+1]+=x[i];
    int res=0;
    rep(i, CountStop+1) res=max(res, x[i]);
    cout<<res<<endl;
  }
}

