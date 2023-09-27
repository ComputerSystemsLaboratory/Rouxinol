#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
	char s[1001];
	int sum=0;
	while (1) {
		cin >> s;
		for (int i = 0; s[i] != '\0'; i++) sum += (int)s[i] - '0';
		if (sum == 0) break;
		cout << sum << endl;
		sum = 0;
	}
    return 0;
}