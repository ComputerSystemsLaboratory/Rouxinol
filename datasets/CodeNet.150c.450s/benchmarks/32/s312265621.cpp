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

int M, Nmin, Nmax, P[205];

int main() {
  while(1){
    cin>>M>>Nmin>>Nmax;
    if(M==0)break;
    REP(i,0,M){
      cin>>P[i];
    }
    int ans = 0, num = -1;
    for(int i = Nmin-1; i < Nmax; i++){
      if(ans <= P[i] - P[i+1]){
        ans = P[i] - P[i+1];
        num = i+1;
      }
    }
    cout<<num<<endl;
  }
  return 0;
}