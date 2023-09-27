#include <iostream>
#include <string>
#include <list>
using namespace std;

#define C

#ifdef C
int main(void)
{
	int f = 0, b= 0;
	string T, H;
	int rund;
	cin >> rund;
	for (size_t i = 0; i < rund; i++)
	{
		cin >> T >> H;
		if (T == H) {
			f++; b++;
		}
		else
		
			for (size_t i = 0; i <= T.size() && i <= H.size(); i++)
			{
				if (T[i] == H[i])
					continue;
				if (T[i] > H[i])
					f += 3;
				else
					b += 3;
				break;
			}
	
	}

	cout << f << " " << b << endl;
	return 0;
}
#endif