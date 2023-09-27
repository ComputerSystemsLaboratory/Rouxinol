#include<stdio.h>

int main(void){
	char mark,tkt;
	int i, x, y, s, t[52];
	for(i = 0;i < 52;i++){
			t[i] = 0;
	}
	//0~12=S 13~25=H 26~38=C 39~51=D
	scanf("%d",&x);
	for(i = 0;i < x+1;i++){
		scanf("%c %d%c",&mark,&s,&tkt);
		switch (mark){
		case('S'):
			t[s-1] = 1;
			break;
		case('H'):
			t[s + 12] = 1;
			break;
		case('C'):
			t[s + 25] = 1;
			break;
		case('D'):
			t[s + 38] = 1;
			break;
		}
	}
		for(i = 0;i < 52;i++){
			if(t[i] == 0){
				y = i / 13;
				if(y == 0){
					printf("S %d\n",i % 13 + 1);
				}if(y == 1){
					printf("H %d\n",i % 13 + 1);
				}if(y == 2){
					printf("C %d\n",i % 13 + 1);
				}if(y == 3){
					printf("D %d\n",i % 13 + 1);
				}
			}
		}
	
	return 0;
}