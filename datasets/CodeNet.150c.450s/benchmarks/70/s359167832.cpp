#include<iostream>

const char* ans[7] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday"
};

int main(){

	int month, date;

	while (std::cin >> month >> date, month || date){
		int day = 2;

		for (int i = 1; i < month; i++){
			int numdate = 31;
			if (i == 4 || i == 6 || i == 9 || i == 11)numdate = 30;
			else if (i == 2)numdate = 29;

			day = (day + numdate) % 7;
		}

		day = (day + date) % 7;

		std::cout << ans[day] << std::endl;
	}
	return 0;
}