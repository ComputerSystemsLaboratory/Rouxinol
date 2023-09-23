#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
  
int main()
{
	int n,m,o;
	int p[21][21]={0}; //宝石の座標
	int x,y;
	int i,j,k;
	int ans;
	char a;

	while(1){
	scanf("%d",&n);
	if((n==0))
		break;
	//ここまでテンプレ

	ans=0;

	for(i=0;i<21;i++)
	{
		for(j=0;j<21;j++){
			p[i][j]=0;
		}
	}

	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		p[x][y]=1;
	}

	scanf("%d",&m);

	x=10;y=10;
	p[x][y]=0;

	for(i=0;i<m;i++)
	{
		scanf(" %c %d",&a,&o);
		for(j=0;j<o;j++)
		{
			if(a=='N'){
				y++;}
			else if(a=='S'){
				y--;}
			else if(a=='E'){
				x++;}
			else if(a=='W'){
				x--;}
			p[x][y]=0;
		}
	}

	for(i=0;i<21;i++)
	{
		for(j=0;j<21;j++){
			ans+=p[i][j];
		}
	}

	if(ans==0){
		printf("Yes\n");}
	else if(ans>0){
		printf("No\n");
	}

	//ここからテンプレ
	}
	return 0;
}