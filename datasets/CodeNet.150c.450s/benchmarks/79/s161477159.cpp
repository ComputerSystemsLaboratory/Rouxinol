#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>
using namespace std;


int main()
{
	int n, r, p, c, A[51];
	while (true) {
		cin >> n >> r;
		if (n == 0 && r == 0)break;
		else {
			for (int i = 0; i < n; i++)A[i] = n - i;
			for (int i = 0; i < r; i++) {
				cin >> p >> c;
				rotate(A, A + p - 1, A + p + c - 1);
			}
			cout << A[0] << endl;
			for (int i = 0; i < n; i++)A[i] = 0;
		}
	}
	return 0;
}