#include <bits/stdc++.h>
#define REP(a,b,c) for(int a=b; a<(int)c; a++)
#define REPD(a,b,c) for(int a=b; a>(int)c; a--)
#define rep(a,b) REP(a,0,b)
#define repd(a,b) REPD(a,b,0)
typedef long long int ll;
using namespace std;

int main(){
  int p1, p2;
  int x;
  while(true){
    cin >> p1 >> p2 >> x;
    if(p1==0 && p2==0 && x==0) break;
    p1 += 100;
    p2 += 100;
    int ans = 0;
    REP(i,1,x){
      for(int j=1; ;j++){
        int tmp = i*p1/100 + j*p1/100;
        if(tmp == x){
          int sum = i*p2/100 + j*p2/100;
          ans = max(sum,ans);
          break;
        }
        if(tmp > x) break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}