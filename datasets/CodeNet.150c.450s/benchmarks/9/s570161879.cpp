#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<functional>
#include<vector>
#include<queue>
using namespace std;
#define f(i,n) for(int i=0;i<(int)n;i++)
#define MOD 1000000009

int main(void){
	char a[201];
	f(i, 201)a[i] = 0;
	int k, s;
	int n, m;
	int x, y, z;
	int ans = 0;
	for (;;){
		scanf("%s", a);
		if (a[0] == '-')return 0;
		m = strlen(a);
		scanf("%d", &n);
		s = 0;
		f(i, n){
			scanf("%d", &x);
			s += x;
		}
		s = s%m;
		for (int i = s; i < m; i++)printf("%c", a[i]);
		for (int i = 0; i < s; i++)printf("%c", a[i]);
		printf("\n");
	}
	return 0;
}