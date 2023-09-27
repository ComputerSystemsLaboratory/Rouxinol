#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define sz size()
#define pb push_back
#define mp make_pair
#define ALL(X) (X).begin(),(X).end()

using namespace std;

const int INF = 1000000000;
const double eps = 1e-8;

int main(void) {
  while(1){
    int n,m,p;cin>>n>>m>>p;
    if(!n)break;
    int s=0;
    int t=0;
    REP(i,n){
      int x;cin>>x;
      s+=x;
      if(i==m-1)
        t=x;
    }
    if(t==0)
      cout<<0<<endl;
    else{
      int money=s*(100-p)/t;
      cout<<money<<endl;
    }
  }
  return 0;
}