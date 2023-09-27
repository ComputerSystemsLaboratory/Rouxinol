#include <iostream>
using namespace std;
int main()
{
		int n, i, chain[100];
		cin >> n;
		for ( i = 0; i < n; i++ )
		{
			cin >> chain[i];
		}
		for ( i = n - 1; i >= 0; i--)
		{
			cout << chain[i];
			if ( i == 0 )break;
			cout << " ";
		}
        cout << endl;
	return 0; 
}