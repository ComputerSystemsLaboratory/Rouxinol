#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int d, x, y, Y[600];
	int i, sum = 0;

	

	for(i = 0;i < 600;i++){
		Y[i] = 0;
	}
	while(cin >> d){
		for(i = 1;d*i < 600;i++){
			x = d * i;
			y = x * x;
			Y[i] = y * d;
		}
		
		for(i = 1;i < 600;i++){
			sum += Y[i];
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}