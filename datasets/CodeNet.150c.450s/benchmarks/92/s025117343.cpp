#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF){
		int c = a + b, ret = 0;
		while (c > 0){
			ret++;
			c /= 10;
		}
		cout << ret << endl;
	}

	return 0;
}