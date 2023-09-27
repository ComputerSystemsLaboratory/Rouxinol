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

int main(){
  int N;
  while(cin>>N){
    map<string, int> memo;
    REP(i, N){
      string s; cin>>s;
      memo[s] = 0;
    }
    int M;
    cin>>M;
    bool open = false;
    REP(i, M){
      string s;
      cin>>s;
      if(memo.count(s)){
        if(open){
          cout<<"Closed by "<<s<<endl;
          open = false;
        }else{
          cout<<"Opened by "<<s<<endl;
          open = true;
        }
      }else{
        cout<<"Unknown "<<s<<endl;
      }
    }
  }
  return 0;
}