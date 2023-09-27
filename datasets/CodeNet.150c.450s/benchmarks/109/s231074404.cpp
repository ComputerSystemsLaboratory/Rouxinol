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

int d[10000000], n, hhS, mmS, ssS, hhG, mmG, ssG;

int main() {
  while(1){
    cin>>n;
    if(n==0) break;
    REP(i,0,24*60*60+2) d[i] = 0;
    REP(i,0,n){
      scanf("%d:%d:%d %d:%d:%d", &hhS, &mmS, &ssS, &hhG, &mmG, &ssG);
      d[hhS*(60*60) + mmS*60 + ssS]++;
      d[hhG*(60*60) + mmG*60 + ssG]--;
      //test
      //cout<<"hhS "<<hhS<<", mmS "<<mmS<<", ssS "<<ssS<<endl;
    }
    int ans = 0;
    REP(i,1,24*60*60+2){
      d[i] += d[i-1];
      ans = max(ans, d[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}