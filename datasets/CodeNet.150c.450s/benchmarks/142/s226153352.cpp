#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iomanip>
#include <string.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()

typedef long long lint;

using namespace std;

int main(){
  int N,K;
  cin>>N>>K;
  int A[N];
  REP(i,N)cin>>A[i];
  REP(i,N-K){
    cout<<(A[i]<A[K+i]?"Yes":"No")<<endl;
  }
  return 0;
}
