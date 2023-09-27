#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

#define p2(x) (x)*(x)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i = 0; i < n; i++)
#define ALL(x) x.begin(),x.end()
#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;

int gcd(int a, int b) {
	if (a < b)
		swap (a, b);
	if (a % b == 0)
		return b;
	return gcd (b, a % b);
}

int main(){
	ios::sync_with_stdio(0);
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}