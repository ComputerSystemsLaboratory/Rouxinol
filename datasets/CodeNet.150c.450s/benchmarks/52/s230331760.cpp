#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a;
	vector<int> s;
	while (cin >> a) {
		if (a != 0) {
			s.push_back(a);
		}
		else if (a == 0) {
			cout << s[s.size() - 1] << endl;
			s.pop_back();
		}
	}
	return 0;
}