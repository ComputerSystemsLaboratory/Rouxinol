#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

const int maxn=500100;

int t[maxn],a[maxn];

int c=0;

void merge_sort(int *a,int x,int y,int *t){
	if(y-x>1){
		int m=(x+y)/2;
		int p=x,q=m,i=x;
		merge_sort(a,x,m,t);
		merge_sort(a,m,y,t);
		while(p<m || q<y){
			if(q>=y || (p<m && a[p]<=a[q]))
			{
				c++;
				t[i++]=a[p++];
			}
			else
			{
				c++;
				t[i++]=a[q++];
			}
		}
	for(i = x;i<y;i++)
		a[i]=t[i];
	}
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int l=0,r=n;
		merge_sort(a,l,r,t);
		for(int i=0;i<n;i++)
		{
			if(i!=0)
				printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
		printf("%d\n",c);
	}
	return 0;
}

