#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int a[2000001],b[2000001],c[100001];
int main()
{	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[a[i]]++;//等于a[i]的数的数量 
	}
	for(int i=1;i<100001;i++)
	{
		c[i]=c[i]+c[i-1];//小于等于自己的数数量 
	}
	for(int i=0;i<n;i++)
	{
		b[c[a[i]]-1]=a[i];//有c[a[i]]小于等于a[i]，因此a[i]就放到这个位置上
		c[a[i]]-- ;//减去一个等于自己的数 
	}
	for(int i=0;i<n;i++)
	{
		if(i==n-1){
			printf("%d\n",b[i]);
		}else{
			printf("%d ",b[i]);
		}
	}
	return 0;
}
