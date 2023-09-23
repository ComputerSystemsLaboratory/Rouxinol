#include<iostream>
#include<algorithm>
#define int long long
using namespace std;

signed main()
{
	int N;
	cin >> N;
	int A = -1145141919, B = 1145141919, C = 0;
	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		A = max(A, a);
		B = min(B, a);
		C += a;
	}
	cout << B << " " << A << " " << C << endl;
}
