#include <queue>
#include <cstdio>
using namespace std;
int n, c, v, dp[500007];
int main() {
	scanf("%d",&n); dp[n]=1;
	for(int i=(n+2)/2;i>1;i--) dp[i]=dp[2*i-1]+2*dp[2*i]+dp[2*i+1];
	for(int i=2;i<=n;i++) c+=dp[i]*i;
	priority_queue<int> que;
	for(int i=0;i<n;i++) scanf("%d", &v), que.push(-v);
	for(int i=0;i<n;i++) {
		if(i) printf(" ");
		printf("%d", -que.top()); que.pop();
	}
	printf("\n%d\n", c);
	return 0;
}