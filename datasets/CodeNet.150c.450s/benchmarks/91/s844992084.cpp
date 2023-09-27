#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int N = 0;
	while(cin >> N)
	{
		vector < int > v;
		v.resize(N+1);

		for(int i = 0; i <=N; ++i)
		{
			if(i >= 2)
			{
				v[i] = 1;
			} else {
				v[i] = 0;
			}
		}

		for(int i = 2; i <= sqrt((double)N); ++i)
		{
			for(int j = 0; i*(j+2) <= N; ++j)
			{
				v[i*(j+2)]=0;
			}
		}

		int count = 0;
		for(int i = 0; i <= N; ++i)
		{
			if(v[i]==1)
				count++;
		}

		cout << count << endl;

	}

	return 0;
}