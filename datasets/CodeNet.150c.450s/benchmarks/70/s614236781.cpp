#include <stdio.h>

int main(void){
	int a,b;
	int day[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

	while(scanf("%d %d",&a,&b),a){
		int youbi=0; // 0ismokuyou
		for(int i=1;i<a;i++) youbi=(youbi+day[i])%7;
		youbi=(youbi+b-1)%7;
		switch (youbi) {
			case 0:
				printf("Thursday\n");
				break;
			case 1:
				printf("Friday\n");
				break;
			case 2:
				printf("Saturday\n");
				break;
			case 3:
				printf("Sunday\n");
				break;
			case 4:
				printf("Monday\n");
				break;
			case 5:
				printf("Tuesday\n");
				break;
			case 6:
				printf("Wednesday\n");
				break;
		}
	}
	return 0;
}