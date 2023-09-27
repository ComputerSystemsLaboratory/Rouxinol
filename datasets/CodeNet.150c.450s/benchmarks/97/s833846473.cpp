//?¢??????????????????????????????£??????????????¨?????°???????????°?°????
#include<iostream>
using namespace std;

int N;
int n[200], d[200];

class Pos {
public:
	int x, y;
	bool known;
	Pos() {known = false;}
	Pos(int x, int y) {
		this->x = x;
		this->y = y;
		known = true;
	}
	Pos operator+(const Pos &r) {
		return Pos(x + r.x, y + r.y);
	}
}pos[200];

int main() {
	int i, j;
	while (cin >> N) {
		if (!N) {
			break;
		}
		for (i = 0; i < N-1; i++) {
			cin >> n[i] >> d[i];
		}
		pos[0] = Pos(0, 0);
		
		int dy[4] = {0, 1, 0, -1};
		int dx[4] = {-1, 0, 1, 0};
		for (i = 0; i < N-1; i++) {
			for (j = 0; j < N-1; j++) {
				if (!pos[j+1].known && pos[n[j]].known) {
					pos[j+1] = pos[n[j]] + Pos(dx[d[j]], dy[d[j]]);
					//cout << j+1 << " " << pos[j+1].x << " " << pos[j+1].y << endl;
				}
			}
		}
		
		int INF = 50000;
		int xmin = INF, xmax = -INF, ymin = INF, ymax = -INF;
		for (i = 0; i < N; i++) {
			xmin = min(xmin, pos[i].x);
			xmax = max(xmax, pos[i].x);
			ymin = min(ymin, pos[i].y);
			ymax = max(ymax, pos[i].y);
			pos[i].known = false;
		}
		cout << (xmax - xmin + 1) << " " << (ymax - ymin +1) << endl;
	}
	return 0;
}