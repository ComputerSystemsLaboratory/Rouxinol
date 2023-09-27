#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

struct Point {
	int x, y;
	Point(int x_, int y_) : x(x_), y(y_) {}
};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
	int N;
	while(cin >> N) {
		if (N == 0) { break; }
		int n, d;	
		vector<Point> rects;
		rects.push_back(Point(0, 0));		
		rep(nth, N-1) {	
			cin >> n >> d;
			Point p = rects[n];	
			Point rect = Point(p.x+dx[d], p.y+dy[d]);
			rects.push_back(rect);
		}

		int min_x=0, max_x=0, min_y=0, max_y=0;
		rep(i, N) {
			Point p = rects[i];
			min_x = min(min_x, p.x);	
			max_x = max(max_x, p.x);	
			min_y = min(min_y, p.y);	
			max_y = max(max_y, p.y);	
		}

		cout << abs(min_x) + max_x + 1 << " ";
		cout << abs(min_y) + max_y + 1 << endl;
	}
	return 0;
}