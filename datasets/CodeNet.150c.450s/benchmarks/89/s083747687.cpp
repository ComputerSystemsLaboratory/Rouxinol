#include <iostream>
using namespace std;

bool table[1000100];

int main() {
	for(int i = 0; i < 1000100; i++)
		table[i] = true;
	table[0] = table[1] = false;
	for(int i = 2; i < 1000100; i++) {
		if(table[i]) {
			for(int j = 2; i * j < 1000100; j++) {
				table[i*j] = false;
			}
		}
	}
	int a, d, n;
	while(cin >> a >> d >> n, a || d || n) {
		int i = 0;
		int cnt = 0;
		while(1) {
			if(table[a + d * i]) {
				cnt++;
			}
			if(cnt == n) {
				cout << a + d * i << endl;
				break;
			}
			i++;
		}
	}
}