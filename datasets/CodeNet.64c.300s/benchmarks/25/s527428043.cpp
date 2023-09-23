#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
using namespace std;

#define INF (1 << 20)
#define EPS (1e-10)
#define EQ(a,b) (fabs((a)-(b)) < EPS)

int main(){
	int a[4], b[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int match = 0;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (a[i] == b[j]) ++match;
			}
		}
		int hit = 0;
		for (int i = 0; i < 4; ++i) {
			if (a[i] == b[i]) ++hit;
		}
		cout << hit << ' ' << match - hit << endl;
	}
	return 0;
}