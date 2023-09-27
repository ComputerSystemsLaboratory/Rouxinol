#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)n; ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
typedef pair<int,int> P;
int tosc(int h, int m,int s){
  return h*3600 + m * 60 + s;
}

int main(){
  int n;
  while(cin>>n,n){
    vector<P> v;
    REP(i,n){
      int h,m,s;
      scanf("%d:%d:%d",&h,&m,&s);
      int m1 = tosc(h,m,s);
      scanf("%d:%d:%d",&h,&m,&s);
      int m2 = tosc(h,m,s);
      v.push_back(make_pair(m1,m2));
    }
    sort(v.begin(),v.end());
    int ans = 0;
    priority_queue<int, vector<int>, greater<int> > que;
    REP(i,n){
      if(que.empty() || que.top() > v[i].first){
        ans++;
      }else{
        que.pop();
      }
      que.push(v[i].second);
    }
    cout<<ans<<endl;
  }
  return 0;
}