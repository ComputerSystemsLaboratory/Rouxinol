#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>


#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int n = 0;
	int input = 0;
	long int sum = 0; 
	int max = -1000001; 
	int min = 1000001;

	CI n;

	for (int i = 0; i < n; ++i) {
		CI input;
		sum += input;
		if (input > max)max = input;
		if (input < min)min = input;
	}

	CO min << " " << max << " " << sum E
}