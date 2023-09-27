#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<list>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

string a[7] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday"
};

int b[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };

int main() {
	for (int m, d; cin >> m >> d&&m;) {
		while (m)
			d += b[--m];
		cout << a[(d - 1 + 3) % 7] << endl;
	}
	return 0;
}