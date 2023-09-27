#include <bits/stdc++.h>
using namespace std;

#define len(s) int(s.size())
#define res(x) cout<<((x) ? "Yes" : "No")
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define st first
#define nd second

typedef long long int ll;
typedef long double ld;

int main() {
	
	int n;
	cin >> n;
	
	map<string, int> m;
	string s;
	while(n--) {
		cin >> s;
		++m[s];
	}
	
	cout << "AC x " << m["AC"] << endl;
	cout << "WA x " << m["WA"] << endl;
	cout << "TLE x " << m["TLE"] << endl;
	cout << "RE x " << m["RE"] << endl;
	
	return 0;
}
