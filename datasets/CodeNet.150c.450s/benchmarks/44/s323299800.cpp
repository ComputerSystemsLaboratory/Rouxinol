#include<vector>
#include<iostream>
using namespace std;
int main() {
	int code[4], line, hit, bro;
	while (cin>>code[0]) {
		hit = 0;
		bro = 0;
		for (int i = 1; i < 4; ++i) {
			cin >> code[i];
		}
		for (int i = 0; i < 4; ++i) {
			cin >> line;
			if (code[i] == line) {
				++hit;
			}
			else {
				for (int i2 = 0; i2 < 4; ++i2) {
					if (code[i2] == line) {
						++bro;
					}
				}
			}
		}
		cout << hit << " " << bro << endl;
	}
	return 0;
}