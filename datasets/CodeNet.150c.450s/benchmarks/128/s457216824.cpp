#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	char str[21]={0};
	char result[21]={0};
	int offset;
	cin >> str;
	for (int i=20; i>=0; i--)
	{
		if (str[i]!=0)
		{
			offset = i;
			break;
		}
	}
	for (int i=0; i<=offset; i++)
	{
		result[i] = str[offset-i];
	}
	cout << result << endl;
}