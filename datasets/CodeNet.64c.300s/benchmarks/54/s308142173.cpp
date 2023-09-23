#include <cstdio>
#include <cstring>

#define N (100)

typedef long long lint;

int n;
int val[N + 1];
lint memo[N + 1][21];

using namespace std;

lint getWay(int i, int num)
{
	lint ret = 0;
	
	if (memo[i][num] >= 0) return (memo[i][num]);
	
	if (i == n - 1) return (num == val[n - 1]);
	
	if (num + val[i] <= 20){
		ret += getWay(i + 1, num + val[i]);
	}
	if (num - val[i] >= 0){
		ret += getWay(i + 1, num - val[i]);
	}
	
	return (memo[i][num] = ret);
}

int main()
{
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) scanf("%d", val + i);
	
	memset(memo, -1, sizeof(memo));
	
	printf("%lld\n", getWay(1, val[0]));
	
	return (0);
}