#include<stdio.h>
int main()
{
	int a[20][20]={0},num,n;
	char card;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
	{
		scanf(" %c %d",&card,&num);
		if(card=='S') a[0][num]=1;
		if(card=='H') a[1][num]=1;
		if(card=='C') a[2][num]=1;
		if(card=='D') a[3][num]=1;
	}
	for(int i=0;i<=3;i++)
	{
		for(int j=1;j<=13;j++)
		{
			if(a[i][j]==1) continue;
			if(a[i][j]==0&&i==0) printf("S %d\n",j);
			if(a[i][j]==0&&i==1) printf("H %d\n",j);
			if(a[i][j]==0&&i==2) printf("C %d\n",j);
			if(a[i][j]==0&&i==3) printf("D %d\n",j);
			
		}
	}
	return 0;
}