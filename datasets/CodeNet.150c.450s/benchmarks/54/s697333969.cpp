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

int main(void) {
	string W; cin >> W;
	rep(i, 0, W.length()) W[i] = tolower(W[i]);
	string str;
	int sum = 0;
	while (true) {
		cin >> str;
		if (str == "END_OF_TEXT") break;
		rep(i, 0, str.length()) str[i] = tolower(str[i]);
		if (W == str)sum++;


	}
	cout << sum << endl;
}