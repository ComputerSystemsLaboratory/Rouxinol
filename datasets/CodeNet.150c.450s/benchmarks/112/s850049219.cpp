#include <iostream>
#include <deque>

using namespace std;

int main() {

	int n, m;
	char a, b;
	deque<char> s, x, y;

	while(cin >>n) {
		if(!n) {
			break;
		}
		for(int i=0; i<n; i++) {
			cin >> a >> b;
			x.push_back(a);
			y.push_back(b);
		}
		cin >> m;
		for(int i=0; i<m; i++) {
			cin >> a;
			s.push_back(a);
		}
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				if(s[i]==x[j]) {
					s[i]=y[j];
					break;
				}
			}
			cout << s[i];
		}
		cout << endl;
		x.clear();
		y.clear();
		s.clear();
	}

	return 0;

}