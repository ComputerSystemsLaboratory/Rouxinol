#include<stdio.h>

int main(void){
	int first, second, add;
	char seiseki;
	while(1){
		scanf("%d %d %d",&first,&second,&add);
		if(first == -1){
			if(second == -1){
				if(add == -1){
					break;
				}
			}
		}
		if(first + second >= 80){
			seiseki = 'A';
		}else if(first + second >= 65){
			seiseki = 'B';
		}else if(first + second >= 50){
			seiseki = 'C';
		}else if(first + second >= 30){
			if(add >= 50){
				seiseki = 'C';
			}else{
				seiseki = 'D';
			}
		}else{
			seiseki = 'F';
		}
		if(first == -1){
			seiseki = 'F';
		}else if(second == -1){
			seiseki = 'F';
		}
		printf("%c\n",seiseki);
	}
	return 0;
}