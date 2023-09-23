#include <iostream>
using namespace std;

int main()
{
	while ( true )
	{
		int n,s; cin>>n>>s;
		if ( n==0 && s==0 )
			break;
		int c = 0;
		for ( int i=0; i<1<<10; i++ )
		{
			int tn = 0;
			int ts = 0;
			for ( int j=0; j<10; j++ )
			if ( i>>j&1 )
				tn++,
				ts += j;
			if ( tn==n && ts==s )
				c++;
		}
		cout << c << endl;
	}
	return 0;
}

					