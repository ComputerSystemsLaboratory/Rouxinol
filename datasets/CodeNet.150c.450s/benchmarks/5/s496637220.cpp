#include <cstdio>
#include <iostream>
#include <sstream>
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

const int INF = 1e9;

int main() {
	int n;
	cin >> n;
	int a[n];
	rep(i,0,n) cin >> a[i];
	reverse(a, a + n);

	rep(i,0,n) {
		if (i>0) cout << " ";
		cout << a[i];
	}
	cout << endl;
}