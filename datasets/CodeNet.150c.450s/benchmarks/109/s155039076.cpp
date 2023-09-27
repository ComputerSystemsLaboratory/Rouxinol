#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
int main(void)
{
  for(;;){
    int n;
    cin >> n;
    if(!n) return 0;
    vector<pair<string,int> > train;
    // begin+1 end-1;
    REP(i,n){
      string b,e;
      cin >> b >> e;
      train.push_back(make_pair(b,1));
      train.push_back(make_pair(e,-1));
    }
    SORT(train);
    int tmp=0,answer=0;
    REP(i,train.size()){
      tmp+=train[i].second;
      answer=max(answer,tmp);
    }
    cout << answer << endl;
  }
}