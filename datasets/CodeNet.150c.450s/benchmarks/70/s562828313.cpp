#include<iostream>
#include<string>

int days[13][32];

std::string whatday(int m, int d) {
	switch (days[m][d]) {
	case 0:
		return "Monday";
	case 1:
		return "Tuesday";
	case 2:
		return "Wednesday";
	case 3:
		return "Thursday";
	case 4:
		return "Friday";
	case 5:
		return "Saturday";
	case 6:
		return "Sunday";
	}
	return "";
}

int main() {
	int day = 3;
	for (int i = 1; i < 13; i++) {
		for (int j = 1; j < 32; j++) {
			days[i][j] = day;
			day = (day+1) % 7;
			if (i == 2 && j == 29) break;
			if (i == 4 && j == 30) break;
			if (i == 6 && j == 30) break;
			if (i == 9 && j == 30) break;
			if (i == 11 && j == 30) break;
		}
	}
	int m, d;
	while (std::cin >> m >> d) {
		if (m == 0) break;
		std::cout << whatday(m, d) << std::endl;
	}
	return 0;
}
