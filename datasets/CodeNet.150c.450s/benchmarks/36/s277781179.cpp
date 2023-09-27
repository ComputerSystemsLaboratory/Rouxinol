#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;
int f(int);

int main(){

	int x, d;
	long int sum;

	while(cin >> d){
		sum = 0;

		for(int i=1 ; i*d<600 ; i++){
		sum += f(600 - i*d) * d;
		}

		cout << sum << endl;
	}

	return 0;
}

int f(int x){
	return x*x;
}