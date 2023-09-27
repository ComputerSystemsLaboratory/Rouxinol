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
	string str;
	while (true) {
		getline(cin, str);
		int sum = 0;
		if (str == "0")break;
		rep(i, 0, str.length()) {
			sum +=str[i]-'0';
		}
		cout << sum << endl;
	}
}