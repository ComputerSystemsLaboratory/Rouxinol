#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 50;

int n;
int a[maxn];

int main(){
	a[0] = 1;
	a[1] = 1;
	scanf("%d",&n);
	for(int i = 2;i <= n; i++)a[i] = a[i-1] + a[i-2];
	printf("%d\n",a[n]);
}