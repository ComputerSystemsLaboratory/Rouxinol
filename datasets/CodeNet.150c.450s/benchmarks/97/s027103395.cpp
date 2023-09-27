#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define INF INT_MAX/2

typedef vector<int> vi;

enum dir
{
	LEFTWARD = 0,
	DOWNWARD,
	RIGHTWARD,
	UPWARD
};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main()
{
	while (1)
	{
		int N; cin >> N;
		if (N == 0) return 0;

		vi n(N), d(N);
		rep(i, 1, N) cin >> n[i] >> d[i];

		vi x(N), y(N);
		x[0] = y[0] = 0;
		rep(i, 1, N)
		{
			x[i] = x[n[i]] + dx[d[i]];
			y[i] = y[n[i]] + dy[d[i]];
		}

		int x_max = -1, x_min = INF;
		int y_max = -1, y_min = INF;
		rep(i, 0, N)
		{
			x_max = max(x_max, x[i]);
			x_min = min(x_min, x[i]);
			y_max = max(y_max, y[i]);
			y_min = min(y_min, y[i]);
		}

		cout << (x_max - x_min + 1) << " " << (y_max - y_min + 1) << endl;
	}
}