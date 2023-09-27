#include<cstdio>

int main(){
	int g[10];
	int i = 0;
	int t;
	while(scanf("%d", &t) + 1){
		if(t){
			g[i] = t;
			i++;
		}else{
			i--;
			printf("%d\n", g[i]);
		}
	}
	return 0;
}