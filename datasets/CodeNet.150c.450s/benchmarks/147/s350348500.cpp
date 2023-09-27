#include <cstdio>
#define INF 1e9
#define eps 1e-6
typedef long long ll;

int n, ans[100010];

inline int F(int x){
	return x * x;
}

int main(){

	scanf("%d", &n);
	for(int x = 1; (F(x) / 2) <= n; x++)
		for(int y = 1; F(x + y) / 2 <= n; y++)
			for(int z = 1; (F(x + y) + F(y + z) + F(z + x)) / 2 <= n; z++)
				ans[(F(x + y) + F(y + z) + F(z + x)) / 2]++;
	for(int i = 1; i <= n; i++)
		printf("%d\n", ans[i]);

	return 0;
}
