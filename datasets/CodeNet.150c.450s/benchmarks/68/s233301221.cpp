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

int n, a[1000005];

int main() {
  while(1){
    cin>>n;
    if(n==0) break;
    REP(i,0,n){
      cin>>a[i];
    }
    sort(a,a+n);
    int ans = 1e9;
    REP(i,0,n-1){
      ans = min(ans, abs(a[i]-a[i+1]));
    }
    cout<<ans<<endl;
  }
  return 0;
}