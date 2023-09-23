#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){

	long int a, b;
	long int f;
	long int G, L, temp;

	while(cin >> a){
		cin >> b;
		f = a * b;
		if(a < b){
			temp = a;
			a = b;
			b = temp;
		}
		while(1){
			temp = a % b;
			if(temp==0) break;
			a = b;
			b = temp;
		}
		G = b;
		L = f/G;

		cout << G << ' ' << L << endl;
	}
	return 0;
}