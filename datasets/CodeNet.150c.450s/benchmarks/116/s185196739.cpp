#include<cstdio>
#include<algorithm>
#define INF 1000000000
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

ll a[100001];
ll memo[100001];//i???????????§?¶?????????????????¨?(i???????????????)
int main(){
	int n, k;
	while (scanf("%d%d", &n, &k), n){
		rep(i, n)
			scanf("%lld", &a[i]);
		ll sum = 0;
		rep(i, n + 1){
			memo[i] = sum;
			sum += a[i];
		}
		ll Max = -INF;
		rep(i, n - k + 1){
			sum = memo[i + k] - memo[i];
			Max = max(Max, sum);
		}
		printf("%lld\n", Max);
	}
	return 0;
}