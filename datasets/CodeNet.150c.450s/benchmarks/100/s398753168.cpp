#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

unsigned long long fact(unsigned long long i){
	if(i==0){
		return 1;
	}else{
		return i*fact(i-1);
	}
}

int main(){
	unsigned long long i;
	
	cin >> i;
	cout << fact(i) << endl;

	return 0;
}