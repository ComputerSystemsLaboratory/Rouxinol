#include <iostream>
#include <set>
#include <stack>
using namespace std;

int main () {
	set<int> A;
	stack<int> B;
	int n, q, m, a, s;
	cin >> n;
	cin >> a;
	A.insert(a);
	set<int>::iterator itA;
	for (int i = 1; i < n; i++) {
		cin >> a;
		s = A.size();
		itA = A.begin();
		for (int j = 0; j < s; j++) {
			B.push(a + *itA);
			itA++;
		}
		s = B.size();
		for (int j = 0; j < s; j++) {
			A.insert(B.top());
			B.pop();
		}
		A.insert(a);
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (A.count(m))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}