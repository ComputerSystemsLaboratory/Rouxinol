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
#include <cassert>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)n; ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

template<class T> void debug(T begin, T end){ for(T i = begin; i != end; ++i) cout<<*i<<" "; cout<<endl; }

typedef long long ll;
const int INF = 100000000;
const double EPS = 1e-8;
const int MOD = 1000000007;
void next(int& y, int & m, int & d){
  int lastday = (m % 2) ? 20 : 19;
  if(y % 3 == 0) lastday = 20;
  if(d == lastday){
    d = 1;
    if(m == 10){
      m = 1;
      y += 1;
    }else{
      m += 1;
    }
  }else{
    d += 1;
  }
}

int main(){
  int n;
  cin>>n;
  while(n--){
    int y, m, d;
    cin>>y>>m>>d;
    int cnt = 0;
    while(!(y == 1000 && m == 1 && d == 1)){
      cnt ++;
      next(y, m, d);
    }
    cout<<cnt<<endl;
  }
  return 0;
}