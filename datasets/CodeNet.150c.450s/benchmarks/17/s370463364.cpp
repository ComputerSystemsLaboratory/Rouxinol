#include<cstdio>

int main(){
	int a[5];
	int t;
	scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j <= i; j++){
			if(a[i - j] < a[i - j + 1]){
				t = a[i - j];
				a[i - j] = a[i - j + 1];
				a[i - j + 1] = t;
			}
		}
	}
	printf("%d %d %d %d %d\n", a[0],a[1],a[2],a[3],a[4]);
	return 0;
}