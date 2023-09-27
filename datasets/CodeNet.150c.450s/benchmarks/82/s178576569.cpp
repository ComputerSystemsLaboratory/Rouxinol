#include <iostream>
using namespace std;

void rotate(int*, int, int, int, int);

class Dice {
	public:
	int face[6];
	Dice (int* f) {
		for (int i=0; i<6; i++) face[i] = f[i];
	}
	void roll_x(bool d) {
		if (d) rotate(0, 4, 5, 1);
		else rotate(1, 5, 4, 0);
	}
	void roll_y(bool d) {
		if (d) rotate(0, 2, 5, 3);
		else rotate(3, 5, 2, 0);
	}
	void roll_z(bool d) {
		if (d) rotate(1, 3, 4, 2);
		else rotate(2, 4, 3, 1);
	}
	void rotate(int a, int b, int c, int d) {
	  int t;
	  t = face[d];
	  face[d] = face[c];
	  face[c] = face[b];
	  face[b] = face[a];
	  face[a] = t;
	}
	void print() {
		cout << face[0] << endl;
	}
};

int getRight(Dice d, int u, int f) {
	for (int i=0; i<6; i++) {
		for (int j=0; j<4; j++) {
			if (d.face[0]==u && d.face[1]==f) return d.face[2];
			d.roll_z(true);
		}
		if (i%2==0) d.roll_x(true);
		else d.roll_y(true);
	}
	return -1;
}

int main()
{
	int f[6];
	for (int i=0; i<6; i++) cin >> f[i];
	Dice d(f);
	int n;
	cin >> n;
	for (int k=0; k<n; k++) {
		int uf, ff;
		cin >> uf >> ff;
		cout << getRight(d, uf, ff) << endl;
	}
	return 0;
}

