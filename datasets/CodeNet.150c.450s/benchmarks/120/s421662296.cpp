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
bool map[11][10010];
int m, n;
int add(int y)
{
	int ans(0);
	for (int i = 1; i <= m; i++)
	{
		ans += map[i][y];
	}
	//cout << max(ans, m - ans) << endl;
	return max(ans, m - ans);

}
void change(int num)
{
	int i,j;
	RE2(i, m)//第1到m位
	{
		if(num&(1<<(i-1)))
			RE2(j, n)
		{
			map[i][j] = !map[i][j];
		}
	}
}
int search()
{
	int ans(0);
	int i, j, k;
	for (i = 0; i < (1 << m); i++)//遍历每一种情况
	{
		int maxnum(0);
		change(i);

		RE2(j, n)
		{
			maxnum+= add(j);
		}
		ans = max(ans, maxnum);

		change(i);
	}
	return ans;
}

//#define LOCAL
int main()
{
#ifdef LOCAL

	freopen("C:\\Users\\VULCAN\\Desktop\\data.in", "r", stdin);
	//	freopen("C:\\Users\\VULCAN\\Desktop\\data.out", "w", stdout);
#endif
	//这是一条帅气的分界线，写程序从这里开始吧
	int i, j, k;
	
	while (cin >> m >> n,m)
	{
		RE2(i, m)RE2(j, n)
		{
			cin >> map[i][j];//输入
//			cout << map[i][j];
		}
		int ans=search();
		cout << ans << endl;
	}








	//这是一条可爱的分界线
#ifdef LOCAL
	printf("用时%.3f秒\n", (double)clock() / CLOCKS_PER_SEC);
#endif
	return 0;
}





