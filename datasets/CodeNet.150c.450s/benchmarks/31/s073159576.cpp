
#include <iostream>

using namespace std;
#define NUMBER 200000

int main(){

	int ary[NUMBER];
	int min_register[NUMBER];

	/*
	for(int i = 0; i < NUMBER; i++){
		ary[i] = -1;
		min_register[i] = -1;
	}
	*/

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> ary[i];
	}
	int min = ary[0];
	min_register[0] = min;
	for(int i = 1; i < n; i++){
		if(min > ary[i]){
			min = ary[i];
		}
		min_register[i] = min;
	}

	int max = -1000000001;
	for(int i = n-1; i > 0; i--){
		max = (max > ary[i] - min_register[i-1])? max:ary[i] - min_register[i-1];
	}
	cout << max << endl;
}