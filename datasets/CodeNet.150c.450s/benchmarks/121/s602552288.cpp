//Problem:
//Date:
//Skill:

#define CLR(a) memset((a),0,sizeof(a))
#define MAX 2140000000;
#define RE(i,n)  for(i=0;i<n;i++)
#define RE2(i,n) for(i=1;i<=n;i++)
#include<algorithm>
#include<iostream>
#include<time.h>
#include<string.h>

using namespace std;
int ans;

char map[110][110];
const int shift[4][2] = { 1,0,-1,0,0,1,0,-1 };
int dfs(int x, int y, char color)
{
	if (map[x][y] == 0)return 0;//碰壁

	if (color == 0)//初始
	{
		color = map[x][y];
		ans++;
	}

	if (map[x][y] != color)return 0;//边界

	//延展涂色
	map[x][y] = 0;

	int i;
	RE(i, 4)
	{
		dfs(x + shift[i][0], y + shift[i][1], color);
	}
	return 0;
}

//#define LOCAL
int main()
{
#ifdef LOCAL

	freopen("C:\\Users\\VULCAN\\Desktop\\data.in", "r", stdin);
	//	freopen("C:\\Users\\VULCAN\\Desktop\\data.out", "w", stdout);
#endif
	//这是一条帅气的分界线，写程序从这里开始吧

	int m, n;
	while (cin >> m >> n, m)
	{
		CLR(map);
		int i, j, k;

		RE2(i,m)//输入
			RE2(j,n)
		{
			cin >> map[i][j];
//			cout << map[i][j];
		}
		
		ans = 0;//开始条件
		RE2(i, m)
			RE2(j, n)
			dfs(i, j,0);//dfs开始

		cout << ans << endl;
	}


	








	//这是一条可爱的分界线
#ifdef LOCAL
	printf("用时%.3f秒\n", (double)clock() / CLOCKS_PER_SEC);
#endif
	return 0;
}





