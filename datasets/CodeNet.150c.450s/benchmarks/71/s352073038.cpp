#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int upper =10;
	while(cin >> n){
		int answer = 0;
		for(int i = 0; i < upper; ++i)
		{
			for(int j = 0; j < upper; ++j)
			{
				for(int k = 0; k < upper;++k)
				{
					for(int l = 0; l < upper; ++l)
					{
						if((i+j+k+l)==n)
						{
							answer++;
						}
					}
				}
			}
		}
		cout << answer << endl;
	}
	return 0;
}