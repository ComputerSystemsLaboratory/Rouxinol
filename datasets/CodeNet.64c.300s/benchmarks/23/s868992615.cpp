#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int a, b, area, zhou;
	scanf("%d %d",&a,&b);
	area = a*b;//面積
	zhou = 2 * (a + b);//周の長さ
	printf("%d %d\n", area, zhou);
	return 0;
}
