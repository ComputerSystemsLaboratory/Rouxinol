#include<iostream>
#include<cstdio>
using namespace std;

class Point {
public:
	int x;
	int y;
	Point() {
		x = 0;
		y = 0;
	}
};

class Robot {
public:
	int x;
	int y;
	int h;
	Robot(int N, Point* r) {
		x = 10;
		y = 10;
		h = 0;
		for (int i = 0; i < N; i++) {
			if (x == r[i].x&&y == r[i].y)h++;
		}
	}
	void e() { x++; }
	void n() { y++; }
	void w() { x--; }
	void s() { y--; }
};


int main() {
	int N;
	while (cin >> N&&N) {
		Point ruby[20];
		for (int i = 0; i < N; i++) cin >> ruby[i].x >> ruby[i].y;
		int M;
		cin >> M;
		Robot robot(N, ruby);
		for (int i = 0; i < M; i++) {
			char o;
			int t;
			cin >> o >> t;
			switch (o) {
			case 'N':
				for (int j = 0; j < t; j++) {
					robot.n();
					for (int k = 0; k < N; k++)if (robot.x == ruby[k].x&&robot.y == ruby[k].y) {
						robot.h++; ruby[k].x = -1; ruby[k].y = -1;
					}
				}
				break;
			case 'S':
				for (int j = 0; j < t; j++) {
					robot.s();
					for (int k = 0; k < N; k++)if (robot.x == ruby[k].x&&robot.y == ruby[k].y) {
						robot.h++; ruby[k].x = -1; ruby[k].y = -1;
					}
				}
				break;
			case 'E':
				for (int j = 0; j < t; j++) {
					robot.e();
					for (int k = 0; k < N; k++)if (robot.x == ruby[k].x&&robot.y == ruby[k].y) {
						robot.h++; ruby[k].x = -1; ruby[k].y = -1;
					}
				}
				break;
			case 'W':
				for (int j = 0; j < t; j++) {
					robot.w();
					for (int k = 0; k < N; k++)if (robot.x == ruby[k].x&&robot.y == ruby[k].y) {
						robot.h++; ruby[k].x = -1; ruby[k].y = -1;
					}
				}
				break;
			default:break;
			}
		//	cout << robot.h << endl;
		}
		if (robot.h == N)puts("Yes");
		else puts("No");


	}
	return 0;
}