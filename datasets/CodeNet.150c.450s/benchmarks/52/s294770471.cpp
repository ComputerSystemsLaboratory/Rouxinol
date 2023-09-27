#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int>S; int a; vector<int>t;
int main() {
	cin >> a;
	S.push(a);
	while (cin >> a) {
		if (a == 0) {
			t.push_back(S.top());
			S.pop();
		}
		else {
			S.push(a);
		}
	}
	for (int i = 0; i < t.size(); i++) {
		cout << t[i] << endl;
	}
}