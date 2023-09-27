#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <functional>

using namespace std;

string reverse(string a) {
	string b = "";
	for (int i = a.size()-1; i >= 0; i--) {
		b += a[i];
	}
	return b;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		priority_queue< string, vector<string>, greater<string> >pq;
		for (int i = 1; i < a.size(); i++) {
			string b = a.substr(0, i);
			string c = a.substr(i);
			pq.push(b+c);
			pq.push(reverse(b)+c);
			pq.push(b+reverse(c));
			pq.push(reverse(b)+reverse(c));
			pq.push(c+b);
			pq.push(reverse(c)+b);
			pq.push(c+reverse(b));
			pq.push(reverse(c)+reverse(b));
		}
		int counter = 0;
		while (!pq.empty()) {
			counter++;
			string k = pq.top();
			pq.pop();
			while (!pq.empty()) {
				if (k == pq.top()) {
					pq.pop();
				} else {
					break;
				}
			}
		}
		cout << counter << endl;
	}
	return 0;
}