#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include<algorithm>
#include<cctype>

using namespace std;
const int M = 100000;
const double pi = 3.141592653589;

int sum(int n, int array[]) {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += array[i];
	}
	return sum;
}

int main(){
	char ch;
	while (1) {
		scanf("%c",&ch);
		if (islower(ch)) ch = toupper(ch);
		else if(toupper(ch)) ch = tolower(ch);
		cout << ch;
		if (ch == '\n') break;
	}
	
	return 0;
}