#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<math.h>
#include<queue>
using namespace std;

struct data_Node{
	int x,y,time;
};

char dataSet[1001][1001];
bool visited[1001][1001];
int H,W,N;

int total_time,total_storage,cnt_storage,cnt_time;
int start_row,start_cell;
int control_x[4] = {0,0,-1,1};
int control_y[4] = {-1,1,0,0};



void Find_Short_Path (int x,int y)
{
	memset(visited,false,sizeof(visited));
	data_Node temp_data;
	temp_data.x = x;
	temp_data.y = y;
	temp_data.time = 0;
	visited[x][y] = true;
	cnt_time = 0;
	queue<data_Node> temp_queue;
	temp_queue.push(temp_data);
	while (temp_queue.empty() != true)
	{
		data_Node u = temp_queue.front();
		temp_queue.pop();
		if ((int)(dataSet[u.x][u.y] - '0') == total_storage)
		{
			start_row = u.x;
			start_cell = u.y;
			cnt_time = u.time;
			break;
		}
		for (int i=0;i<4;i++)
		{
			int dx = u.x + control_x[i];
			int dy = u.y + control_y[i];
			if (dataSet[dx][dy] != 'X' && dx >= 0 && dx< H && dy >= 0 && dy < W)
			{
				data_Node v;
				v.x = dx;
				v.y = dy;	
				v.time = u.time + 1;//此?有坑
				if (visited[dx][dy] == false)
				{
					visited[dx][dy] = true;
					temp_queue.push(v);
				}
			}
		}
	}
}

int main ()
{

		cin>>H>>W>>N;
		memset(dataSet,'X',sizeof(dataSet));
		total_storage = 1;
		total_time = 0;
		for (int i=0;i<H;i++)
		{
			for (int j=0;j<W;j++)
			{
				cin>>dataSet[i][j];
				if (dataSet[i][j] == 'S')
				{
					start_row = i;
					start_cell = j;
				}
			}
		}
		int ans = 0;
		for (int i=1;i<=N;i++)
		{
			total_storage = i;
			Find_Short_Path(start_row,start_cell);
			ans += cnt_time;
		}
		cout<<ans<<endl;

	return 0;
}