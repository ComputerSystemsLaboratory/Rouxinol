#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {
	int x, y, s;
	while(cin >> x >> y >> s, x||y||s) {
		int res = 0;
		for(int a=1; a<s; a++) {
			for(int b=1; b<s; b++) {
				if(a*(100+x)/100 + b*(100+x)/100 == s) {
					res = max(res, a*(100+y)/100+b*(100+y)/100);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}