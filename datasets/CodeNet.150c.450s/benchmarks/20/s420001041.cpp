#include <stdio.h>

int main(){
	int Sut;
	scanf("%d",&Sut);
	printf("%d:%d:%d\n",Sut/3600,(Sut%3600)/60,Sut%60);
}
