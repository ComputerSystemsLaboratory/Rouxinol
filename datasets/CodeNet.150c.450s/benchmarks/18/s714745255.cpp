#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	double r=0.05;
	int y = 100000;
	cin >> n;

	for(int i=0;i<n;i++){
		y = ( 1 + r ) * y;
		if(y%1000 != 0){
			y = y - y%1000;
			y = y + 1000;
		}
	}
	cout << y << endl;

}