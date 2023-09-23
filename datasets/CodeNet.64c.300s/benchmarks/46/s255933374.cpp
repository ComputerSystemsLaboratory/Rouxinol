#include <iostream>

using namespace std;

static bool np[1000000];

int main()
{
	np[0] = np[1] = true;
	for (int i = 2; i * i < 1000000; i++)
	{
		if (np[i]) continue;
		for (int j = 2 * i; j < 1000000; j += i) np[j] = true;
	}

	int A,D,N;
	while(cin>>A>>D>>N, A && D && N)
	{
		int c = 0;
		for(;;)
		{
			if (!np[A]) if (++c == N) break;
			A += D;
		}
		cout << A << endl;
	}
	return 0;
}