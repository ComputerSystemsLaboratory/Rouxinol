#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100];

void init(int n){
	for (int i = 0; i < n; ++i){
		a[i] = 0;
	}
}

int main(){
	int n;
	init(30);
	a[0] = 1;
	a[1] = 1;
	a[2] = 2; 
	for (int i = 3; i < 32; ++i){
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	while(cin >> n,n){
		cout << (a[n]/10+1)/365+1 << endl;
	}
	return 0;
}