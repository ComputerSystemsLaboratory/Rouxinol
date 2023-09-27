#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int count = 0;
	string W;
	string t;
	cin >> W;
	while (cin >> t, t != "END_OF_TEXT")
	{
		transform(t.begin(), t.end(), t.begin(), ::tolower);
		if (t == W)
		{
			count++;
		}
	}
	cout << count << endl;
}
