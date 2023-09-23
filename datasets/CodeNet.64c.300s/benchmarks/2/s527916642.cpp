#include <iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;

int main() {
	int a, b, c;
	char grade;
	while (true) {

		cin >> a >> b >>c;


		if (a == -1 && b == -1 && c == -1) {
			break;
		}


		if (a + b < 30 || a==-1 || b==-1) {
			grade = 'F';
		}
		else if (a + b >= 30 && 50 > a + b) {
			grade = (c>=50)? 'C' : 'D';

		}
		else if (a + b >= 50 && 65 > a + b) {
			grade = 'C';
		}

		else if (a + b >= 60 && 80>a + b) {
			grade = 'B';
		}

		else if (a + b >= 80) {
			grade = 'A';
		}

		cout << grade << endl;
		
	}



	return 0;
}


