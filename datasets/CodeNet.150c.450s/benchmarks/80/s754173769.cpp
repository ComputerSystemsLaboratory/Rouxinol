#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int A1, B1, C1, D1, A2, B2, C2, D2;

	cin >> A1 >> B1 >> C1 >> D1 >> A2 >> B2 >> C2 >> D2;

	cout << max(A1 + B1 + C1 + D1, A2 + B2 + C2 + D2) << endl;

	return 0;
}