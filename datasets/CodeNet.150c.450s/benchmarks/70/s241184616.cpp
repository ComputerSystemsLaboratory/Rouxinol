#include <stdio.h>

int main(){
	int m,d;
	int i;
	
	int Days;
	
	
	while(1){
		Days = 0;
		scanf("%d %d",&m,&d);
		if(m == 0&&d == 0)break;
		for(i = 1,Days += d;i < m;i++){
			if(i == 2){
				Days += 29;
			}else if(i == 4||i == 6||i == 9||i == 11){
				Days += 30;
			}else{
				Days += 31;
			}
		}
		
		switch(Days%7){
			case 0:printf("Wednesday\n");
					break;
			case 1:printf("Thursday\n");
					break;
			case 2:printf("Friday\n");
					break;
			case 3:printf("Saturday\n");
					break;
			case 4:printf("Sunday\n");
					break;
			case 5:printf("Monday\n");
					break;
			case 6:printf("Tuesday\n");
					break;
		}
	}
	return 0;
}