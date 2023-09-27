#include <stdio.h>
#include <iostream>
using namespace std;

int calcSumOfNumbers(const char x[]);

int main(void)
{	
	while (1) {
		char x[1000] = "\0";
		cin >> x;
		
		if (x[0] == '0') break;
		
		cout << calcSumOfNumbers(x) << endl;
	}
	
	return 0;
}

int calcSumOfNumbers(const char x[])
{
	int sum = 0;
	for (int i = 0; x[i] != '\0'; i++) {
		sum += x[i] - '0';
	}
	
	return sum;
}