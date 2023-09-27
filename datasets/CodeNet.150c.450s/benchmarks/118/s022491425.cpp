#include <bits/stdc++.h>
#define REP(a,b,c) for(int a=b; a<(int)c; a++)
#define REPE(a,b,c) for(int a=b; a<=(int)c; a++)
#define REPD(a,b,c) for(int a=b; a>=(int)c; a--)
#define rep(a,b) REP(a,0,b)
#define repd(a,b) REPD(a,b,0)
typedef long long int ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  rep(i,N){
    int y, m, d;
    cin >> y >> m >> d;
    int ans = 0;
    if((y%3) == 0 || (m&1) == 1){
      //d 20
      ans = 20 -d + 1;
    }else{
      //s 19
      ans = 19 -d + 1;
    }
    if((y%3) == 0){
      ans += (10-m)*20;
    }else{
      ans += (10-m)*20;
      ans -= (10-m+1)/2;
    }
    ans += (999-y)*(20*5+19*5);
    ans += (999-y+2)/3*5;
    cout << ans << endl;
  }
  return 0;
}