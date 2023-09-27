#include <bits/stdc++.h>
using namespace std;

const int dx[] = { -1, 0, 1, 0 };
const int dy[] = { 0, -1, 0, 1 };

int main()
{
	int N;
	while(cin >> N, N){
		int xma = 0, xmi = 0, yma = 0, ymi = 0;
		vector<int> x(N), y(N);
		for(int i = 1, n, d;i < N;i++){
			cin >> n >> d;
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
			xma = max(xma, x[i]);
			xmi = min(xmi, x[i]);
			yma = max(yma, y[i]);
			ymi = min(ymi, y[i]);
		}
		cout << (xma - xmi + 1) << ' ' << (yma - ymi + 1) << endl;
	}
	return 0;
}