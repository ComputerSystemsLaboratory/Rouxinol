#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define rep(i,a,n) for(int (i)=a;(i)<(int)(n);(i)++)
#define rrep(i,a,n) for(int (i)=(n)-1;(i)>=a;(i)--)
#define all(x) (x).begin(),(x).end()

typedef long long ll;

int main() {
	while (true) {
		int a,b;
		char c;

		cin >> a >> c >> b;

		if (c == '?') {
				return 0;
		}

		if (c == '+') {
				cout << a + b << endl;
		} else if (c == '-') {
				cout << a - b << endl;
		} else if (c == '*') {
				cout << a * b << endl;
		} else {
				cout << a / b << endl;
		}	
	}
}