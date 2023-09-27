#include <iostream>
#include <string>

using namespace std;


#define A

#ifdef A
int main(void) {

	string w;
	string t;
	int ans = 0;
	cin >> w>>t;

	while (t != "END_OF_TEXT")
	{
		for (size_t i = 0; i < t.size(); i++)
		{
			t[i] = tolower(t[i]);
		}
		if (w == t) ans++;
		cin >> t;
	}
	cout << ans << endl;

	return 0;
}
#endif