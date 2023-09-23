/*
靠，真想自己一个大嘴巴，一个比?大小的函数都尼?写?偏了
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<math.h>
#include<algorithm>
#define MAXVAL 999999999;
using namespace std;

int dataSet[46][46];
int resultSet[46];
int N;
int result[46];


void Find_Value (int m)
{
	memset(result,0,sizeof(resultSet));
	for (int k=0;k<=m;k++)
	{
		for (int i=0;i<=m;i++)
		{
			for (int j=0;j<=m;j++)
			{
				dataSet[i][j] =  min(dataSet[i][j],dataSet[i][k] + dataSet[k][j]);
			}
		}
	}
}

int main ()
{
	while (cin>>N && N!=0)
	{
		for (int i=0;i<=15;i++)
		{
			for (int j=0;j<=15;j++)
			{
				if ( i == j)
				{
					dataSet[i][j] = 0;
				}
				else
				{
					dataSet[i][j] = 999999;
				}
			}
		}
		int m = 0;
		for (int i=0;i<N;i++)
		{
			int x,y,value;
			cin>>x>>y>>value;
			dataSet[x][y] = dataSet[y][x] = min(dataSet[x][y],value);
			m = max(max(m,x),y);	
		}
		Find_Value (m);
		int ans =  999999;
		int every_total = 0;
		int Find_pos = 0;
		for (int i=0;i<=m;i++)
		{
			every_total = 0;
			for (int j=0;j<=m;j++)
			{
				if (dataSet[i][j] !=  999999)
				{
					every_total += dataSet[i][j];
				}
			}
			if (ans > every_total)
			{
				Find_pos = i;
				ans = every_total;
			}
		}
		cout<<Find_pos<<" ";
		cout<<ans<<endl;

	}
	return 0;
}