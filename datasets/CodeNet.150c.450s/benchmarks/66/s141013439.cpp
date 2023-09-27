#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

int N, M;
set<string> U;
string T;

int main() {
  cin>>N;
  REP(i,0,N) cin>>T, U.insert(T);
  cin>>M;
  int st = 0;
  REP(i,0,M){
    cin>>T;
    if(U.find(T) == U.end()) cout<<"Unknown "<<T<<endl;
    else if(st == 0)cout<<"Opened by "<<T<<endl, st = 1;
    else cout<<"Closed by "<<T<<endl, st = 0;
  }

  return 0;
}