#include<cstdio>

int main(){
	int x;
	int n = 1;
	while(1){
		scanf("%d", &x);
		if(x == 0) break;
		printf("Case %d: %d\n", n, x);
		n++;
	}

	return 0;
}