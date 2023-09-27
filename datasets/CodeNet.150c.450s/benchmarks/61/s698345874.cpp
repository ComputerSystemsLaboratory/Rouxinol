#include <bits/stdc++.h>

using namespace std;

int N, A, B, C, X;
int Y[110];

void solve() {
	int frame = 0, reel = 0;
	
	while (1) {		
		if (Y[reel] == X) reel++;
		if (reel == N) break;
		
		X = (A * X + B) % C;
		frame++;
		
		if (frame > 10000) {
			cout << -1 << endl;
			return;
		}
	}
	
	cout << frame << endl;
}

int main() {
	while (1) {
		cin >> N >> A >> B >> C >> X; if (N == 0) break;
		for (int i = 0; i < N; i++) cin >> Y[i];
		solve();
	}
	
	return 0;
}