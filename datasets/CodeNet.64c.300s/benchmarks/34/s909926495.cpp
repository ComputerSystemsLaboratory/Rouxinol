
#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

void printNumArray(int *numArray,int N){
	cout << numArray[0];
	for(int i = 1; i < N; i++){
		cout << " " <<numArray[i];
	}
	cout<< endl;
}


int main()
{
	int n;
	cin >> n;
	int *numArray = new int[n+1];
	for(int i = 0; i < n; i++){
		cin>>numArray[i];
	}
	for(int i = 0; i < n; i++){
		int j = i - 1;
		int key = numArray[i];
		while( j >= 0 && numArray[j] > key){
			numArray[j + 1] = numArray[j];
			j--;
		}
		numArray[j+1] = key;
		printNumArray(numArray,n);
	}
	
	return 0;
}


