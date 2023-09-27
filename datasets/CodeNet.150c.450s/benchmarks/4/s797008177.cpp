#include <iostream>
#include <vector>

using namespace std;

#define A

#ifdef A
int main(void)
{
	vector<char> arr;

	int m, f, r;
	while (true)
	{
			cin >> m >> f >> r;
			int sum = m + f;
			if (m <0 && f<0 && r <0)
			{
				break;
			}
			if (m < 0 || f < 0 || sum < 30) {
				arr.push_back('F');
				continue;
			}
			if (sum > 79) {
				arr.push_back('A');
				continue;
			}
			if (sum > 64) {
				arr.push_back('B');
				continue;
			}
			if (sum > 49 || r >49)
			{
				arr.push_back('C');
				continue;
			}
			arr.push_back('D');


	}

	for (auto a : arr) {
		cout << a << endl;
	}


	return 0;
}
#endif // A