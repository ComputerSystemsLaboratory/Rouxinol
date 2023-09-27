#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>


using namespace std;

int main()
{
	int d;
	while (scanf("%d", &d) != EOF)
	{
		int area = 0;
		for (int x = 0; x < 600; x += d)
		{
			area += x*x * d;
		}
		printf("%d\n", area);
	}

	return 0;
}