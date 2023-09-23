#include <iostream>
using namespace std;
int main()
{
	int n,x,s;
	while(cin >> n >> x, n+x)
	{
		s=0;
		for(int i=1;i<n-1;++i)
			for(int j=i+1; j<n;++j)
			{
				int k = x - i- j;
				if(k>=1 && k<=n && k > i && k > j) ++s;
			}
		cout << s << endl;
	}
	return 0;
}