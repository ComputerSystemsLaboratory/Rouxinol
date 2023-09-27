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
	getline(cin, str);
	rep(i, 0, str.length()) {
		if (islower(str[i])) str[i]=toupper(str[i]);
		else str[i]=tolower(str[i]);

	}
	cout << str << endl;
}