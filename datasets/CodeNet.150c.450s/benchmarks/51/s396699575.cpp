#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int list[30] = {},black[30],cnt = 0,data,num,i;
	for(i = 0;i < 28;i++){
		scanf("%d",&data);
		data = data - 1;
		list[data] = 1;
	}
	for(i = 0;i < 30;i++){
		if(list[i] == 0){
			black[cnt] = i + 1;
			cnt++;
		}
	}
	for(i = 0;i < (cnt - 1);i++){
		if(black[i] > black[(i + 1)]){
			num = black[i],black[i] = black[(i + 1)],black[(i + 1)] = num;
		}
	}
	for(i = 0;i < cnt;i++){
		printf("%d\n",black[i]);
	}
}