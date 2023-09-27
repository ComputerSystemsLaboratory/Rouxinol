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
	string str; cin >> str;
	int q; cin >> q;
	string meirei, x;
	int a, b;
	rep(i, 0, q) {
		cin >> meirei;
		cin >> a >> b;
		if (meirei == "replace") {
			cin >> x;
			rep(j, 0, x.length()) {
				str[a + j] = x[j];
			}
		}
		else if (meirei == "reverse") {
			rep(j, 0, (b - a + 1) / 2) {
				char temp;
				temp = str[a + j];
				str[a + j] = str[b - j];
				str[b - j] = temp;
			}
		}
		else {
			rep(j, 0, (b - a + 1)) {
				cout << str[a + j];
			}
			cout << endl;
		}
	}
}