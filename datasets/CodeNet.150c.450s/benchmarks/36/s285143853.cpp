#include <iostream>
using namespace std;

int main()
{
	int d, k, ans;
	while( cin >> d )
	{
		k = 0;
		ans = 0;
		while(k < 600) 
		{
			ans += d * k * k;
			k += d;
		}
		cout << ans << endl;
	}
}