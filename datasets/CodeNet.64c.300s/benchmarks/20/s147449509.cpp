#include <iostream>
using namespace std;

#define X_MAX 600

int main()
{
	int d;
	long s;
	int i;
	while(cin >> d)
	{
		s = 0;
		for(i=d; i<X_MAX; i+=d)
		{
			s += d * i * i;	/* d:width i*i:height */
		}
		cout << s << endl;
		
	}
	return 0;
}