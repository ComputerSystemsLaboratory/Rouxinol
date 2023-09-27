#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef vector<int> VI;
typedef vector< VI > VVI;

typedef long long LL;

typedef pair<int, int> PII;
typedef vector<PII> VPII;

#define Y first
#define X second

int H, W, N;
vector<string> ts;

int main(void) {
	cin >> H >> W >> N;
	ts = vector<string>(H);
	for (auto &line : ts) cin >> line;

	string seq(N, '0');
	iota(seq.begin(), seq.end(), '1');
	
	PII start;
	for (int y = 0; y < H; y++) {
		for (int x = 0; x < W; x++) {
			if (ts[y][x] == 'S') {
				start.Y = y;
				start.X = x;
			}
		}
	}

	int total_time = 0;
	queue<pair<int, PII>> q;
	q.push(make_pair(0, start));
	vector<vector<bool>> done(H, vector<bool>(W));

	for (int i = 0; i < N; i++) {
		while(q.size()) {
			int now = q.front().first;
			int y = q.front().second.Y;
			int x = q.front().second.X;
			q.pop();

			if (done[y][x]) continue;
			done[y][x] = true;

			if (ts[y][x] == seq[i]) {
				q = queue<pair<int, PII>>();
				q.push(make_pair(0, make_pair(y, x)));
				done = vector<vector<bool>>(H, vector<bool>(W));
				total_time += now;
				break;
			}

			for (int dx = -1; dx <= 1; dx++) {
				for (int dy = -1; dy <= 1; dy++) {
					if (!(!dx ^ !dy)) continue;
					int nx = x + dx;
					int ny = y + dy;

					if (nx < 0 || ny < 0 || nx >= W || ny >= H) continue;
					if (done[ny][nx]) continue;
					if (ts[ny][nx] == 'X') continue;

					if (!done[ny][nx]) {
						q.push(make_pair(now + 1, make_pair(ny, nx)));
					}
				}
			}
		}
	}

	cout << total_time << endl;
	

	return 0;
}