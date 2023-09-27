#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	while(cin >> a >> b) {
		if(a || b) cout << to_string(a + b).size() << endl;
	}
}