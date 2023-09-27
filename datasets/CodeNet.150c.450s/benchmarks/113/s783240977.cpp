#include <iostream>
using namespace std;

int main(void)
{
	int x;
	int i=0;

	while (1)
	{
		cin >> x;
		if (x == 0)break;
		cout << "Case " << i+1 << ":" << " " << x << endl;
		i++;
	}
	return 0;
}