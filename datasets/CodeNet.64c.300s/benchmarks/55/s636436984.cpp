#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a, i = 1;
	while (1)
	{
		cin >> a;
		if (a == 0)break;
		cout << "Case " << i << ": " << a << endl;
		i++;
	}
	return 0;
}