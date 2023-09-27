#include <stdio.h>
#include<math.h>
using namespace std;

int Zeller(int month,int day){
	int year = 2004;
	if(month == 1 || month==2){
		year--;
		month += 12;
	}
	return (year + year/4 - year/100 + year/400 + (13*month+8)/5 + day)%7;
}

int main(){

	int month,day;
	while(true){
		scanf("%d %d",&month,&day);
		if(month == 0)break;

		switch(Zeller(month,day)){
		case 0:
			printf("Sunday\n");
			break;
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		}

	}

    return 0;
}