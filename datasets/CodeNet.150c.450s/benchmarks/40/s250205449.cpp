#include<iostream>
using namespace std;

class dice {
private:
	int n[7];

public:
	dice(int, int, int, int, int, int);
	int getcur() { return n[1]; }
	void rotate(char);
};

dice::dice(int n1, int n2, int n3, int n4, int n5, int n6) {
	n[1] = n1;
	n[2] = n2;
	n[3] = n3;
	n[4] = n4;
	n[5] = n5;
	n[6] = n6;
}

void dice::rotate(char op) {
	dice copy(n[1], n[2], n[3], n[4], n[5], n[6]);
	switch (op) {
	case'W':
		n[1] = copy.n[3];
		n[3] = copy.n[6];
		n[6] = copy.n[4];
		n[4] = copy.n[1];
		break;
	case'E':
		n[1] = copy.n[4];
		n[3] = copy.n[1];
		n[6] = copy.n[3];
		n[4] = copy.n[6];
		break;
	case'S':
		n[1] = copy.n[5];
		n[2] = copy.n[1];
		n[6] = copy.n[2];
		n[5] = copy.n[6];
		break;
	case'N':
		n[1] = copy.n[2];
		n[2] = copy.n[6];
		n[6] = copy.n[5];
		n[5] = copy.n[1];
		break;
	}

}

int main() {
	int n[7];
	for (int i = 1; i <= 6; i++) {
		cin >> n[i];
	}
	dice a(n[1], n[2], n[3], n[4], n[5], n[6]);

	char op;
	while (cin >> op) {
		a.rotate(op);
		//cerr << a.getcur() << endl;
	}
	cout << a.getcur() << endl;
	return 0;
}