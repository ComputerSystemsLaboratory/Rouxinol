#include <iostream>
#include <string>
#include <queue>
using namespace std;


queue<char> q;
int m, h;
string s;
char ch;



int main(){
	while (cin >> s && s != "-") {
		q = queue<char>();
		for (int i = 0; i < s.size(); i++) {
			q.push(s[i]);
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			while (h != 0) {
				ch = q.front(); q.pop();
				q.push(ch);
				h--;
			}
		}
		while (!q.empty()) {
			cout << q.front();
			q.pop();
		}
		cout << endl;
	}

	return 0;
}