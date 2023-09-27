#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int n;
	while(cin >> n && n)
	{
		i++;
		cout << "Case " << i << ": " << n << endl;
	}
	return 0;
}