#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	priority_queue< string, vector<string>, greater<string> >pq;
	vector<string> data;
	string a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		pq.push(a);
	}
	for (int i = 0; i < n; i++) {
		data.push_back(pq.top());
		pq.pop();
	}
	cin >> m;
	bool hantei = false;
	bool hantei2;
	for (int i = 0; i < m; i++) {
		cin >> a;
		hantei2 = true;
		for (int i = 0; i < n; i++) {
			if (data[i] == a) {
				hantei2 = false;
				break;
			} else if (data[i] > a) {
				break;
			}
		}
		if (hantei2) {
			cout << "Unknown "  << a << endl;
		} else {
			if (hantei) {
				cout << "Closed by " << a << endl; 
				hantei = false;
			} else {
				cout << "Opened by " << a << endl;
				hantei = true;
			}
		}
	}
	return 0;
}