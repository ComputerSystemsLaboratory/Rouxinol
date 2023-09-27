#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;

int tax(int a, int x) {
	return a + (a * x / 100);
}

int main() {
	int x, y, s;
	cin >> x >> y >> s;
	while (x || y || s) {
		int p = 0;
		loop(a, 1, s) {
			int b = (s - tax(a, x)) * 100 / (100 + x) - 1;
			if (b < 0) break;
			while (tax(a, x) + tax(b, x) <= s) b++;
			b--;
			if (tax(a, x) + tax(b, x) != s) continue;
			if (p < tax(a, y) + tax(b, y)) {
				p = tax(a, y) + tax(b, y);
			}
		}
		cout << p << endl;
		cin >> x >> y >> s;
	}
}