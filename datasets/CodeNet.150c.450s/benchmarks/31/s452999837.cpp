#include <iostream>
#include <algorithm>
using namespace std;

static const int MAX = 200000;

int main(void)
{
	int n,i, minv, maxv;
	static int R[MAX];

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> R[i];

	minv = R[0];
	maxv = R[1] - R[0];
	for (i = 2; i < n; i++){
		if (R[i - 1] < minv)
			minv = R[i - 1];
		if (R[i] - minv > maxv){
			maxv = R[i] - minv;
		}
	}
	cout << maxv << endl;

	return 0;
}