#include<stdio.h>
int main(){
	int a, b, c;
	int counter = 0;
	scanf("%d%d%d", &a, &b, &c);
	for(int i=a; i<=b; i++){
		if(c%i==0)counter++;
	}
	printf("%d\n", counter);
}
