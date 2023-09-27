#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for(int i=1; i<=n; i++)
	{
		int x = i;

		if(x/10 >= 3 && x/10 < 4)
		{
			cout << " " << x;
		}
		else if(x%100 >= 30 && x%100 < 40)
		{
			cout << " " << x;
		}
		else if(x%1000 >= 300 && x%1000 < 400)
		{
			cout << " " << x;
		}
		else if(x%10000 >= 3000 && x%10000 < 4000)
		{
			cout << " " << x;
		}

		else if(x%3 == 0 || x%10 == 3)
		{
			cout << " " << i;
		}

	}
	cout << endl;

	return 0;
}