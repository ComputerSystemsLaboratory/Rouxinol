#include "iostream"
#include<stdio.h>
#include<cctype>
#include<string>
using namespace std;

int main()
{
	string a;
	int goukei = 0;
	int b = 0;
	while (1) {
		goukei = 0;
		getline(cin, a);
		if (a[0] == '0')break;
		for (int i = 0; a[i]; i++)
		{
			goukei+=(int)(a[i] - '0');
		}
		cout << goukei << endl;

	}
	return 0;
}