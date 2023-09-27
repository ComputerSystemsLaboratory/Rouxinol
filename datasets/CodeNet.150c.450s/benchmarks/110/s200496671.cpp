#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector < vector<int> > hyou(1010, vector<int>(1010, -10));
int dh[] = {0, 1, 0, -1};
int dw[] = {1, 0, -1, 0};

typedef pair<int, int> P;
typedef pair<int, P> Q;

int search(int h, int w, int n) {
	int counter = 0;
	queue<Q> que;
	Q p;
	(p.second).first = h;
	(p.second).second = w;
	p.first = 0;
	que.push(p);
	if (hyou[h][w] == 0) {
		hyou[h][w] = -11;
	} else {
		hyou[h][w] = - hyou[h][w];
	}
	while (!que.empty()) {
		Q pp = que.front();
		que.pop();
		bool hantei = false;
		for (int i = 0; i < 4; i++) {
			if (hyou[(pp.second).first+dh[i]][(pp.second).second+dw[i]] >= 0 ) {
				Q pq;
				(pq.second).first = (pp.second).first+dh[i];
				(pq.second).second = (pp.second).second+dw[i];
				pq.first = pp.first+1;
				if (hyou[(pq.second).first][(pq.second).second] == n) {
					counter = pq.first;
					hantei = true;
					break;
				} else {
					if (hyou[(pq.second).first][(pq.second).second] == 0) {
						hyou[(pq.second).first][(pq.second).second] = -11;
					} else if (hyou[(pq.second).first][(pq.second).second] > 0) {
						hyou[(pq.second).first][(pq.second).second] = -hyou[(pq.second).first][(pq.second).second];
					}
				}
				que.push(pq);
			}
		}
		if (hantei) {
			break;
		}
	}
	for (int i = 0; i < 1010; i++) {
		for (int j = 0; j < 1010; j++) {
			if (hyou[i][j] == -11) {
				hyou[i][j] = 0;
			} else if (hyou[i][j] > -10 && hyou[i][j] < 0) {
				hyou[i][j] = -hyou[i][j];
			}
		}
	}
	return counter;
}

int main() {
	int h, w, n;
	cin >> h >> w >> n;
	char c;
	int sh, sw;
	int data[9][2];
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> c;
			if (c == '.') {
				hyou[i][j] = 0;
			} else if (c == 'S') {
				hyou[i][j] = 0;
				sh = i;
				sw = j;
			} else if (c == 'X') {
				hyou[i][j] = -10;
			} else {
				int d = c - '0';
				hyou[i][j] = d;
				data[d-1][0] = i;
				data[d-1][1] = j;
			}
		}
	}
	int counter = 0;
	for (int i = 0; i < n; i++) {
		counter += search(sh, sw, i+1);
		sh = data[i][0];
		sw = data[i][1];
	}
	cout << counter << endl;
	return 0;
}