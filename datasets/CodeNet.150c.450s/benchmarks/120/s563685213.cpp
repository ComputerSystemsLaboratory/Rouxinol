#include<stdio.h>

bool osenbei[10][10001];

int h,w;
int ans=0;

void disp(bool ob[][10001])
{
	printf("--->\n");
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			printf("%d",ob[i][j]?1:0);
		}
		printf("\n");
	}
}


void calc(bool osenbei[][10001])
{

	//disp(osenbei);

	static bool temp[10][10001];

	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
			temp[i][j]=osenbei[i][j];

	for(int j=0;j<w;j++)
	{
		int count=0;
		for(int i=0;i<h;i++)
			if(temp[i][j])
				count++;
		if(count >h/2)
			for(int i=0;i<h;i++)
				temp[i][j] = temp[i][j]?false:true;
	}
	//disp(temp);

	int cnt=0;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
			if(!temp[i][j])
				cnt++;
	}
	if(cnt > ans)
		ans=cnt;
}

int solve(bool osenbei[][10001],int num)
{
	static bool temp[10][10001];
	if(num==h)
		return true;

	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
			temp[i][j]=osenbei[i][j];

	calc(temp);
	solve(temp,num+1);

	for(int i=0;i<w;i++)
		temp[num][i]=osenbei[num][i]?false:true;

	calc(temp);
	solve(temp,num+1);

	return 0;
}

int main()
{
	while(1)
	{
		scanf("%d %d",&h,&w);
		if(h==0 && w == 0)
			break;
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				scanf("%d",&osenbei[i][j]);

		solve(osenbei,0);
		printf("%d\n",ans);
	}
}