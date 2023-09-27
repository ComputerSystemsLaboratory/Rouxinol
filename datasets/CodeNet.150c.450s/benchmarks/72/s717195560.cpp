#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int case_check(int c);

int main()
{
	string in;

	getline(cin, in);
	transform(in.begin(), in.end(), in.begin(), ::case_check);
	cout << in;
	
	cout << endl;
}

int case_check(int c)
{
	if (islower(c))
		return toupper(c);
	else
		return tolower(c);
}