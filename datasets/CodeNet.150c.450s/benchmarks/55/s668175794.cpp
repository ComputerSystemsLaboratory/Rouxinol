#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char ch;
	while(1) {
		scanf("%c", &ch);
		if(ch == '0'){
			//cout << endl;
			break;
		}
		int sum = ch - '0';
		while(1){
			scanf("%c", &ch);
			if(ch == '\n') break;
			sum += int(ch) - '0';
		}
		cout << sum <<endl;
	}
	return 0;
}