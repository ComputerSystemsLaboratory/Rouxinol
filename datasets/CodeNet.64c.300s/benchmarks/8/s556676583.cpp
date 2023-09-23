#include <iostream>

using namespace std;

int main()
{
	int inValue, tmp;
	
	cin >> inValue;
	
	for(int i = 1; i <= inValue; i++)
	{
		tmp = i;
		if( (0 == i % 3) || (3 == i % 10) )
		{
			cout << " " << i;
			continue;
		}
		
		while(0 < tmp)
		{
			tmp /= 10;
			if(3 == tmp % 10)
			{
				break;
			}
		}
		
		if(0 != tmp)
		{
			cout << " " << i;
		}
	}
	cout << endl;
	
	return 0;
}
