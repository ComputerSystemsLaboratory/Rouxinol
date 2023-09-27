#include <iostream>
#include <stdio.h>

using namespace std;

static const int N = 100;

void output(int input[], int n){
	for(int i = 0; i < n; i++ ){
		if(i > 0) printf(" ");
		printf("%d",input[i]);
	}
	printf("\n");
}


int main(void){
	int n,input[N],selectNumber;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> input[i];

	}

	output(input,n);
	for(int i = 1; i < n; i++ ){
		selectNumber = input[i];
		int j = i - 1;
		while(j >= 0 && input[j] > selectNumber){
			input[j+1] = input[j];
			j--;
		}
		input[j+1] = selectNumber;
		output(input,n);
	}
	return 0;
}