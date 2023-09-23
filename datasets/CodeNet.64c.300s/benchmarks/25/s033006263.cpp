#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int numa[4];
	int numb[4];
	int a, i, j;
	int hit, blow;
	

	while(cin >> numa[0] >> numa[1] >> numa[2] >> numa[3] >> numb[0] >> numb[1] >> numb[2] >> numb[3] )
	{	
		hit = 0;
		blow = 0;
		
		for(i = 0; i < 4; i++)
		{
			if(numa[i] == numb[i])
			{
				hit = hit + 1;
			}
				for(j = 0; j < 4; j++)
				{
					if(numa[i] == numb[j] && i != j)
					{
						blow = blow + 1;
					}		
				}
		}
		cout << hit << " " << blow << endl;
	}
		
	return 0;
		
}