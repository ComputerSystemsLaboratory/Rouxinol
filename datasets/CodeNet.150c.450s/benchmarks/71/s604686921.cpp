#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include<iomanip>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;


int main()
{
	int n, counter = 0;
	while (scanf("%d", &n) != -1){
		counter = 0;
		for (int a = 0; a < 10; a++){
			for (int b = 0; b < 10; b++){
				for (int c = 0; c < 10; c++){
					for (int d = 0; d < 10; d++){
						if (a + b + c + d == n) counter++;
					}
				}
			}
		}
		cout << counter<<endl;
	}
	return 0;
}