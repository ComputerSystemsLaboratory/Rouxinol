#include <iostream>
using namespace std;
bool Init(int *a, int *b);


int main()
{
	int a[4], b[4];
	int cntHits, cntBlow;
	while (Init(a, b))
	{
		cntHits = cntBlow = 0;
		for (int i = 0; i < 4; ++i)
		{
			if (a[i] == b[i]) ++cntHits;
		}
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				if (i != j && a[i] == b[j]) ++cntBlow;
			}
		}
		cout << cntHits << " " << cntBlow << endl;
	}
	return 0;
}
bool Init(int *a, int *b)
{
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3])
	{
		return true;
	}
	return false;
}