#include<cstdio>

using namespace std;

int n,s;
int answer=0;

void roop(int T,int N,int S)
{
	if(N==n)//最後の処理ならば
	{
		if(s-S>T&&s-S<10)answer++;
	}
	else//それ以外
	{
		for(int i=T+1;i<10;i++)
		{
			roop(i,N+1,S+i);
		}
	}
}


int main()
{
	while(true)
	{
		scanf("%d%d",&n,&s);
		if(n==0&&s==0)break;
		answer=0;
		roop(-1,1,0);
		printf("%d\n",answer);
	}

	return 0;
}