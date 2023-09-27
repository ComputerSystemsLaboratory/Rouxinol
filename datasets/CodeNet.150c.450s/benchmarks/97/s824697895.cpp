#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define rep(i,n)	for(int i=0;i<n;i++)
int dx[] = { -1,0,1,0 }, dy[] = { 0,-1,0,1 };


int main() {
	int N;
	while (cin >> N, N) {
		int xmax = 0, ymax = 0, xmin = 0, ymin = 0;
		vector<int>x(N, 0), y(N, 0);
		for (int i = 1; i < N; i++) {
			int n, d; cin >> n >> d;
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
			xmax = max(x[i], xmax);
			ymax = max(y[i], ymax);
			xmin = min(x[i], xmin);
			ymin = min(y[i], ymin);
		}
		cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
	}
}