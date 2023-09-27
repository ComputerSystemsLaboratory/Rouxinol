#include<iostream>
#include<cstdio>
#include<cstring>
#define maxn 100001
using namespace std;
int n;
int t[maxn];

int parent(int num)
{
	return num/2;
}

int left(int num)
{
	return num*2;
}

int right(int num)
{
	return num*2+1;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	  scanf("%d",&t[i]);
	for(int i=1;i<=n;++i)
	{
		printf("node %d: ",i);
		printf("key = %d, ",t[i]);
		if(parent(i)>=1) printf("parent key = %d, ",t[parent(i)]);
		if(left(i)<=n) printf("left key = %d, ",t[left(i)]);
		if(right(i)<=n) printf("right key = %d, ",t[right(i)]);
		printf("\n");
	}
	return 0;
} 