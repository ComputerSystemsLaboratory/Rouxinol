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
	rep(i,1,10010) {
			int x;
			cin >> x;
			if (x == 0) return 0;

			cout << "Case " << i << ": " << x << endl;
	}
}