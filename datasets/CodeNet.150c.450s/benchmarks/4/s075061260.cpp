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
	int m, f, r;
	while (true) {
		cin >> m >> f >> r;
		if (m == -1 And f == -1 And r == -1) break;
		if (m == -1 Or f == -1) cout << "F" << endl;
		else if (m + f >= 80)cout << "A" << endl;
		else if (m + f >= 65)cout << "B" << endl;
		else if (m + f >= 50)cout << "C" << endl;
		else if (m + f >= 30 And r < 50)cout << "D" << endl;
		else if (r >= 50)cout << "C" << endl;
		else cout << "F" << endl;
	}
}