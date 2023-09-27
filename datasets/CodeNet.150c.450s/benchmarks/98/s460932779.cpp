#include <iostream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <climits>
using namespace std;

void solve(vector<int> a, vector<int> b)
{
	int difference = 0;
	for(unsigned i=0; i<a.size(); ++i)
		difference += a[i];
	for(unsigned i=0; i<b.size(); ++i)
		difference -= b[i];
	if(difference % 2 != 0){
		cout << -1 << endl;
		return;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(unsigned i=0; i<a.size(); ++i){
		if(find(b.begin(), b.end(), a[i]-difference/2) != b.end()){
			cout << a[i] << ' ' << (a[i]-difference/2) << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	for(;;){
		int n, m;
		cin >> n >> m;
		if(n == 0 && m == 0)
			break;

		vector<int> a(n);
		vector<int> b(m);
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=0; i<m; ++i)
			cin >> b[i];

		solve(a, b);
	}
}