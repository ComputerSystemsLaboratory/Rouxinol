//??-2015-11-1
# include <cstdio>
# include <string>
# include <cstring>
# include <algorithm>
# include <iostream>
# include <queue>

using namespace std;

int direction[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, {0,1} };                  //四个方向，上下左右
struct node
{
	int w, h;
	int step;
};
struct node2
{
	int h, w, value;
};
int H, W, N;
string s[1005];
int vis[1005][1005];
int cmp(node2 a, node2 b)
{
	if (a.value < b.value)
		return 1;
	else
		return 0;
}
int DFS(int begin_h, int begin_w, int end_h, int end_w)
{
	int i, j,w = 0;
	queue<node>Q;
	node temp;
	temp.h = begin_h;
	temp.w = begin_w;
	temp.step = 0;
	Q.push(temp);
	vis[begin_h][begin_w] = 1;
	while (!Q.empty())                     //?列不空的?
	{
		node temp1 = Q.front();
		Q.pop();
		//printf("%d\n", w++);
		if (temp1.h == end_h&&temp1.w == end_w)
		{
			return temp1.step;
		}
		for (i = 0; i < 4; i++)
		{
			if (temp1.h + direction[i][0] >= 0 && temp1.h + direction[i][0] < H&&temp1.w + direction[i][1] >= 0 && temp1.w + direction[i][1] < W&&!vis[temp1.h + direction[i][0]][temp1.w + direction[i][1]] && s[temp1.h + direction[i][0]][temp1.w + direction[i][1]] == '.')
			{
				node temp2;
				temp2.h = temp1.h + direction[i][0];
				temp2.w = temp1.w + direction[i][1];
				temp2.step = temp1.step + 1;
				vis[temp1.h + direction[i][0]][temp1.w + direction[i][1]] = 1;
				Q.push(temp2);
			}
		}
	}
}
int main(void)
{
	memset(vis, 0, sizeof(vis));
	int i, j,k = 1;
	int all_step = 0;
	int s_h, s_w,e_h,e_w;
	//freopen("in.txt", "r", stdin);
	scanf("%d%d%d", &H, &W, &N);
	node2 node1[20];
	for (i = 0; i < H; i++)
	{
		cin >> s[i];
		for (j = 0; j < s[i].length(); j++)
		{
			if (s[i][j] >= '0'&&s[i][j] <= '9')
			{
				node1[k].h = i;
				node1[k].w = j;
				node1[k].value = s[i][j] - '0';                //保留?
				k++;
				s[i][j] = '.';                                  //?了BFS的?候?理一致
			}
			else if (s[i][j] == 'S')                            //?始?点
			{
				s_h = i;
				s_w = j;
				s[i][j] = '.';
			}
		}
	}
		sort(node1+1, node1 + N+1, cmp);                             //先排好序
		node1[0].h = s_h;                                            //?了使下面循?一?
		node1[0].w = s_w;
		for (i = 0; i < N; i++)
		{
			e_h = node1[i+1].h;                                      //?点的坐?
			e_w = node1[i+1].w;
			s_h = node1[i].h;
			s_w = node1[i].w;
			//printf("step=%d\n", DFS(s_h, s_w, e_h, e_w));
			all_step += DFS(s_h, s_w, e_h, e_w);                       //原来的?点??起始点
			memset(vis, 0, sizeof(vis));
		}
		printf("%d\n", all_step);
	
	return 0;
}