#include <iostream>

using namespace std;

int main()
{
	int x, cnt = 1;
	
	while (1)
	{
		cin >> x;
		if (x == 0) return 0;
		cout << "Case " << cnt << ": " << x << "\n";
		cnt++;
	}
	
	return 0;
}