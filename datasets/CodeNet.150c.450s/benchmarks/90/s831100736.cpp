#include<cstdio>

int main(){
	int a[101] = {};
	int t, c = 0;
	while(scanf("%d", &t) + 1){
		a[t]++;
		if(a[t] > c){
			c++;
		}
	}
	for(int i = 1; i < 101; i++){
		if(a[i] == c){
			printf("%d\n", i);
		}
	}
}