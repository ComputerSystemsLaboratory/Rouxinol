#include<stdio.h>
int main(){
	int angka, i=1;
	scanf("%d", &angka);
	while(angka!=0){
		printf("Case %d: %d\n", i, angka);
		i++;
		scanf("%d", &angka);
	}
}
