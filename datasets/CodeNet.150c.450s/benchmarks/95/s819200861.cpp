#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main() {
	int n;
	while(cin >> n, n) {
		bool l=false, r=false;
		bool state = false;
		int cnt = 0;
		rep(i, n) {
			string in;
			cin >> in;
			if(in[0]=='l') {
				l = (in[1]=='u');
			} else {
				r = (in[1]=='u');
			}
			if(!state && l && r) {
				cnt++;
				state = true;
			} else if(state && !l && !r) {
				cnt++;
				state = false;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}