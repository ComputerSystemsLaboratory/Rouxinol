#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 1000000

int main() {

	for (int e; cin >> e&&e;) {
		int m = INF;
		int max_z = pow(e, 1. / 3)+1;
		for (int z = max_z; z >= 0; z--) {
			if (z*z*z > e)continue;
			//cout << "z " << z;
			int tmp = e;
			tmp -= z*z*z;
			int y = pow(tmp, 1. / 2);
			//cout << " y " << y;
			tmp -= y*y;
			int x = tmp;
			//cout << " x " << x;
			m = min(m, x + y + z);
			//cout << " m " << x + y + z;
			//cout << endl;
		}
		cout << m << endl;
	}
	return 0;
}