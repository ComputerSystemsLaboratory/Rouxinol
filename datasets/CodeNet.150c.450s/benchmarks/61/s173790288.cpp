#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

#include <queue>
using namespace std;
int main() {
	int n,a,b,c,x;
	
	while (1) {
		queue <int>s ;
		cin >> n;
		int a;
		if (n == 0)break;
		cin >> a >> b >> c >> x;
		int y;
		for (int i = 1; i <= n; i++) {
			cin >> y;
			s.push(y);
		}
		int ans = 0;
		if (x == s.front()) {
			ans++;
			s.pop();
		}
		for (int i = 1; i <= 10001; i++) {
		//	cout << x <<" "<<s.front() << endl;/////
			if (s.empty() == 1) { 
				cout << i-1;
			break;
			}
			if (i == 10001) {
				break;
			}
			if ((a * x + b) % c == s.front()) {
				ans++;
				s.pop();
			}
			
			x = (a * x + b) % c;
		}
		if (s.empty() == 0) cout << -1;		
		cout << endl;

	}


}
