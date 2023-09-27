#include <stdio.h>

int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int mon,day;
	int ans;
	scanf("%d %d",&mon,&day);
	while(mon != 0 || day != 0){
		ans = 0;
		for(int i = 0; i < mon - 1; i++){
			ans += month[i];
		}
		ans += day;
		ans = ans % 7;
		if(ans == 1){
			printf("Thursday\n");
		}
		if(ans == 2){
			printf("Friday\n");
		}
		if(ans == 3){
			printf("Saturday\n");
		}
		if(ans == 4){
			printf("Sunday\n");
		}
		if(ans == 5){
			printf("Monday\n");
		}
		if(ans == 6){
			printf("Tuesday\n");
		}
		if(ans == 0){
			printf("Wednesday\n");
		}
		scanf("%d %d",&mon,&day);

	}
	return 0;
}