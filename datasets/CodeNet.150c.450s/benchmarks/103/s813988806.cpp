#include <iostream>

using namespace std;

int recursive(int n, int s, int lower)
{
	if(s < 0 || lower > 9)
		return 0;

	if(n == 1)
	{
		if(s < lower || 9 < s)
			return 0;

		return 1;
	}

	int count = 0;
	for(int i = lower; i <= 9; i++)
		count += recursive(n - 1, s - i, i + 1);
	
	return count;
}

int main()
{
	int n, s;
	while(cin >> n >> s)
	{
		if(n == 0 && s == 0)
			break;

		cout << recursive(n, s, 0) << endl;
	}

	return 0;
}