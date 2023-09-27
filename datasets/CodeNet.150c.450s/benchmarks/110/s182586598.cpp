#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
class road {
public:
	char thatlevel;
	char information;
	int time;
	road() :thatlevel('0'), information('X') {

	}
};
int main() {
	int H, W, N;
	queue<pair<short, short> > date;
	cin >> H >> W >> N;
	vector<vector<road> > map(W + 2, vector<road>(H + 2));
	for (int y = 1; y <= H; ++y) {
		for (int x = 1; x <= W; ++x) {
			cin >> map[x][y].information;
			if (map[x][y].information == 'S') {
				date.push(pair<short, short>(x, y));
				map[x][y].time = 0;
			}
		}
	}
	int answer = -1;
	short x, y;
	pair<short, short> dummy;
	char nlevel = '1';
	char movex[]{ 0,1,0,-1 }, movey[]{ 1,0,-1,0 };
	road *floor;
	while (answer < 0) {
		dummy = date.front();
		date.pop();
		x = dummy.first;
		y = dummy.second;
		for (int i = 0; i < 4; ++i) {
			floor = &map[x + movex[i]][y + movey[i]];
			if (floor->information == 'X')continue;
			if (floor->thatlevel < nlevel) {
				floor->thatlevel = nlevel;
				floor->time = map[x][y].time + 1;
				if (nlevel==floor->information) {
					++nlevel;
					floor->information = '.';
					if (nlevel == N + 1 + '0') {
						answer = floor->time;
					}
					queue<pair<short, short> > empty;
					swap(date, empty);
					date.push(pair<short, short>(x + movex[i], y + movey[i]));
					break;
				}
				date.push(pair<short, short>(x + movex[i], y + movey[i]));
			}
		}
	}
	cout << answer << endl;
	return 0;
}