#include<iostream>
using namespace std;

class dice {
private:
	int n[7];

public:
	dice(int, int, int, int, int, int);
	int getcur() { return n[1]; }
	int getnum(int i) { return n[i]; }
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
	case'C':
		n[2] = copy.n[3];
		n[3] = copy.n[5];
		n[5] = copy.n[4];
		n[4] = copy.n[2];
		break;
	}
}

int main() {
	int n[7];
	for (int i = 1; i <= 6; i++) {
		cin >> n[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		dice a(n[1], n[2], n[3], n[4], n[5], n[6]);
		//dice copy = a;
		int x, y;
		cin >> x >> y;
		
		if(x == n[1]){}
		else if (x == n[2]) a.rotate('N');
		else if (x == n[3]) a.rotate('W');
		else if (x == n[4]) a.rotate('E');
		else if (x == n[5]) a.rotate('S');
		else if (x == n[6]) {
			a.rotate('N');
			a.rotate('N');
		}

		/*switch (x) {
		case n[1]:
			break;
		case n[2]:
			a.rotate('N');
			break;
		case n[3]:
			a.rotate('W');
			break;
		case n[4]:
			a.rotate('E');
			break;
		case n[5]:
			a.rotate('S');
			break;
		case n[6]:
			a.rotate('N');
			a.rotate('N');
			break;
		}
		*/
		while (a.getnum(2) != y) {
			a.rotate('C');
		}

		cout << a.getnum(3) << endl;
	}
	return 0;
}