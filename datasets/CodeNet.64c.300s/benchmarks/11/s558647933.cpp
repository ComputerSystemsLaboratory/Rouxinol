#include<stdio.h>
int main(){
	int totalSecond, hour, minute, second;
	scanf("%d", &totalSecond);
	hour = totalSecond/3600;
	minute = (totalSecond%3600)/60;
	second = totalSecond%60;
	printf("%d:%d:%d\n", hour, minute, second);
}
