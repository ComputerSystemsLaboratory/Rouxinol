#include <iostream>
#include <map>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
map<char, char> c;

int main(){
	while(1){
		cin >> n;
		if(!n){
			break;
		}
		rep(i, n){
			char a, b;
			cin >> a >> b;
			c[a] = b;
		}
		int q;
		cin >> q;
		rep(i, q){
			char p;
			cin >> p;
			cout << (c[p] ? c[p] : p);
		}
		cout << endl;
		c.clear();
	}
	return 0;
}