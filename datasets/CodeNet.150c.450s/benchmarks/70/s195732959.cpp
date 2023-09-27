#include <stdio.h>

int main(){
	char *day[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int i,date[2],month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	while(1){
		scanf("%d %d",&date[0],&date[1]);
		if(!date[0]) break;
		for(i = 0;i < date[0] - 1;i++) date[1] += month[i];
		printf("%s\n",day[(date[1] + 2) % 7]);
	}
}