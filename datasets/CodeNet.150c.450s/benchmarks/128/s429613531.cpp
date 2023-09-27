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
	string str,reverse;
	cin >> str;

	for (int i = str.length()-1; i >-1; i--){
		reverse += str[i];
	}
	cout << reverse << endl;


	return 0;
}