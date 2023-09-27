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
int dp[150][10500];
int main() {
	int N;
	int v[105],w[105];
	int W;
	cin>>N>>W;
	for(int i=0;i<N;i++){
		cin>>v[i]>>w[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<=W;j++){
			if(j<w[i]){
				dp[i+1][j]=dp[i][j];
			}
			else{
				dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[N][W]<<endl;
}