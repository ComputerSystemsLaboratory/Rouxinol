#include <stdio.h>
int ctoi(char c){
	switch(c){
		case '0':{return 0;}
		case '1':{return 1;}
		case '2':{return 2;}
		case '3':{return 3;}
		case '4':{return 4;}
		case '5':{return 5;}
		case '6':{return 6;}
		case '7':{return 7;}
		case '8':{return 8;}
		case '9':{return 9;}
		default:{return -1;}
	}
}
int main(){
	int sum;
	char c;
	while(1){
		sum = 0;
		c = getchar();
		if(c=='0')break;
		else ungetc(c,stdin);
		while(1){
			c = getchar();
			if(c == '\n')break;
			sum += ctoi(c);
		}
		printf("%d\n",sum);
	}
}