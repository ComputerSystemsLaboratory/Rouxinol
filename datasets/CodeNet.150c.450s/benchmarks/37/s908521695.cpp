#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include<string>
#include <algorithm>
#include <functional>
#include <cmath>
using namespace std;
typedef vector <int> ivector;


int main(){
	double a, b, c, d, e, f;
	while (scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF)
	{


		double x = (c*e - b*f) / (a*e - b*d);
		double y = (c*d - a*f) / (b*d - a*e);
		if (x == 0)x = 0;
		if (y == 0)y = 0;
		printf("%.3f %.3f\n", x, y);
	}


	return 0;
}