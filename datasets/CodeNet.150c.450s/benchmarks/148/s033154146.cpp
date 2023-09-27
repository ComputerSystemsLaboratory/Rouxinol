#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n; cin >> n;
  	vector<string> s(n);
  	map<string,int> m;
  	for (string &i : s) {
      	cin >> i; m[i]++;
    }
  	cout << "AC x " << m["AC"] << endl;
  	cout << "WA x " << m["WA"] << endl;
  	cout << "TLE x " << m["TLE"] << endl;
 	cout << "RE x " << m["RE"] << endl;
    return 0;
}
