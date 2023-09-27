#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#include<cctype>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

bool isprime(int x) {
	if (x == 2) return true;

	if (x < 2 Or x % 2 == 0) return false;

	int i = 3;
	while (i <= sqrt(x)) {
		if (x%i == 0) return false;
		i += 2;
	}
	return true;

}

int main(void) {
	int n; cin >> n;
	int x;
	int sum = 0;
	rep(i, 0, n) {
		cin >> x;
		if (isprime(x)) sum++;
	}
	cout << sum << endl;
}