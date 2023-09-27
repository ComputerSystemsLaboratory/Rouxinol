#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int a = 0, b = 0, x;
	rep(i, 4) {
		cin >> x;
		a += x;
	}

	rep(i, 4) {
		cin >> x;
		b += x;
	}

	if(a >= b) cout << a << endl;
	else cout << b << endl;

	return 0;
}