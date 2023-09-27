#define _USE_MATH_DEFINES
#define MAX_N 1000000
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>

using namespace std;

typedef long long ll;
typedef pair<int,int> P;

static const double eps = 1e-8;

ll dp[100][100];

ll nCr(int n,int r){
	return dp[n][r] != -1 ? dp[n][r] : 
		dp[n][r] = (r==0|| n==r) ? 1 : nCr(n-1,r) + nCr(n-1,r-1);
}

int main(){
	memset(dp,-1,sizeof(dp));

	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;

		ll res=0;

		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				for(int k=0;k<=n;k++){
					if(i+2*j+3*k == n){
						res += nCr(i+j+k,i) * nCr((i+j+k)-i,j) * nCr((i+j+k)-i-j,k);
					}
				}
			}
		}

		printf("%lld\n",res/3650 + 1);
	}
}