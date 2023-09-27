//??-2015-11-1
/*
?意：
在H * W的矩形果?里有苹果、梨、蜜柑三?果?， 相?（上下左右）的同?果?属于同一个区域，?出果?的果?分布，求?共有多少个区域。 （原?的??中苹果?リ，梨?カ，蜜柑?ミ， ?中共10个区域）
?入：
多?数据，??数据第一行??个整数H，W（H <= 100, W <= 100）， H = 0 且 W = 0代表?入?束。以下H行W列表示果?的果?分布， 苹果是@，梨是#， 蜜柑是*。
?出：
?于??数据，?出其区域的个数。
*/
# include <cstdio>
# include <algorithm>
# include <stack>
# include <string>
# include <iostream>
# include <cstring>

using namespace std;
int direction[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, {0,1} };             //方向，上下左右
int H, W;
int vis[105][105];
string s[105];
struct node
{
	int w, h;
}node1[10005];
void DFS(int i, int j)
{
	stack<node>S;
	int k, z;
	char c = s[i][j];
	node temp;
	temp.h = i;
	temp.w = j;
	vis[temp.h][temp.w] = 1;
	S.push(temp);

	while (!S.empty())                            //?不空的?
	{
		node temp1 = S.top();
		S.pop();
		for (k = 0; k < 4; k++)
		{
			if (temp1.h + direction[k][0] >= 0 && temp1.h + direction[k][0] < H&&temp1.w + direction[k][1] >= 0 && temp1.w + direction[k][1] < W &&!vis[temp1.h + direction[k][0]][temp1.w + direction[k][1]] && s[temp1.h + direction[k][0]][temp1.w + direction[k][1]] == c)   //没有越界，并且没有???，和原来的符号一??，就入?
			{
				node temp2;
				temp2.h = temp1.h + direction[k][0];
				temp2.w = temp1.w + direction[k][1];
				vis[temp2.h][temp2.w] = 1;                              //在入?的?候就??
				S.push(temp2);
			}
		}
	}
}
int main(void)
{
	//freopen("in.txt", "r", stdin);
	
	while (scanf("%d%d", &H, &W) != EOF&&H&&W)
	{
		memset(vis, 0, sizeof(vis));
		int i, j,count_number = 0;
		getchar();
		for (i = 0; i < H; i++)
		{
			cin >> s[i];
		}
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				if (!vis[i][j])
				{
					DFS(i, j);
					count_number++;
				}
			}
		}
		printf("%d\n", count_number);
	}
	return 0;
}