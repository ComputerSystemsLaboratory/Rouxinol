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
#include <numeric>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
int main(void){
  int n,m;
  while(cin>>n>>m){
    if(n==0) break;
    vector<int> taro(n);
    vector<int> hanako(m);
    REP(i,n)cin>>taro[i];
    REP(i,m)cin>>hanako[i];
    sort(taro.begin(),taro.end());
    sort(hanako.begin(),hanako.end());
    int s1 = accumulate(taro.begin(),taro.end(),0);
    int s2 = accumulate(hanako.begin(),hanako.end(),0);
    bool output = false;
    if((s1-s2)%2){
      cout<<-1<<endl;
      continue;
    }
    for(int i=0; i<taro.size(); i++){
      vector<int>::iterator it = find(hanako.begin(),hanako.end(),
          taro[i]-(s1-s2)/2);
      if(it!=hanako.end()){
        printf("%d %d\n",taro[i],*it);
        output=true;
        break;
      }
    }
    if(!output) cout<<-1<<endl;
  }

  return 0;
}