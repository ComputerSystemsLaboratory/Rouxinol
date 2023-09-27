#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<queue>
using namespace std;

typedef pair<int, int> pi;
pair <int, int>p;
int n, m, c;
char ma[1001][1001];
int x, y;
int te[1001][1001];
int xw[4] = { 1, 0, -1, 0 };
int yw[4] = { 0, 1, 0, -1 };
char name[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int nat = 0;
int na;
int op = 10000;
int main()
{
	queue<pi> q;
	cin >> n >> m >> na;
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 < m; i2++){
			cin >> ma[i][i2];
			te[i][i2] = op;
			if (ma[i][i2] == 'S'){
				p.first = i;
				p.second = i2;
			}
		}
	}

	int count;

	count = 0;
	q.push(p);

	te[p.first][p.second] = 0;
	while (!q.empty()){
		p = q.front();
		q.pop();

		for (int i = 0; i < 4; i++){
			x = p.first + xw[i];
			y = p.second + yw[i];
			if (0 <= x && x < n && 0 <= y && y < m && ma[x][y] != 'X' && te[x][y] == op){

				if (ma[x][y] == name[nat]){
					while (!q.empty()){ q.pop(); }
					q.push(make_pair(x, y));
					count += te[p.first][p.second] + 1;
					nat++;
					if (nat == na){ cout << count << endl; return 0; }
					for (int i2 = 0; i2 <= n; i2++){
						for (int i3 = 0; i3 <= m; i3++){
							te[i2][i3] = op;
						}
					}
					te[x][y] = 0;
					break;
				}
				else{
					q.push(make_pair(x, y));
					te[x][y] = te[p.first][p.second] + 1;
				}
			}
		}
	}
}