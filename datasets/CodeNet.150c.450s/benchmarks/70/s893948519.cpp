#include <stdio.h>

int main(void)
{
	int MONTH[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	char DAYS[7][10] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
	
	int month, date, i;
	
	while(scanf("%d %d",&month, &date)){
		getchar();
		if(month == 0){
			break;
		}
		
		int total = 0;
		for(i = 1;i < month;i++){
			total += MONTH[i - 1];
		} 
		
		total += date -1 ;
		
		//printf("%d\n",total);
		printf("%s\n",DAYS[total % 7]);
	}
	
	return 0;
}