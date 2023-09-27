#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>


#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

void call(int n) {
	int i = 1;
	int x = i;

	while (1) {
		if (x % 3 == 0) {
			CO " " << i;
		}
		else {
			if (x % 10 == 3) {
				CO " " << i;
			}
			else {
				while (1) {
					x /= 10;
					if (x % 10 == 3) {
						CO " " << i;
						break;
					}
					if (x == 0)break;
				}
			}
		}
		++i;
		x = i;
		if (i > n)break;
	}
	
}

int main(void) {
	int n = 0;
	CI n;

	call(n);

	CO endl;
}