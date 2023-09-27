#include<bits/stdc++.h>
#define dump(a) cout << #a << "=" << a << endl
using namespace std;


struct Point {
	int w;
	int h;
	int taikaku;

	bool operator<( const Point &right ) const {
		if (taikaku == right.taikaku) {
			return h < right.h;
		}
		else {
			return taikaku < right.taikaku;
		}
	}
};

vector<Point> points;

int main() {
	int H,W;

	for(int y = 0; y < 150; y++) {
		for(int x = 0; x < 150; x++) {
			int xx = x+1;
			int yy = y+1;
			//dump(xx);
			//dump(yy);
			if (xx > yy) {
				Point p;
				p.w = xx;
				p.h = yy;
				p.taikaku = xx*xx + yy*yy;
				points.push_back(p);
			}
		}
	}
	//dump(points.size());

	sort(points.begin(), points.end());
	/*
	for(int i = 0; i < points.size(); i++) {
		cout << points[i].taikaku << " ";
	}
	cout << endl;
	*/

	while(cin >> H >> W) {
		if (H == 0 && W == 0) { break; }
		Point ans_p;
		int taikaku = H*H+W*W;
		//dump(points.size());

		for(int i = 0; i < points.size(); i++)
		{
			//cout << points[i].h << " " << points[i].w << endl;
			if (points[i].w == W && points[i].h == H) {
				ans_p = points[i+1];
				break;
			}
		}
		cout << ans_p.h << " " << ans_p.w << endl;
	}

	return EXIT_SUCCESS;
}