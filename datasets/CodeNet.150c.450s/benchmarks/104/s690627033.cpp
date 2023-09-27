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

	int w, m[40], n, a, b, c;

	cin >> w;
	for (int i = 1; i <= w; i++)
	{
		m[i - 1] = i;
	}
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%d,%d", &a, &b);
		c = m[a - 1];
		m[a - 1] = m[b - 1];
		m[b - 1] = c;
	}

	for (int i = 0; i < w; i++)
	{
		cout << m[i] << endl;
	}
	return 0;
}