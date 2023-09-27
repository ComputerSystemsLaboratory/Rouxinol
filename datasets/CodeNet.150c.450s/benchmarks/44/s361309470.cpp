#include<iostream>
using namespace std;
int a[100], b[100], hit, blow;
int main() {
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		hit = 0; blow = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (i == j && a[i] == b[j]) { hit++; }
				if (i != j && a[i] == b[j]) { blow++; }
			}
		}
		cout << hit << ' ' << blow << endl;
	}
}