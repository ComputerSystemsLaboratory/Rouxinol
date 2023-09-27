#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <functional>
#include <map>
#include <set>
#include <cmath>
#include <string>
#define SIZE 200005
#define INF 1000000005LL

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int n;
ll K;

int main()
{
	scanf("%d",&n);
	int dp[50];
	for(int i=0;i<=n;i++){
		if(i==0||i==1){
			dp[i]=1;continue;
		}
		dp[i] = dp[i-1]+dp[i-2];
	}
	printf("%d\n",dp[n]);
	return 0;
}

