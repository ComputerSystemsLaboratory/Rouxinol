#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
#include <queue>

using namespace std;

char translate(int ch, int succeed_num){
	switch(ch){
	case 1:
		switch(succeed_num%5){
		case 1:return '.';
		case 2:return ',';
		case 3:return '!';
		case 4:return '?';
		case 0:return ' ';
		}
		break;
	case 2:
		switch(succeed_num%3){
		case 1:return 'a';
		case 2:return 'b';
		case 0:return 'c';
		}
		break;
	case 3:
		switch(succeed_num%3){
		case 1:return 'd';
		case 2:return 'e';
		case 0:return 'f';
		}
		break;
	case 4:
		switch(succeed_num%3){
		case 1:return 'g';
		case 2:return 'h';
		case 0:return 'i';
		}
		break;
	case 5:
		switch(succeed_num%3){
		case 1:return 'j';
		case 2:return 'k';
		case 0:return 'l';
		}
		break;
	case 6:
		switch(succeed_num%3){
		case 1:return 'm';
		case 2:return 'n';
		case 0:return 'o';
		}
		break;
	case 7:
		switch(succeed_num%4){
		case 1:return 'p';
		case 2:return 'q';
		case 3:return 'r';
		case 0:return 's';
		}
		break;
	case 8:
		switch(succeed_num%3){
		case 1:return 't';
		case 2:return 'u';
		case 0:return 'v';
		}
		break;
	case 9:
		switch(succeed_num%4){
		case 1:return 'w';
		case 2:return 'x';
		case 3:return 'y';
		case 0:return 'z';
		}
		break;
	}
	return '\0';	//must not reach here
}

int main(){

	int n,index,pre,count;
	char buf[1025],result[100];

	scanf("%d",&n);

	for(int loop = 0; loop < n; loop++){
		scanf("%s",buf);
		index = 0;
		pre = -1;
		count = 0;

		for(int k = 0; buf[k] != '\0'; k++){
			if(buf[k] >= '1' && buf[k] <= '9'){ //1???9?????´???
				count++;
				if(pre == -1){
					pre = buf[k] - '0';
				}
				//???????????¨????¬????'\0'??§???????¢?????????????????????????????????°????????????????????????????????§???????????????
			}else{ //buf[k] == '0' ?¢?????????????
				if(pre == -1){
					//Do nothing
				}else{
					result[index++] = translate(pre,count);
					result[index] = '\0';
					pre = -1;	//???????????????????????§???????????????
				}
				count = 0;
			}
		}
		printf("%s\n",result);
	}
    return 0;
}