#include<iostream>
using namespace std;

struct Pos {
	double x, y;
}a, b, c, d;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++ ) {
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
		Pos e;
		e.x = b.x - a.x;
		e.y = b.y - a.y;
		Pos f;
		f.x = d.x - c.x;
		f.y = d.y - c.y;
		
		double men = e.x * f.y - e.y * f.x;
		double eps = 1e-12;
		if(-eps <= men && men <= eps)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}