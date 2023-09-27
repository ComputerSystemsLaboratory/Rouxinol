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
	int n,m[100],i=0;
	while (cin >> n){
		if (n == 0){
			cout << m[i-1] << endl;
			i--;
		}
		else{
			m[i] = n;
			i++;
		}
	}
	return 0;
}