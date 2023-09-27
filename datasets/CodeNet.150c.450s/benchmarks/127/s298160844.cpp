#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		set<string> train;
		for (int i = 1; i < s.size(); i++) {
			string front, end;
			front = s.substr(0, i);
			end = s.substr(i, s.size()-i);

			train.insert(front + end);
			train.insert(end + front);

			reverse(front.begin(), front.end());
			train.insert(front + end);
			train.insert(end + front);

			reverse(end.begin(), end.end());
			train.insert(front + end);
			train.insert(end + front);

			reverse(front.begin(), front.end());
			train.insert(front + end);
			train.insert(end + front);
		}
		cout << train.size() << endl;
	}
	return 0;
}