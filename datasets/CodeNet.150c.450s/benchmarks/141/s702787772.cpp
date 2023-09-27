#include <iostream>
#include <cmath>
#include <cstdlib>

class Point2d {
private:
	double x, y;
public:
	void set(double x, double y) { this->x = x; this->y = y; }
	double X() { return this->x; }
	double Y() { return this->y; }
	Point2d operator+(Point2d &p) {
		Point2d result;
		result.set(this->x + p.X(), this->y + p.Y());
		return result;
	}
	Point2d operator-(Point2d &p) {
		Point2d result;
		result.set(this->x - p.X(), this->y - p.Y());
		return result;
	}
	Point2d operator*(double a) {
		Point2d result;
		result.set(this->x * a, this->y * a);
		return result;
	}
	/* ¼ü p1p2 Æüª q1q2 ªðíÁÄ¢êÎ true ðÔ· */
	static bool interectLine(Point2d &p1, Point2d &p2, Point2d &q1, Point2d &q2) {
		Point2d p = p2 - p1, pq1 = q1 - p1, pq2 = q2 - p1;
		double tmp1, tmp2, t1z;
		tmp1 = p.X() * pq1.Y() - p.Y() * pq1.X();	/* p Æ pq1 ÌOÏÌz¬ª */
		tmp2 = p.X() * pq2.Y() - p.Y() * pq2.X();	/* p Æ pq2 ÌOÏÌz¬ª */
		t1z = tmp1 * tmp2;	/* OÏÌü«ªá¦Î¼ü p1p2 Æüª q1q2 ÍðíÁÄ¢é */
		return t1z <= 0.;
	}
	/* üª p1p2 Æüª q1q2 ªðíÁÄêÎ true ðÔ· */
	static bool interect(Point2d &p1, Point2d &p2, Point2d &q1, Point2d &q2) {
		return interectLine(p1, p2, q1, q2) && interectLine(q1, q2, p1, p2);
	}
	/* _ p ª¼ü q1q2 ãÉ êÎ true ðÔ· */
	static bool pointInLine(Point2d &p, Point2d &q1, Point2d &q2) {
		Point2d l1 = q1 - p, l2 = q2 - p;
		double crossZ = l1.X() * l2.Y() - l1.Y() * l2.X();
		return crossZ == 0.;
	}
};

int main() {
	using namespace std;
	double x[3], y[3], xp, yp, xq, yq;
	Point2d ptR[3], ptP, ptQ;
	int count;

	while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp) {
		for (int i = 0; i < 3; ++i) {
			ptR[i].set(x[i], y[i]);
		}
		ptP.set(xp, yp);
		xq = x[0];
		for (int i = 1; i < 3; ++i) {
			if (x[i] > xq) { xq = x[i]; }
		}
		xq += (double)(rand() % 100 + 10) * 0.1;
		for (;;) {
			yq = yp + (double)((rand() % 100) - 50) * 0.1;
			ptQ.set(xq, yq);

			bool flag = false;
			for (int i = 0; i < 3; ++i) {
				if (Point2d::pointInLine(ptR[i], ptP, ptQ)) { flag = true; }
			}
			if (!flag) { break; }
		}

		count = 0;
		for (int i = 0; i < 3; ++i) {
			if (Point2d::interect(ptP, ptQ, ptR[i], ptR[(i + 1) % 3])) {
				++count;
			}
		}
		cout << (((count & 1) != 0) ? "YES" : "NO") << endl;
	}
	return 0;
}