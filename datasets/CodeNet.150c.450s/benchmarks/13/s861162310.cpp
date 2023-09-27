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
	string s;
	string p;
	getline(cin, s);
	getline(cin, p);
	string x(s);
	string ring = s + x;

	rep(i, 0, ring.length() - p.length()) {
		int judge = 0;
		rep(j, 0, p.length()) {
			if (p[j] == ring[i + j]) judge++;
		}
		if (judge == p.length()) {
			cout << "Yes" << endl;
			return 0;
		}
	}
		cout << "No" << endl;
		return 0;
	
}