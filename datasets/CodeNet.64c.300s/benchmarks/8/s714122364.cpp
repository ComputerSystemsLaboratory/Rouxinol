#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int main() {
	int n;
	cin >> n;
	rep(i,1,n+1) 	{
		int x = i;
		if (i % 3 == 0) cout << " " << i;
		else {
			while (x > 0) {
				if (x % 10 == 3) {
					cout << " " << i;
					break;
				}
				x = x / 10;
			}
		}
	}
	Lb;
}