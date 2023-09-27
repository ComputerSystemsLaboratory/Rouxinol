#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <vector>
#include <functional>
#include <map>
using namespace std;

int n;
int list[4][3][10];
int main(){

	cin >> n;

	for (int i = 0; i < n; ++i){
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		
		list[b - 1][f - 1][r - 1] += v;
	}

	for (int b = 0; b < 4; ++b){
		for (int f = 0; f < 3; ++f){
			for (int r = 0; r < 10; ++r){

				cout << " " << list[b][f][r];
			}
			cout << endl;
		}
		if (b != 3)
			cout << "####################" << endl;
	}

	return 0;
}