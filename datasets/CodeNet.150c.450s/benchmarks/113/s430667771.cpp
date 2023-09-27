#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a;
	int i = 1;
	while (1)
	{
		cin >> a;
		if (a == 0){
			break;
		}
		printf("Case %d: %d\n", i, a);
		i++;
	}

	return 0;
}