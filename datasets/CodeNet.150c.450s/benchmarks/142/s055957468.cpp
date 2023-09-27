#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cstring>
#include <queue>
#include <assert.h>
#include <cmath>
#include <deque>
#include <set>
#include <unordered_map>
#include <complex>
#include <fstream>
#include <map>
#include <numeric>
#include <functional>
using namespace std;
using ll = long long;
using ld = long double;
const int mxn = 2e5+10;
int a[mxn];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k; cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>a[i];

	for(int i=k+1; i<=n; i++) {
		if(a[i]>a[i-k]) cout << "Yes\n";
		else cout <<"No\n";
	}

	return 0;
}