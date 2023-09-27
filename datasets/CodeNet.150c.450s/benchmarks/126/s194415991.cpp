#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <set>
#include <numeric>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <climits>
#include <cfloat>
#include <ctime>
#include <complex>
#include <cassert>
#include <iomanip>
#include <tuple>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

int a, b, m;
int dp[16][16];
void exec()
{
	cin >> a >> b >> m;
	if((a|b)==0)exit(0);
	memset(dp,0,sizeof(dp));
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		x--;y--;
		dp[x][y]=-1;
	}

	if(dp[0][0]==-1)
	{
		cout << 0 << endl;
		return;
	}

	dp[0][0]=1;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(dp[i][j]==-1)continue;
			if(i>0&&dp[i-1][j]>=0){
				dp[i][j]+=dp[i-1][j];
			}
			if(j>0&&dp[i][j-1]>=0){
				dp[i][j]+=dp[i][j-1];
			}
		}
	}

	cout << max(0,dp[a-1][b-1]) << endl;
}
int main() {
	while(1)exec();
}