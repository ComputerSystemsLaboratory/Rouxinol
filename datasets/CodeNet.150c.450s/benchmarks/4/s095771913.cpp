# include <iostream>

int main() {
	int m, f, r;

	char grade;
	while (true) {
		std::cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
			break;
		if (m == -1 || f == -1) {
			grade = 'F';
		}
		else {
			if (m + f >= 80)
				grade = 'A';
			else if (m + f >= 65)
				grade = 'B';
			else if (m + f >= 50)
				grade = 'C';
			else if (m + f >= 30) {
				grade = 'D';
				if (r >= 50)
					grade = 'C';
			}
			else
				grade = 'F';
		}
		std::cout << grade << std::endl;
	}
	return 0;
}