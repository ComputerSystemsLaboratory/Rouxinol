#include <stdio.h>

int main(void)
{
	int day[13][32];
	int i, j;
	int n = 4;
	int month;
	int da;
	
	for (i = 1; i <= 12; i++){
		 if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			for (j = 1; j <= 31; j++){
				day[i][j] = n;
				n++;
				if (n == 8){
					n = 1;
				}
			}
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11){
			for (j = 1; j <= 30; j++){
				day[i][j] = n;
				n++;
				if (n == 8){
					n = 1;
				}
			}
		}
		else if (i == 2){
			for (j = 1; j <= 29; j++){
				day[i][j] = n;
				n++;
				if (n == 8){
					n = 1;
				}
			}
		}
	}
	
	while (1){
		
		scanf("%d %d", &month, &da);
		if (month == 0){
			return (0);
		}
		
		//printf("%d\n", day[month][da]);
		
		switch (day[month][da]){
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
			
			case 7:
			printf("Sunday\n");
			break;
		}
	}
}