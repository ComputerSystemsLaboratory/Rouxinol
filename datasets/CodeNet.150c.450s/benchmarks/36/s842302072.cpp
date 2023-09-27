//
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int fun(int x){
	return x*x;
}


int main(){
	int d;
	while(cin >> d){
		int n = 600/d;
		int sum = 0;
		for(int i=0; i<n; i++){
			sum += fun(d*i)*d;
		}
		cout << sum << endl;
	}
	return 0;
}