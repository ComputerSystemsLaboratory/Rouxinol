#include<iostream>
#include<string>

using namespace std;

int main() {
	string str_a, str_b;
	int a, b;
	while (getline(cin, str_a)) {
		getline(cin, str_b);
		int hit = 0, blow = 0;
		for (int i = 0; i < str_a.length(); i++) {
			if ('1' <= str_a[i] && str_a[i] <= '9') {
				a = str_a.find(str_a[i]);
				b = str_b.find(str_a[i]);
				if (a != -1 && b != -1) {
					if (a == b) {
						hit += 1;
					}
					else {
						blow += 1;
					}
				}
			}
		}
		cout << hit << " " << blow << endl;

	}
	return 0;
}
