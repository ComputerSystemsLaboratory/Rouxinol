#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

typedef long long ll;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int p[2][4];
void solve(){

}
int main(){
  int ans=0;
  for(int i=0;i<2;i++){
    int sum=0;
    for(int j=0;j<4;j++){
      int p;
      cin >> p;
      sum+=p;     
    }
    ans = max(ans,sum);
  }
  cout << ans << endl;
  return 0;
}