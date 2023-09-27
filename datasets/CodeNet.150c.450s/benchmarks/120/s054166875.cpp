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
int R,C;
int search(int i, vector< vector<int> > moti){
  if(i==R){
    int ret = 0;
    REP(j,C){
      int c=0;
      REP(k,R){
        if(moti[k][j]==1) c++;
      }
      ret+=max(c,R-c);
    }
    return ret;
  }else{
    vector< vector<int> > moti2;
    moti2=moti;
    REP(j,C){
      if(moti2[i][j]==1)moti2[i][j]=0;
      else moti2[i][j]=1;
    }
    return max(search(i+1,moti),search(i+1,moti2));
  }
}

int main(void){
  while(cin>>R>>C){
    if(R==0) break;
    vector< vector<int> > moti;    
    REP(i,R){
      vector<int> tmp;
      REP(j,C){
        int tmp2;
        cin>>tmp2;
        tmp.push_back(tmp2);
      }
      moti.push_back(tmp);
    }
    cout<<search(0,moti)<<endl;
  }
  return 0;
}