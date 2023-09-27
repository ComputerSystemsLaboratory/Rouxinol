#include<bits/stdc++.h>

const int MAXN=110;

struct data
{
	char c;
	int num;
};

void Bubble_Sort(int n,data* A)
{
	for(int i=0;i<n;i++)
		for(int j=n-1;j>i;j--)
			if(A[j].num<A[j-1].num)
				std::swap(A[j],A[j-1]);
	for(int i=0;i<n;i++)
		printf("%c%d%c",A[i].c,A[i].num,i+1==n?'\n':' ');
	printf("Stable\n");
}

void Selection_Sort(int n,data* A,data* R)
{
	for(int i=0;i<n;i++)
	{
		int mi=i;
		for(int j=i+1;j<n;j++)
			if(A[j].num<A[mi].num) mi=j;
		if(mi!=i)
			std::swap(A[mi],A[i]);
	}
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		printf("%c%d%c",A[i].c,A[i].num,i+1==n?'\n':' ');
		if(A[i].c!=R[i].c) flag=false;
	}
	if(flag) printf("Stable\n");
	else printf("Not stable\n");
}

int main()
{
	int n;
	data in[MAXN];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		while(!isalpha(in[i].c=getchar()));
		scanf("%d",&in[i].num);
		//printf("%c%d%c",in[i].c,in[i].num,i+1==n?'\n':' ');
	}
	data BS[MAXN];
	memcpy(BS,in,sizeof(in));
	Bubble_Sort(n,BS);
	Selection_Sort(n,in,BS);
	return 0;
}