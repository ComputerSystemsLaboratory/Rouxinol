#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a;
	scanf("%d",&a);
	printf("%d:%d:%d\n",a/3600,a%3600/60,a%3600%60);
	return 0;
}
