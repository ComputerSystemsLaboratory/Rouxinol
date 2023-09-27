#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{

	int n;
	int ts = 0;
	int hs = 0;
	char taro[100+1] = {};
	char hana[100+1] = {};;
	scanf("%d", &n);
	while (n)
	{
		scanf("%s %s", taro, hana);
		int tlen = strlen(taro);
		int hlen = strlen(hana);
		int len = tlen < hlen ? hlen : tlen;
		// s1 > s2 ??§??£?????????s1 < s2 ??§?????????
		int cmp = strncmp(taro, hana, len);
		if (cmp > 0)
		{
			ts += 3;
		}
		else if (cmp < 0)
		{
			hs += 3;
		}
		else
		{
			ts++;
			hs++;
		}
		n--;
	}
	cout << ts << " " << hs << endl;
	return 0;
	
}