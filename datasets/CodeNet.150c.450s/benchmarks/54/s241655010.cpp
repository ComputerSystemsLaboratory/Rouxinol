#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	string W, T;
	cin >> W;

	while (true)
	{
		string s;
		getline(cin, s);

		if (s == "END_OF_TEXT")
			break;

		T += s + " ";
	}

	transform(T.begin(), T.end(), T.begin(), ::tolower);

	istringstream is(T);
	string word;
	int count = 0;
	while (is >> word)
	{
		if (!strcmp(W.c_str(), word.c_str()))
			++count;
	}

	cout << count << endl;

	return 0;
}