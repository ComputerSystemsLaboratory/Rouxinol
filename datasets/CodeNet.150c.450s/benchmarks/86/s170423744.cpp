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

int N, M, P, X[105];

int main() {
  while(1){
      cin>>N>>M>>P;
      if(N==0 && M==0 && P==0) break;
      int sum=0;
      map<int,int> m;
      REP(i,0,N){
        cin>>X[i];
        m[i] = X[i];
        sum += X[i]*100;
      }
      if(m[M-1] != 0) cout<<sum*(100-P)/100/m[M-1]<<endl;
      else cout<<0<<endl;
  }


  return 0;
}