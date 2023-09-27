#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int n;
	int ary[100];
	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++) cin >> ary[i];
		int Max = *max_element(ary, ary + n);
		int Min = *min_element(ary, ary + n);
		int Sum = accumulate(ary, ary + n, 0);
		cout << (Sum - Max - Min) / (n - 2) << endl;
	}

	return 0;
}