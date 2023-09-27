#include <stdio.h>

int main(void){
	int a;
	int s;
	int byou;
	int jikan;
	int hun;
	
	scanf("%d",&s);
	
	byou = s % 60;
	jikan = s / 3600;
	hun = (s % 3600) / 60;
	
	
	printf("%d:%d:%d\n",jikan,hun,byou);
}