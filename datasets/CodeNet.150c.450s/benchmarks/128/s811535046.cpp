#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;


int main(){
	char mozi[20];
	int last;
	scanf("%s",mozi);

	for(int i=0;mozi[i] != '\0';i++){
		last = i;
	}

	for(int i=last;0 <= i;i--){
		printf("%c",mozi[i]);
	}

	printf("\n");

	return 0;
}