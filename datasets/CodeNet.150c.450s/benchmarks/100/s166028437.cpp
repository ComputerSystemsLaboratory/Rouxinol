#include<iostream>
using namespace std;

int main(){

	int n;
	long long x;
	
	cin >> n;
	
	x = 1;
	for(int i=1; i<=n; i++){
		x *= i;
	}

	cout << x << endl;

	return 0;
}