#include <math.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>

#define YES "YES"
#define NO "NO"

using namespace std;

void func();
int n;

int main(void)
{
	
	func();

	return 0;
}

void func()
{
	cin >> n;

	while (n-- > 0)
	{
		int edge[3];
		for (int i = 0; i < 3; i++)
		{
			cin >> edge[i];
			edge[i] *= edge[i];	// 2?????????
		}
		sort(edge, edge + 3);

		if ((edge[0] + edge[1]) == edge[2])
		{
			cout << YES << endl;
		}
		else
		{
			cout << NO << endl;
		}
	}
}