#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>

using namespace std;


int main(){
	int a[5];

	for(int i=0 ; i<5 ; i++){
		cin >> a[i];
	} 

	for(int i=0 ; i<5 ; i++){
		for(int j=i; j<5 ; j++){
			if(a[i] < a[j] ){
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0 ; i<4 ; i++){
		cout << a[i] << ' ';
	}
	cout << a[4] << endl;
	return 0;
}