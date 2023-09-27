#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int a[4],b[4],res;
	scanf("%d%d%d%d",a,a+1,a+2,a+3);
	scanf("%d%d%d%d",b,b+1,b+2,b+3);
	res = max(*a+a[1]+a[2]+a[3],*b+b[1]+b[2]+b[3]);
	printf("%d\n",res);
}