#include<cstdio>

int main(){
	int n;
	int a = 100;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		if(a % 20){
			a = a * 1.05 + 1;
		}else{
			a *= 1.05;
		}
	}
	printf("%d000\n", a);
	return 0;
}