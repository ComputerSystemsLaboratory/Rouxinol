#include <stdio.h>

int main(void){
	int month, day;
	int dday[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
	int answer;
	while(1){
		scanf("%d %d", &month, &day);
		if(month == 0) break;

		answer = (dday[month -1] + day-1) % 7;
		switch(answer){
		case 0:
			puts("Thursday");
			break;
		case 1:
			puts("Friday");
			break;
		case 2:
			puts("Saturday");
			break;
		case 3:
			puts("Sunday");
			break;
		case 4:
			puts("Monday");
			break;
		case 5:
			puts("Tuesday");
			break;
		case 6:
			puts("Wednesday");
		}
	}	
	return 0;
}