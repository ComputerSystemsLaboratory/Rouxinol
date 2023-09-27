#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	
		int t[31] = { 0 };
		int n;
		for (int i = 0; i < 28; i++){
			cin >> n;
			t[n] =  1 ;
		}
		
		for (int i = 1; i<31; i++){
			if  ( t[i] == 0 ){
				cout << i << endl;
			}
		}
	}