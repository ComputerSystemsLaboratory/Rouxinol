#include <iostream>

using namespace std;

int main()
{
	int a[100000];

	int b = 0;

	for(int i=1;i < 100000;i++)
	{
		cin >> a[i];

		b++;

		if(a[i] == 0)
		{
			goto Exit;
		}
	}

Exit:;

	for(int i = 1; i < b; i++)
	{
		cout << "Case " << i << ": " << a[i] << endl;
	}
	return 0;
}