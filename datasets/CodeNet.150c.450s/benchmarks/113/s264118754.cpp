#include <iostream>
using namespace std;

int main()
{
	const int N = 10000;
	int x = 0;
	for(int i = 1; i <= N ; i++)
	{
	    cin >> x;
		if ( x == 0 ){ break; }
		cout << "Case " << i << ": " << x << endl;
	}
	return 0;
}