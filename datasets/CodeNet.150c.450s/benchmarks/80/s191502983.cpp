#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int test1 = 0,test2 = 0,data,i;
	for(i = 0;i < 4;i++){
		scanf("%d",&data);
		test1 += data;
	}
	for(i = 0;i < 4;i++){
		scanf("%d",&data);
		test2 += data;
	}
	if(test1 >= test2){
		printf("%d\n",test1);
	}
	else{
		printf("%d\n",test2);
	}
}