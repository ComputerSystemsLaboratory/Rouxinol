#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int N,M;
	FILE *fp;
	fp=fopen("ans.txt","w");

	while(cin >> N && N)
	{
		int robot_x=10,robot_y=10;
		int item_x[100000]={};
		int item_y[100000]={};
		int flag[100][100]={};
		int count=0;

		rep(i,N)cin >> item_x[i] >> item_y[i];
		
		cin >> M;
		rep(i,M)
		{
			char muki[10]={};
			int L=0;

			cin >> muki >> L;
			
			rep(j,L)
			{
				if(muki[0]=='N')robot_y++;
				else if(muki[0]=='E')robot_x++;
				else if(muki[0]=='S')robot_y--;
				else if(muki[0]=='W')robot_x--;

				rep(k,N)
				{
					if(robot_x == item_x[k] && robot_y == item_y[k] && flag[robot_x][robot_y] == 0)
					{
						count++;
						flag[robot_x][robot_y]=1;
					}
				}
			}
		} 
		if(N<=count)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	fclose(fp);
	return 0;
}