#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t,h,b,n[10];
	while(cin >> t)
	{
		memset(n,0,sizeof(n));

		n[t]=1; h=b=0;
		for(int i=1; i<4; i++)
		{
			cin >> t;
			n[t] = i+1;
		}

		for(int i=0; i<4; i++)
		{
			cin >> t;
			if(n[t]==i+1)    h++;
			else if(n[t]!=0) b++;
		}

		cout << h << " " << b << endl;
	}
}