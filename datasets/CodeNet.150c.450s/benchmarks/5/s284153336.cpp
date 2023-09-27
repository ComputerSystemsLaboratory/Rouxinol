#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, 0, n) {
		cin >> a.at(i);
	}
	rep(i, 0, n-1) {
		cout << a.at(n - i - 1)<<" ";
	}
	cout << a.at(0) << endl;
	return 0;
}