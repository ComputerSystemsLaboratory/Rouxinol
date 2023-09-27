#include<stdio.h>

int main()
{
	int n,k,flag=0;
	scanf("%d %d",&n,&k);
	int p=k,c=n-k; 
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<c;i++)
	{
		int s1,s2;
		s1=a[p-k];
		s2=a[p];
		p++; 
		
		if(s1<s2) printf("Yes\n");
		else printf("No\n");
	}

	
	return 0;
 } 