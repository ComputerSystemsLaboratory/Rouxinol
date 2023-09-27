#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	int xp[200], yp[200];
	int dx[] = {-1, 0, 1, 0};
	int dy[] = { 0, -1, 0, 1};
	while(cin >> N, N){
		int idx = 1;
		xp[0] = 0;
		yp[0] = 0;
		int left = 0;
		int right = 0;
		int top = 0;
		int bottom = 0;
		int n, d;
		for(int i = 1; i < N; i++){
			cin >> n >> d;
			xp[i] = xp[n] + dx[d];
			yp[i] = yp[n] + dy[d];
			left = min(left, xp[i]);
			right = max(right, xp[i]);
			top = max(top, yp[i]);
			bottom = min(bottom, yp[i]);
		}
		cout << (right - left + 1) << " " << (top - bottom + 1) << endl;
	}
}