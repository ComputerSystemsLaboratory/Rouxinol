#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
int main(void)
{
  for(;;){
    int m,a,b;
    cin >> m >> a >> b;
    if(m==0) return 0;
    vector<int> p(m);
    REP(i,m) cin >> p[i];
    pair<int,int> answer=make_pair(0,0);
    FOR(i,a,b+1){
      answer=max(answer,make_pair(p[i-1]-p[i],i));
    }
    cout << answer.second << endl;
  }
}