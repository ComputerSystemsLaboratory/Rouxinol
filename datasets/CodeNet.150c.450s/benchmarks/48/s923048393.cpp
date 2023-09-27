#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
 
using namespace std;
 
 
int main(){
  int e;
  while(cin>>e,e){
    vector<int> dp(e+1,e);
		vector<int> z;
        for(int i = 0;i*i*i<=e;i++){
					z.push_back(i*i*i);
				}
				int z_size = z.size();
				for(int i = 0;i<z_size;i++){
					for(int j = 0;z[i]+j*j<=e;j++){
							int yy = j*j;
							dp[z[i]+yy] = min(i+j,dp[z[i]+yy]);
							dp[e] = min(e-z[i]-yy+dp[z[i]+yy],dp[e]);
					}
				}
				cout << dp[e] << endl;
  }
  return 0;
}