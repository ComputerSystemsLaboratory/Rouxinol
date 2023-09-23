#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int a[4], b[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int H = 0, B = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				if (a[i] == b[j])B++;
			if (a[i] == b[i]) {
				B--; H++;
			}
		}
		cout << H << " " << B << endl;
	}

	return 0;
}