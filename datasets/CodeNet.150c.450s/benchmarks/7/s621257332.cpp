#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int h[10] = {0};
	for_(i,0,10) cin >> h[i];
	sort(h, h + 10, greater< int >());
	for_(i,0,3) cout << h[i] << endl;
}