#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;

int Row,Height;
int total_type;
bool flag_pos[101][101];
char dataSet[101][101];

void count_type (int start_x,int start_y,char bz_type)
{
	if (start_x > 0 && start_x <= Row && start_y > 0 && start_y <= Height && dataSet[start_x][start_y] == bz_type)
	{
		if (flag_pos[start_x][start_y] == false)
		{
			flag_pos[start_x][start_y] = true;
			count_type (start_x-1,start_y,bz_type);
			count_type (start_x+1,start_y,bz_type);
			count_type (start_x,start_y-1,bz_type);
			count_type (start_x,start_y+1,bz_type);
		}
	}
}

int main ()
{
	while (cin>>Row>>Height && Row !=0 && Height != 0)
	{
		total_type = 0;
		memset(flag_pos,true,sizeof(flag_pos[0][0]));
		for (int i=1;i<=Row;i++)
		{
			for (int j=1;j<=Height;j++)
			{
				cin>>dataSet[i][j];
				flag_pos[i][j] = false;
			}
		}
		for (int i=1;i<=Row;i++)
		{
			for (int j=1;j<=Height;j++)
			{
				if (flag_pos[i][j] == false)
				{
						count_type (i,j,dataSet[i][j]);
						total_type++;
				}
			}
		}
		cout<<total_type<<endl;
	}
	return 0;
}