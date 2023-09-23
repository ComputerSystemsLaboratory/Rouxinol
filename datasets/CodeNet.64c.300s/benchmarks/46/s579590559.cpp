#include <iostream>
using namespace std;

#define LIMIT 1000000

int main()
{
	bool ptable[LIMIT] = {0};
	int a,d,n;
	
	ptable[0] = 1;
	ptable[1] = 1;
	for(int i = 2 ; i <LIMIT ; i++)
	{
		if( ptable[i] != 0)
			continue;
		else
			for(int j = 2; i*j <LIMIT; j++)
			ptable[i*j] = 1;
	}
	
	
	while( cin >> a >> d >> n, (a||d||n))
	{
		int count = 0;
		for(int i = a; i < LIMIT; i += d)
		{
			if( ptable[i] == 0)
				count++;
				if(count == n)
				{
					cout << i <<endl;
					break;
				}
		}
	}
	
	return 0;
}