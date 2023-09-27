#include<iostream>
#include<cstdio>
using namespace std;

int train[10];

int main(void){
	int input;
	int index = 0;
	while(cin >> input){
		if(input != 0){
			train[index] = input;
			index++;
		}
		else if(input == 0){
			index--;
			printf("%d\n",train[index]);
			train[index] = 0;
		}
	}
	return 0;
}