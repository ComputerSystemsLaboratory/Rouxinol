#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n, t = 0, h = 0; cin >> n;
	rep(i, n) {
		string s, w; cin >> s >> w;
		if (s > w)t += 3;
		else if (s < w)h += 3;
		else t++, h++;
	}
	cout << t << ' ' << h << endl;
}