#include <string>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string S;

	cin >> S;

	for (string::size_type i = 0; i < S.size() / 2; i++)
	{
		swap(S[i], S[S.size() - i - 1]);
	}

	for (string::size_type i = 0; i < S.size(); i++)
	{
		cout << S[i];
	}

	cout << endl;

	return 0;
}