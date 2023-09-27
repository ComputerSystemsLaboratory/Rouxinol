#include <iostream>
#include <vector>
using namespace std;
#define rep2(x,from,to) for(int x=(from); x<(to); (x)++)
#define rep(x,to) rep2(x,0,to)
vector<int> s, t;
int main() {
	int n, q;
	cin >> n;
	rep(i,n) {
		int a;
		cin >> a;
		s.push_back(a);
	}
	cin >> q;
	rep(i,q) {
		int b;
		cin >> b;
		t.push_back(b);
	}
	int cnt = 0;
	rep(i,q) {
		rep(j,n) {
			if(t[i] == s[j]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}