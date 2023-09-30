#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long ll;
//Global
int x, y;
const int MAX_N = 20;
char maze[MAX_N][MAX_N];
const int INF = 1000000;
int X, Y;//"@"???????????????
int memo[MAX_N][MAX_N];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int counter;

void bsd(int a, int b) {
	maze[b][a] = '#';
	memo[b][a] = INF;
	counter++;
	for (int i = 0; i < 4; i++) {
		int nx = a + dx[i];
		int ny = b + dy[i];
		if (memo[ny][nx] == 0 && maze[ny][nx] == '.' && 0 <= nx && nx < x && 0 <= ny && ny < y) {
			bsd(nx, ny);
		}
	}

}



//solve
//??±???????????¢?´¢??§"@"??¨???????????£?????????"."????????°????±???????
void solve()
{
	//memo????????????
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			memo[i][j] = 0;
		}
	}

	//"@"??¨??£??\????????????  ??????  INF??§??????  ??????  ????????????????????£?????????????????????"."??§??????
	counter = 0;//"@"??????
	bsd(X, Y);


	cout << counter << endl;

}







//main
int main()
{
	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0)break;
		//"W"??¨"."??¨"@"?????\???
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				cin >> maze[i][j];
				if (maze[i][j] == '@') {
					X = j; Y = i;//@???????????????????¨????
				}
			}
		}
		solve();
	}
    return 0;
}