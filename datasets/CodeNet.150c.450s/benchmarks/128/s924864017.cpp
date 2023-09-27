#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
	char str[21];
	int tmp;
	cin >> str;
	tmp=strlen(str);
	for (int i = tmp-1; i >=0; i--) {
		cout << str[i];
	}
	cout << "\n";
	return 0;
}