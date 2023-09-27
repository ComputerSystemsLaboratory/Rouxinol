#include <iostream>
using namespace std;
#define cpy(a,b) tront[a-1] = temp[b-1]

class dice {
public:
	int tront[6];
	dice() {
		for (int i = 0; i < 6; i++) {
			cin >> tront[i];
		}
	}

	void rotation(char c) {
		int temp[6], i;
		for (i = 0; i < 6; i++)
			temp[i] = tront[i];
		switch (c) {
		case 'E':
			cpy(1, 4);
			cpy(4, 6);
			cpy(6, 3);
			cpy(3, 1);
			break;
		case 'N':
			cpy(5, 1);
			cpy(1, 2);
			cpy(2, 6);
			cpy(6, 5);
			break;
		case 'S':
			cpy(2, 1);
			cpy(1, 5);
			cpy(5, 6);
			cpy(6, 2);
			break;
		case 'W':
			cpy(1, 3);
			cpy(3, 6);
			cpy(6, 4);
			cpy(4, 1);
			break;
		}
	}

	void print(int x) {
		cout << tront[x-1] << endl;
	}
};

int main() {
	dice d;
	int i, j, q, a, b, m, n;
	int ans[7][7] = {0};
	ans[5][4]=1;ans[4][2]=1;ans[2][3]=1;ans[3][5]=1;
	ans[1][4]=2;ans[4][6]=2;ans[6][3]=2;ans[3][1]=2;
	ans[1][2]=3;ans[2][6]=3;ans[6][5]=3;ans[5][1]=3;
	ans[1][5]=4;ans[5][6]=4;ans[6][2]=4;ans[2][1]=4;
	ans[1][3]=5;ans[3][6]=5;ans[6][4]=5;ans[4][1]=5;
	ans[3][2]=6;ans[2][4]=6;ans[4][5]=6;ans[5][3]=6;
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> a >> b;
		for (j = 0; j < 6; j++) {
			if (a == d.tront[j])
				m = j+1;
			if (b == d.tront[j])
				n = j+1;
		}
		d.print(ans[m][n]);
	}	
	return 0;
}