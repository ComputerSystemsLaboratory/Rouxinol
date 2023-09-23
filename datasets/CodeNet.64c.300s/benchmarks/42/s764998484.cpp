#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<string.h>
#include<set>
#include<functional>
using namespace std;

#define INF 1<<21
#define MOD 1000000007

int main() {
  int N;
  while (1) {
	cin >> N;
	if (N == 0)return 0;

	int table[21][21];
	memset(table, 0, sizeof(table));
	for (int i = 0; i < N; i++) {
	  int a, b;
	  cin >> a >> b;
	  table[a][b] = 1;
	}
	int M;
	char c;
	int d;
	int x=10, y=10;
	int cnt=0;
	cin >> M;
	for (int i = 0; i < M; i++) {
	  cin >> c >> d;
	  for (int j = 0; j < d; j++) {
		switch (c) {
		case 'N':y += 1;
		  break;
		case 'E':x += 1;
		  break;
		case 'S':y -= 1;
		  break;
		case 'W':x -= 1;
		  break;
		}
		if (table[x][y] == 1) {
		  table[x][y] = 0;
		  cnt++;
		}
	  }
	}
	if (cnt == N) {
	  cout << "Yes" << endl;
	}
	else cout << "No" << endl;
  }
}