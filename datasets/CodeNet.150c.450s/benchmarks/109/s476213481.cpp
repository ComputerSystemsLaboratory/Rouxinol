#include <bits/stdc++.h>
using namespace std;

int v[20000];
int b[10000], e[10000];
int p[20000];

int main()
{
	int n;
	while (scanf("%d", &n), n){
		memset(p, 0, sizeof(p));
		
		for (int i = 0; i < n; i++){
			int h, m, s;
			scanf("%d:%d:%d", &h, &m, &s);
			b[i] = h * 60 * 60 + m * 60 + s;
			scanf("%d:%d:%d", &h, &m, &s);
			e[i] = h * 60 * 60 + m * 60 + s;
			
			v[i * 2] = b[i];
			v[i * 2 + 1] = e[i];
		}
		
		sort(v, v + 2 * n);
		
		for (int i = 0; i < n; i++){
			b[i] = lower_bound(v, v + 2 * n, b[i]) - v;
			e[i] = lower_bound(v, v + 2 * n, e[i]) - v;
			p[b[i]] += 1;
			p[e[i]] -= 1;
		}
		
		int num = 0;
		int res = 0;
		
		for (int i = 0; i < 2 * n; i++){
			num += p[i];
			res = max(res, num);
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}