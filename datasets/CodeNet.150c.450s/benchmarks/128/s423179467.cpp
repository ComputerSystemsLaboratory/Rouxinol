#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[21];
	int i;
	cin >> str;
	i = strlen(str);
	for (i -= 1; 0 <= i; i--) {
		cout << str[i];
	}
	cout << endl;
	return 0;
}