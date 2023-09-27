#include <iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n;
	int x;
	cin >> n;
	for (int i = 1; i <= n ; i = i + 1)
	{
		if ( i % 3 == 0 )
		{
			cout << " " << i;
			//cout << "(" << i << ")";
		}
		else
		{
			if  ( i % 10 == 3 )
			{
				cout << " " << i;
				//cout << "[" << i << "]";
			}
			else
			{
				x = i;
				x = x / 10;
				while (x)
				{
					if ( x % 10 == 3 )
					{
						cout << " " << i;
						//cout << "<" << i << ">";
						x = 0;
					}
					x = x / 10;
				}
			}
			
		}
		
	}

	cout << endl;

	return 0;
}