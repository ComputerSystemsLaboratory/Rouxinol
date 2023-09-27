#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int n;
  while(cin>>n){
    int dec[256];
    REP(i,256) dec[i]=-1;
    if(n==0) break;
    REP(i,n){
      char f,t;
      cin>>f>>t;
      dec[f]=t;
    }
    int m;
    cin>>m;
    REP(i,m){
      char set;
      cin>>set;
      if(dec[set]==-1){
        cout<<set;
      }else{
        cout<<(char)dec[set];
      }
    }
    cout<<endl;
  }
  return 0;
}