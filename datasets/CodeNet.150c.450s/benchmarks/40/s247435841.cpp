#include <iostream>
#include <string.h>
using namespace std;
#define cpy(a,b) tront[a-1] = temp[b-1]

class dice {
public:
	dice() {
		for (int i = 0; i < 6; i++)
			cin >> tront[i];
	}
	void rotation(char c) {
		int temp[6], i, j;
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
private:
	int tront[6];
};

int main() {
	dice d;
	char str[101];
	int slen, i, j;
	cin >> str;
	slen = strlen(str);
	for (i = 0; i < slen; i++)
		d.rotation(str[i]);
	d.print(1);
	return 0;
}