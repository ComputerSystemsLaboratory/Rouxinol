#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string eot = "END_OF_TEXT";
	string d, w;

	cin >> d;
	unsigned int ans = 0;
	while (cin >> w) {
		if (w == eot)
			break;

		for (unsigned int i = 0; i < w.length(); ++i)
			w[i] = tolower(w[i]);
		if (w == d)
			ans++;
	}

	cout << ans << endl;

	return 0;
}

