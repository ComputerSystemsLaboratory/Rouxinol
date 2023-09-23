#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N;
	
	int count = 0;
	
	while(cin >> N)
	{
		for(int a = 0; a < 10; a++)
		{
			for(int b = 0; b < 10; b++)
			{
				for(int c = 0; c < 10; c++)
				{
					for(int d = 0; d < 10; d++)
					{
						int s = a + b + c + d;
						if(s == N)count++;
						else if(s > N)break;
					}
				}
			}
		}
                cout << count << endl;
            	count = 0;
        }
	return 0;
}