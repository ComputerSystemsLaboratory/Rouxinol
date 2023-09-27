#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main() {
	int e;
	while(cin >> e, e) {
		int res = e;
		for(int z=0; z*z*z<=e; z++) {
			int ze = e - z*z*z;
			int y = floor(sqrt(ze));
			ze -= y*y;
			res = min(res, z+y+ze);
		}

		cout << res << endl;
	}
	return 0;
}