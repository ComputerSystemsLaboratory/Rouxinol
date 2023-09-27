#include<iostream>
#include<string>
#include<string.h>
using namespace std;

const int MAX = 101;
int X[MAX][MAX]; //??????????¨????
int used[MAX][MAX]; //????????????????????????????????????
int ans = 0;

int H, W;
void input()
{
	cin >> H >> W;
	if (H == 0 && W == 0) return;
	for (int i = 0; i < H; i++) {
		string ch;
		cin >> ch;
		for (int j = 0; j < W; j++) {
			//char ch;
			//scanf("%c", &ch);
			if (ch[j] == '@') //????????´
				X[i][j] = 1;
			if (ch[j] == '#') //??????
				X[i][j] = 2;
			if (ch[j] == '*') //?????????
				X[i][j] = 3;
		}
	}
	memset(used, 0, sizeof(used));
	ans = 0;
}

void dfs(int i, int j) //
{
	used[i][j] = ans + 1;  //test
	int same = X[i][j];
	//?????????
	if (j - 1 >= 0 && !used[i][j - 1] && X[i][j - 1] == same)
		dfs(i, j - 1);
	//?????????
	if (i - 1 >= 0 && !used[i - 1][j] && X[i - 1][j] == same)
		dfs(i - 1, j);
	//???
	if (!used[i][j + 1] && X[i][j + 1] == same)
		dfs(i, j + 1);
	//???
	if (!used[i + 1][j] && X[i + 1][j] == same)
		dfs(i + 1, j);
	return;
}

void solve()
{
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (!used[i][j]) {
				dfs(i, j);
				ans++;
			}
		}
	}

	cout << ans << endl;
}

int main()
{
	while (1) {
		input();
		if (H == 0 && W == 0) break;
		solve();
	}
	return 0;
}