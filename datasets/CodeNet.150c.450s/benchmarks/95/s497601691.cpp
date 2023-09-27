#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (void)
{
	while (1) {
		int n; cin >> n;
		vector<string> step;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			string str;
			cin >> str;
			step.push_back(str);
		}
		bool up = false;
		bool down = false;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (step[i] == "ru" || step[i] == "lu") {
				// 片足がdownしてない，かつupしている状態
				if (!down && up) {
					count++;
					up = false;
				}
				// どっちもdown
				else if (!down && !up) {
					up = true;
				}
				else if (down) {
					down = false;
				}
			}
			if (step[i] == "rd" || step[i] == "ld") {
				// 片足がupしてない，かつdownしている状態
				if (down && !up) {
					count++;
					down = false;
				}
				// どっちもup
				else if (!down && !up) {
					down = true;
				}
				else if (up) {
					up = false;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}

