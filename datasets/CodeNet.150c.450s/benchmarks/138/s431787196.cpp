#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int gcd(int a, int b) {
	if(a>b)swap(a,b);
	int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

int main(void){
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	
	return 0;
}