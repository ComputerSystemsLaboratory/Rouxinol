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



int main(){
	double d;
	int S;
	while (cin >> d){
		S = 0;
		for (int i = 1; d*i < 600; i++){
			S = S + (d*i*d*i)*d;
		}
		cout << S << endl;

	}
	return 0;
}