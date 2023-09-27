#include<cstdio>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int t = 0;
	for(int i = a; i <= b; i++){
		if(!(c % i)){
			t++;
		}
	}
	printf("%d\n", t);
	return 0;
}