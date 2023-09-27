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
pair<int,int> p[10005];

int main() {
  while(1){
    cin>>N>>M;
    if(N==0&&M==0) break;
    long long sum = 0;
    REP(i,0,N){
      int a, b;
      cin>>a>>b;
      p[i] = make_pair(b,a);
      sum += a*b;
    }
    sort(p,p+N);

    long long diff = 0;
    for(int i = N-1; 0<=i; i--){
      if(M == 0) break;
      int tmp = min(M, p[i].second);
      diff += p[i].first*tmp;
      M -= tmp;
    }
    cout<<sum - diff<<endl;
  }
  return 0;
}