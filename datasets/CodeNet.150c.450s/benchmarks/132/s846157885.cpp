#include <iostream>
using namespace std;

int main()
{
	int n,p;
	while(cin >> n >> p, n||p)
	{
		int s=p;
		int snum[64] = {0};

		for(int i=0; true; i=(i+1)%n)
		{
			if(s)
			{
				s--;
				snum[i]++;
				if(snum[i]==p)
				{
					cout << i << endl;
					break;
				}
			}
			else
			{
				s=snum[i];
				snum[i]=0;
			}
		}
		
	}
}