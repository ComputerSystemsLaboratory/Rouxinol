#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
#define MAX 1005

int h, w, n;
char city[MAX][MAX];
struct node{
	int x,y,time;
} start;
int direc1[4] = { -1,0,1,0 }, direc2[4] = { 0,1,0,-1 };
map<int,int>visited;

void dfs(char end) {
	queue<node> que;
	que.push(start);
	visited[start.x*w+start.y]=1;
	int nextx,nexty;
	while (que.size()!=0)
	{
		node now=que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			nextx=now.x + direc1[i];
			nexty=now.y+direc2[i];
			if (nextx >= 0 && nextx< h&&nexty>= 0 && nexty < w && city[nextx][nexty]!='X' && !visited[nextx*w+nexty]) {	

				if (city[nextx][nexty]==end)
				{
					start.x=nextx;
					start.y=nexty;
					start.time=now.time+1;
					return ;
				}
				else{
					visited[nextx*w+nexty]=1;
					node now1;
					now1.x=nextx;
					now1.y=nexty;
					now1.time=now.time+1;
					que.push(now1);
				}
			}
		}
	}

}



int main() {
	cin >> h >> w >> n;	
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> city[i][j];
			if (city[i][j] == 'S') {
				start.x= i;
				start.y = j;
				start.time=0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		visited.clear();
		dfs(i+'1');
	}
	cout << start.time << endl;
	//system("pause");
	return 0;
}