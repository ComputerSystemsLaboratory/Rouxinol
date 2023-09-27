#include <iostream>
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int n;
	cin >> n;

	REP(i,1,n+1)
	{
		bool flag = false;
		int temp = i;
		while(temp)
		{
			if(temp % 10 == 3) flag = true;
			temp /= 10;
		}

		if(flag || i%3 == 0) cout << " " << i;
	}

	cout << endl;
	
	return 0;
}