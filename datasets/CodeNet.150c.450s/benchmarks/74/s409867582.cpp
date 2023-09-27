/*************************************************************************
    > File Name: Coin_Changing_Problem.cpp
    > Author: Frade
    > Mail: frade@vip.sina.com.cn 
    > Created Time: 2017年05月02日 星期二 16?09分33秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int Getint()
{
    char c = getchar();
    bool flag = false;
    int ans = 0;
    while(c != '-' && (c <'0' || c > '9'))c = getchar();
    if(c == '-')flag = true,c = getchar();
    while(c >= '0' && c <= '9')ans = ans*10 + c - '0',c = getchar();
    return (flag == true) ? -ans : ans;
}

const int maxn = 50000;

int w[maxn],f[maxn];

int main()
{
	for(int j = 1;j < maxn; j++)f[j] = -999999;

	int W = Getint();
	int N = Getint();
	for(int i = 1;i <= N; i++)w[i] = Getint();

	f[0] = 0;

	for(int i = 1;i <= N; i++)
	{
		for(int j = w[i];j <= W; j++)
		{
			if(f[j] <= 0)f[j] = max(f[j],f[j-w[i]]+1);
			else f[j] = min(f[j],f[j-w[i]]+1);
		}
	}
	printf("%d\n",f[W]);
    return 0;
}