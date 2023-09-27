#include <iostream>

using namespace std;

int main(void)
{
    while (true) {
	char buf[1002];
	cin >> buf;
	if (buf[0] == '0' && buf[1] == '\0')
	    break;

	int sum = 0;
	u_int i = 0;
	while (buf[i] != '\0')
	    sum += buf[i++] - 48;
	
	printf("%d\n", sum);
    }

    return 0;
}