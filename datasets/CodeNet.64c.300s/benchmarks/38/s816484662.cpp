///////////////////////////////////////////////////////////
//どんな人生を選ぶかより、選んだ人生をどう生きるかが大切だ//
/////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
using namespace std;
#define INF 0x3f3f3f3f
const int MAXN = 105;
int num[15]; bool flag;
void DFS(int index,int maxB, char maxC)
{
	if (index == 10)
	{
		flag = true;
		return;
	}
	if (flag)
	{
		return;
	}
	if (num[index] > maxB)
	{
		DFS(index + 1, num[index], maxC);
	}
	if (num[index] > maxC)
	{
		DFS(index + 1, maxB,num[index]);
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		flag = false;
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &num[i]);
		}
		DFS(0, 0, 0);
		if (flag)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}