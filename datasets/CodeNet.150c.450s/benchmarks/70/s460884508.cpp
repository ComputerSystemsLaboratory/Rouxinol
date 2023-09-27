#include<stdio.h>

int main(void){
	int m,d,now;
	char da[7][15]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	for(;;){
		now=0;
		scanf("%d %d",&m,&d);
		if(!m||!d)break;
		for(int i=1;i<m;i++){
			now+= i==2 ? 29 : (i<8 ? 30+i%2 : 31-i%2);
		}
		now+=d;
		printf("%s\n",&da[now%7]);
	}
	return 0;
}