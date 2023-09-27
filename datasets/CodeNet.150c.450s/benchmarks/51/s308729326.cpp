#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main() {

	set<int> A;
	int x,y;
	vector<int> B;

		for (int i = 0; i < 28; i++) {
			int a;
			cin >> a;
			A.insert(a);
		}

		for (int i = 0; i < 30; i++) {
			int n;
			n = A.count(i+1);
			if (n == 0) {
				B.push_back(i+1);
			}
		}

		x = B[0];
		y = B[1];

		cout << min(x, y) << endl << max(x, y) << endl;
}
