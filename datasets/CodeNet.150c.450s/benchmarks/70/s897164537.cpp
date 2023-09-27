#include <cstdio>
#include <string>

int main(int argc, char *argv[]) {
	const int start_day = 3;
	const int days[12] = {
		31, 29, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};
	const std::string week[] = {
		"Monday", "Tuesday", "Wednesday", "Thursday",
		"Friday", "Saturday", "Sunday"
	};
	
	while (true) {
		int month, day, sum = start_day;
		fscanf(stdin, "%d %d", &month, &day);
		if (month == 0) {
			break;
		}
		sum += day-1;
		for (int i = 0; i < month-1; i++) {
			sum += days[i];
		}
		printf("%s\n", week[sum%7].c_str());
		
	}
	return 0;
}