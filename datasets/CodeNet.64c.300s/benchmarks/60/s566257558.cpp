#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#define fi first
#define se second
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int main() {
	int a,b,n;
	int x,y;
	while(true){
		cin>>a>>b;
		if(a==0&&b==0) break;
		cin>>n;
		int dp[20][20];
		bool f[20][20];
		for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				dp[i][j]=0;
				f[i][j]=true;
			}
		}
		for(int i=0;i<n;i++){
			cin>>x>>y;
			f[x][y]=false;
		}
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(f[i][j]){
					dp[i][j]=dp[i][j-1]+dp[i-1][j];
					dp[1][1]=1;
				}
			}
		}
		cout<<dp[a][b]<<endl;
	}
}