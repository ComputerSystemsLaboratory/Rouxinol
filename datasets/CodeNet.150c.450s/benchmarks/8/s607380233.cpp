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
	int n; cin >> n;
	int Poftaro=0, Pofhanako=0;
	rep(i, 0, n) {
		string taro, hanako;
		cin >> taro >> hanako;
		if (taro > hanako) Poftaro += 3;
		else if (taro == hanako) {
			Poftaro++;
			Pofhanako++;
		}
		else Pofhanako += 3;
	}
	cout << Poftaro << " " << Pofhanako << endl;
}