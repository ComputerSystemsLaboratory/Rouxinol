#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char x;
	int sum = 0;
	bool flag = false;

	while(1) {
		scanf("%c", &x);
		if (flag)
			if(x == '0')
				break;
			else
				flag = false;

		if (x == '\n') {
			printf("%d\n", sum);
			sum = 0;
			flag = true;
			continue;
		}
		
		sum += x - '0';
	}

	return (0);
}