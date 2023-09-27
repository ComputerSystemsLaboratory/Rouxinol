#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <string>

#define TABLE_SIZE 16777216
#define ORDER_LENGTH 7
#define STR_LENGTH 13

using namespace std;

int translateChar(char ch){
	int ret;
	switch(ch){
	case 'A':
		ret = 1;
		break;
	case 'C':
		ret = 2;
		break;
	case 'G':
		ret = 3;
		break;
	case 'T':
		ret = 4;
		break;
	}
	return ret;
}

int calc(int num){
	if(num == 0){
		return 1;
	}else{
		return 4*calc(num-1);
	}
}

int translateStr(char buf[]){
	int sum = 0;
	for(int i = 0; buf[i] != '\0'; i++){
		sum += translateChar(buf[i])*calc(i);
	}
	return sum - 1;
}

int main(){

	queue<string> Messages;
	int n;
	scanf("%d",&n);
	char order[ORDER_LENGTH],str[STR_LENGTH];

	char* check_table = (char*)malloc(TABLE_SIZE);

	for(int i = 0; i < n; i++){
		scanf("%s %s",order,str);
		if(strcmp(order,"insert") == 0){
			check_table[translateStr(str)] = 'Y';
		}else{
			if(check_table[translateStr(str)] == 'Y'){
				Messages.push("yes");
			}else{
				Messages.push("no");
			}
		}
	}

	while(!Messages.empty()){
			cout << Messages.front() << endl;
			Messages.pop();
	}

	free(check_table);

}