// 2016-11-25
#include <iostream>
#include <string>

char c[10][5] = {
	{' ', ' ', ' ', ' ', ' '},
	{'.', ',', '!', '?', ' '},
	{'a', 'b', 'c', ' ', ' '},
	{'d', 'e', 'f', ' ', ' '},
	{'g', 'h', 'i', ' ', ' '},
	{'j', 'k', 'l', ' ', ' '},
	{'m', 'n', 'o', ' ', ' '},
	{'p', 'q', 'r', 's', ' '},
	{'t', 'u', 'v', ' ', ' '},
	{'w', 'x', 'y', 'z', ' '},
};
int l[10] = {0, 5, 3, 3, 3, 3, 3, 4, 3, 4};

int main() {
	int n;
	std::string s;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> s;
		int m = s.length();
		int x = 0;
		int y = 0;
		for (int j = 0; j < m; j++) {
			int a = int(s[j] - '0');
			if (a == 0) {
				if (x != 0) {
					std::cout << c[x][y];
					x = 0;
				}
			} else {
				if (a == x) {
					y = (y + 1) % l[x];
				} else {
					x = a;
					y = 0;
				}
			}
		}
		std::cout << std::endl;
	}
	return 0;
}