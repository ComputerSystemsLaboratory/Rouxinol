#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){
	int mon = 100000;
	int r = 5;
	int n;
	cin >> n;

	for (int i=0 ; i< n ; i++){
		mon += mon * r / 100;
		if((mon-1)/1000 == mon/1000){
			mon = mon/1000;
			mon++;
			mon = mon * 1000;
		}
	}

	cout << mon << endl;
	return 0;
}