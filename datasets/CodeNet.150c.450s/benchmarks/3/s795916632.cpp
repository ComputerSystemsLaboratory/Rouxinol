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

char ans[1001];
char re[1001];

void reverse(int x, int y){
	f(i, y - x + 1)re[i] = ans[x + i];
	f(i, y - x + 1)ans[y - i] = re[i];
}



int main(void){
	char a[10];
	f(i, 1001){
		ans[i] = 0;
	}
	int n, m;
	int x, y;
	scanf("%s", ans);
	scanf("%d", &n);
	f(i,n){
		scanf("%s", a);
		if (a[2] == 'i'){
			scanf("%d %d", &x, &y);
			for (int i = x; i < y + 1; i++)printf("%c", ans[i]);
			printf("\n");
		}
		else if (a[2] == 'v'){
			scanf("%d %d", &x, &y);
			reverse(x,y);
		}
		else{
			scanf("%d %d", &x, &y);
			scanf("%s", re);
			for (int i = x; i < y + 1; i++)ans[i] = re[i - x];
		}
	}

	return 0;
}