#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	typedef vector<int> IntVector;
	IntVector a(n, 0);

	for (int i = 0; i < n; ++i)
		cin >> skipws >> a[i];

	IntVector::const_reverse_iterator ritEnd = a.rend();
	for (IntVector::const_reverse_iterator rit = a.rbegin(); rit != ritEnd; ++rit)
	{
		cout << *rit;
		if (rit == ritEnd - 1)
			cout << endl;
		else
			cout << " ";
	}

	return 0;
}