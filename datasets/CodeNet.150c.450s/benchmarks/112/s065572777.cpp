#include <iostream>
#include <string>

#define rep(i, a, b) for(int i = a; i < b; i ++)

using namespace std;

int main() {
	int n, m;
	char A[100], B[100], C;

	while(cin >> n, n) {
		rep(i, 0, 100) {
			A[i] = 0;
			B[i] = 0;
		}

		rep(i, 0, n) {
			cin >> A[i] >> B[i];
		}

		cin >> m;
		rep(i, 0, m) {
			cin >> C;
			rep(j, 0, n) {
				if(C == A[j]) {
					C = B[j];
					break;
				}
			}
			cout << C;
		}
		cout << endl;
	}

	return 0;
}