#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n,a,flag;
	stack<int> b,c;
	cin >> n;
	for (int i = 0; i < n; i++){
		while (b.size()) b.pop();
		while (c.size()) c.pop();
		flag = 0;
		b.push(0);
		c.push(-1);
		for (int j = 0; j < 10; j++) {
			cin >> a;
			if (b.top() > c.top()){
				if (c.top() > a) flag = 1;
				else if (b.top() > a) c.push(a);
				else b.push(a);
			}
			else {
				if (b.top() > a) flag = 1;
				else if (c.top() > a) b.push(a);
				else c.push(a);
			}
		}
		if (flag) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}