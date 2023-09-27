#define _USE_MATH_DEFINES
#define INF 100000000

#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
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
#include <list>
#include <cctype>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P> PP;

static const double EPS = 1e-8;

int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};

int dp[1000000];
int dp_odd[1000000];

int main(){

	memset(dp,0x3f,sizeof(dp));
	memset(dp_odd,0x3f,sizeof(dp_odd));

	dp[0] = 0;
	dp[1] = 1;
	dp_odd[0] = 0;
	dp_odd[1] = 1;

	for(int i=0;i<=1000000;i++){
		for(int j=1;j<=1000000;j++){
			int b = (j)*(j+1)*(j+2)/6;
			if(i+b >= 1000000) break;
			dp[i+b] = min(dp[i+b],dp[i] + 1);
			if(b % 2){
				dp_odd[i+b] = min(dp_odd[i+b],dp_odd[i] + 1);
			}
		}
	}


	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;
		printf("%d %d\n",dp[n],dp_odd[n]);
	}
}