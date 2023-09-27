#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int S;
	cin >> S;
	int h, m, s;
	h = S / 3600;
	m = (S % 3600) / 60;
	s = S % 60;
	cout << h << ":" << m << ":" << s << "\n";

	return 0;
}
