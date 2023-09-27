#include<iostream>

using namespace std;
int doro[20][20];
int ans = 0, a, b;
int jud(int x, int y)
{
	if (x>a||y>b)return 0;
	if (doro[x][y] == 1)return 0;
	if (x == a&&y == b)return 1;

	//if(a>x&&b>y)ans+=jud(x+1,y+1);
	if (a>x)ans += jud(x + 1, y);
	if (b>y)ans += jud(x, y + 1);
	return 0;

}


int main()
{
	int num, x, y;
	while (1)
	{
		ans = 0;//初期化
		for (int i = 0; i < 20; i++)
			for (int q = 0; q < 20; q++)
				doro[i][q] = 0;

		cin >> a >> b;//道幅入力
		if (a == 0 && b == 0)break;
		cin >> num;   //障害物数
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;//障害物座標入力
			doro[x][y] = 1;
		}
		jud(1, 1);
		cout << ans << endl;
	}
	return 0;
}

//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0515