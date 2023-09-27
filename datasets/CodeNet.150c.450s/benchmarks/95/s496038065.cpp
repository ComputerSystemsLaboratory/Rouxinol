#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	bool l, r;//true : up ,false : down
	int n;
	vector<int>ll;
	while (cin >> n){
		if (n == 0)break;
		int sum = 0;
		l = false;
		r = false;
		string s;
		for (int i = 0; i < n; i++) {
			const bool bol = l;
			cin >> s;
			if (s == "lu")l = true;
			else if (s == "ld")l = false;
			else if (s == "ru")r = true;
			else if (s == "rd")r = false;
			i++;
			if (i >= n)goto Goto;
			cin >> s;
			if (s == "lu")l = true;
			else if (s == "ld")l = false;
			else if (s == "ru")r = true;
			else if (s == "rd")r = false;
			if (bol != l&&bol != r)sum++;
		}
	Goto:
		ll.push_back(sum);
	}
	for (int i : ll) {
		cout << i << endl;
	}
	char c;
	cin >> c;
	return 0;
}