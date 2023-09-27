#include <iostream>
using namespace std;

int main()
{
	int n;
	long long int ans = 1;
	int num;

	cin >> n;

	for(int i = n+1; i>1; i--)
	{
		ans *= (i-1);
	}

	cout << ans << endl;

	return 0;
}