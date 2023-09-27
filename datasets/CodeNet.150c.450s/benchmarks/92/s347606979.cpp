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
	int a,b;
	while (scanf("%d %d",&a,&b) != -1){
		int c = a + b;
		int count = 0;
		while (c > 0){
			c /= 10;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}