#include <iostream>
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	
	int count = 0;
	REP(i,a,b+1)
	{
		if(c%i == 0) count++;
	}

	cout << count << endl;
	return 0;
}