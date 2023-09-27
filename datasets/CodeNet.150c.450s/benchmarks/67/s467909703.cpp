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

int main() {

  int N;
  while(1){
    int ans = 0;
    cin>>N;
    if(N == 0) break;
    REP(i,1,N){
      int num = 0;
      REP(diff,0,N){
        num += (i + diff);
        if(num == N){
          ans++;
          break;
        }
        if(num > N){
          break;
        }
      }
    }
    cout<<ans<<endl;
  }

  return 0;
}