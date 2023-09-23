
#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

int GCD(int x,int y){
	if( y == 0){
		return x;
	}
	return GCD(y, x % y);
}

bool isPrime(int N){
	if( N == 2 ) true;
	if( N % 2 == 0) false;
	for(int i = 2; i*i <= N; i++){
		if(GCD(N,i) != 1) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n ;
	int primeNumberCount = 0;
	for(int i = 0; i < n ; i++){
		int num;
		cin >> num;
		if( isPrime(num) == true) primeNumberCount++;
	}
	cout << primeNumberCount<<endl;
	return 0;
}



