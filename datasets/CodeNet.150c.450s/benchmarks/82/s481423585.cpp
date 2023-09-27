#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int i,a,n,b,c;
	vector<int> A;
	for (i = 0; i < 6; i++) {
		cin >> a;
		A.push_back(a);
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> b; cin >> c;
		if (b == A[0] && c == A[1])cout << A[2] << endl;
		else if (b ==A[0] && c == A[2])cout << A[4] << endl;
		else if (b == A[0] && c == A[3])cout << A[1] << endl;
		else if (b == A[0] && c == A[4])cout << A[3] << endl;
		else if (b == A[1] && c == A[0])cout << A[3] << endl;
		else if (b == A[1] && c == A[2])cout << A[0] << endl;
		else if (b == A[1] && c == A[3])cout << A[5] << endl;
		else if (b == A[1] && c == A[5])cout << A[2] << endl;
		else if (b == A[2] && c == A[0])cout << A[1] << endl;
		else if (b == A[2] && c == A[1])cout << A[5] << endl;
		else if (b == A[2] && c == A[4])cout << A[0] << endl;
		else if (b == A[2] && c == A[5])cout << A[4] << endl;
		else if (b == A[3] && c == A[0])cout << A[4] << endl;
		else if (b == A[3] && c == A[1])cout << A[0] << endl;
		else if (b == A[3] && c == A[4])cout << A[5] << endl;
		else if (b == A[3] && c == A[5])cout << A[1] << endl;
		else if (b == A[4] && c == A[0])cout << A[2] << endl;
		else if (b == A[4] && c == A[2])cout << A[5] << endl;
		else if (b == A[4] && c == A[3])cout << A[0] << endl;
		else if (b == A[4] && c == A[5])cout << A[3] << endl;
		else if (b == A[5] && c == A[1])cout << A[3] << endl;
		else if (b == A[5] && c == A[2])cout << A[1] << endl;
		else if (b == A[5] && c == A[3])cout << A[4] << endl;
		else if (b == A[5] && c == A[4])cout << A[2] << endl;
	}
	return 0;
}
