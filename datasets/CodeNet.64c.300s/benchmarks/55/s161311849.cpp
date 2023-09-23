#include <iostream>
using namespace std;

int main()
{
	int n,i;

	for(i=1;i<=10000;i++)	
	{
		cin >> n;
		if(n == 0) 
			break;
		cout << "Case " << i << ": " << n <<endl;
	}

	return 0;
}