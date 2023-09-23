#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 100 + 5;

int ch[maxn][maxn];

int main(){
	char c;
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n; i++){
		int u,k,v;
		scanf("%d%d",&u,&k);
		for(int j = 1;j <= k; j++){
			scanf("%d",&v);
			ch[u][v] = 1;
		}
	}
	for(int i = 1;i <= n; i++){
		for(int j = 1;j <= n; j++){
			if(j != 1)printf(" ");
			printf("%d",ch[i][j]);
		}
		printf("\n");
	}
}