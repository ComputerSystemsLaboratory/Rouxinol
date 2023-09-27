#include <iostream>

int mcxi2int(std::string s) {
	int ret = 0;
	int tmp = 1;
	for (int i = 0; i < s.size(); i++) {
		switch (s[i]) {
			default: {
				tmp = s[i] - '0';
				break;
			}
			case 'm': { ret += tmp * 1000, tmp = 1; break; }
			case 'c': { ret += tmp * 100, tmp = 1; break; }
			case 'x': { ret += tmp * 10, tmp = 1; break; }
			case 'i': { ret += tmp * 1, tmp = 1; break; }
		}
	}
	
	return ret;
}

std::string int2mcxi(int n) {
	char s[16];
	int count = 0;
	if (n / 1000 > 0) {
		if (n / 1000 != 1) {
			s[count++] = n / 1000 + '0';
		}
		s[count++] = 'm';
		n -= (n / 1000) * 1000;
	}
	if (n / 100 > 0) {
		if (n / 100 != 1) {
			s[count++] = n / 100 + '0';
		}
		s[count++] = 'c';
		n -= (n / 100) * 100;
	}
	if (n / 10 > 0) {
		if (n / 10 != 1) {
			s[count++] = n / 10 + '0';
		}
		s[count++] = 'x';
		n -= (n / 10) * 10;
	}
	if (n > 0) {
		if (n != 1) {
			s[count++] = n + '0';
		}
		s[count++] = 'i';
	}
	s[count] = '\0';
	
	return s;
}

int main() {
	int n;
	std::cin >> n;

	while (n--) {
		std::string inputs[2];
		std::cin >> inputs[0] >> inputs[1];
		int sum = mcxi2int(inputs[0]) + mcxi2int(inputs[1]);
		std::cout << int2mcxi(sum) << std::endl;
	}
	
	return 0;
}