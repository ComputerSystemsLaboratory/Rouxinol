#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define rep(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
 
using namespace std;
 
 
int main(){
  int e;
  while(cin>>e,e){
		int ans = 1 << 20;
        for(int i = 0;i*i*i<=e;i++){
					int yyx  = e - i*i*i;
					int y = (int)sqrt(yyx);
					ans = min(yyx-y*y+y+i,ans);
				}
				cout << ans << endl;
  }
  return 0;
}