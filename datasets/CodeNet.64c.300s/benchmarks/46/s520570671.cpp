#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
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
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
bool composite[1000001];
int a,d,n;
int main(void){
  composite[0] = composite[1] = true;
  FOR(i,2,1000001){
    if(!composite[i]){
      for(int k=2; i*k<1000001; k++){
        composite[i*k] = true;
      }
    }
  }
  while(cin>>a>>d>>n){
    if(a==0) break;
    while(n){
      if(!composite[a]) n--;
      if(!n) cout<<a<<endl;
      a+=d;
    }
  }

  return 0;
}