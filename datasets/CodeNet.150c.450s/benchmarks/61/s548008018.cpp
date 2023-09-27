#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int main()
{
	int N, A, B, C, X;
	while (cin >> N >> A >> B >> C >> X, N || A || B || C || X) {
		vector<int> Y;
		REP(i, 0, N) {
			int y;
			cin >> y;
			Y.push_back(y);
		}

		int cnt = 0, frame = 0;
		int next = (A*X + B) % C;
		
		if (X == Y[0]) cnt++;
		while (cnt < N) {
			if (next == Y[cnt]) cnt++;

			frame++;
			next = (A*next + B) % C;

			if (frame > 10000) {
				frame = -1;
				break;
			}
		}

		cout << frame << endl;
	}
	return 0;
}