#include <iostream>
#include <stdio.h>

class Pos {
public:
	const static int ABOVE = 1;
	const static int BELOW = 0;
	float x, y;
	int getWhichSide(Pos a, Pos b) {
		if (a.x == b.x) {
			return (x > a.x) ? ABOVE : BELOW;
		}
		float slope = (a.y - b.y) / (a.x - b.x);
		float bias =  b.y - slope * b.x;
		return (y > slope * x + bias) ? ABOVE : BELOW;
	}
};

int main () {
	Pos t1, t2, t3, p;
	while (~scanf("%f %f %f %f %f %f %f %f", &t1.x, &t1.y, &t2.x, &t2.y, &t3.x, &t3.y, &p.x, &p.y)) {
		if (
			p.getWhichSide(t1, t2) == t3.getWhichSide(t1, t2)
			&& p.getWhichSide(t2, t3) == t1.getWhichSide(t2, t3)
			&& p.getWhichSide(t1, t3) == t2.getWhichSide(t1, t3)
		) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

	return 0;
}
