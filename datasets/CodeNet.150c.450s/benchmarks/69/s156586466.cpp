#include <iostream>
#include <stack>

using namespace std;

int main() {
	int A[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++)
			cin >> A[j];
		stack<int> B, C;
		string ans = "YES";
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				B.push(A[j]);
			else if (A[j] > B.top())
				B.push(A[j]);
			else if (A[j] < B.top()) {
				if (C.empty())
					C.push(A[j]);
				else if (A[j] < C.top())
					ans = "NO";
				else
					C.push(A[j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}