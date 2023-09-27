#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <numeric>
#include <cassert>
using namespace std;
int dx[5]={1,0,-1,0,0},dy[5]={0,1,0,-1,0};
long long gcd(long long a,long long b){if(a%b==0){return b;}else return gcd(b,a%b);}
long long lcm(long long a,long long b){if(a==0){return b;} return a/gcd(a,b)*b;}
#define INF 2000000000
#define MOD 1000000007
#define sym cout<<"---------"<<endl;
#define ll long long
#define mk make_pair
#define en endl
#define RE return 0
#define int ll
#define P pair<int,int>

signed main(){
	string s1,s2; cin>>s1>>s2;
	
	int n=s1.length(),m=s2.length();
	vector<vector<int> > dp(n+1,vector<int>(m+1,INF));
	for(int i=0; i<=n; i++) dp[i][0]=i;
	for(int i=0; i<=m; i++) dp[0][i]=i;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
			dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
			dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(s1[i-1]!=s2[j-1]));
		}
	}
	cout<<dp[n][m]<<en;
}





