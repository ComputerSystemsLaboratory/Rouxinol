#include <iostream>
using namespace std;
int main()
{
	int A[5] = {};
	cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];
	for (int i = 1; i < 5; ++i){
		for (int j = i; j >= 1; --j){
			if (A[j] > A[j - 1]) swap(A[j], A[j - 1]);
			else break;
		}
	}
	cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] << "\n";
	return 0;
}