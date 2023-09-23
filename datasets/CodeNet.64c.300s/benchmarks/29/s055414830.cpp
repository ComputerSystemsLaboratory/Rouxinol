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
		int not_dp = 10000000;
        for(int i = 0;i*i*i<=e;i++){
					for(int j = 0;j*j+i*i*i<=e;j++){
						int x = e - i*i*i - j*j;
						not_dp = min(not_dp,x+i+j);
					}
				}
				cout << not_dp << endl;
  }
  return 0;
}