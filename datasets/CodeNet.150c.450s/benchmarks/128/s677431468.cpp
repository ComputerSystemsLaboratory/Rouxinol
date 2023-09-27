#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	char str[21] = { 0 };
	char sc[21] = { 0 };
	int i, j, k, h;
	cin >> str;
	h=k=strlen(str);
	for(i=0; i < k; i++)
	{
		sc[k-i-1] = str[i];
	}
	cout << sc << endl;
}