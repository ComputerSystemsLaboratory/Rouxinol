#include<stdio.h>

int V,E,R,S[500010],T[500010],D[500010];
int C[100000];
const int INF=10000*100000+100;
int i,t,j;

int main()
{

	for(i=0;i<100000;i++)
	{
		C[i]=INF;
	}

	scanf("%d",&V);
	scanf("%d",&E);
	scanf("%d",&R);

	C[R]=0;

	for(i=0;i<E;i++)
	{
		scanf("%d",&S[i]);
		scanf("%d",&T[i]);
		scanf("%d",&D[i]);
	}

	for(t=0;t<V;t++)
	{
		int update=-1;
		for(i=0;i<E;i++)
		{
			int s=S[i],t=T[i],d=D[i];
			if(C[s]<INF && C[t]>C[s]+d)
			{
				C[t]=C[s]+d;
				update=1;
			}
		}
		if(update==-1) break;
	}
	for(j=0;j<V;j++)
	{
		if(C[j]<INF)
			printf("%d\n",C[j]);
		else
			printf("INF\n");
	}
	return 0;
}