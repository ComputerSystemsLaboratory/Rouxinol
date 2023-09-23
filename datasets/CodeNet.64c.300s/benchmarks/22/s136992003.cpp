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
	int x,y,z,n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		if (x < y){
			a = y;
			y = x;
			x = a;
		}
		if (x < z){
			b = z;
			z = x;
			x = b;
		}
		if (z*z + y*y == x*x){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
	
	return 0;
}