#include <iostream>
#include <queue>
#include <string>
using namespace std;
priority_queue <int> s;
int main() {
	string a;
	while (1) {
		cin >> a;
		if (a=="end") break;
		else if (a=="insert") {
			int x;
			cin >> x;
			s.push(x);
		} else {
			cout << s.top() << endl;
			s.pop();
		}
	}
	return 0;
}
