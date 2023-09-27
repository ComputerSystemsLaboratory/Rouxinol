#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a(4), b(4);

	while (cin >> a[0] >> a[1] >> a[2] >> a[3],
		cin >> b[0] >> b[1] >> b[2] >> b[3])
	{
		int hit = 0, blow = 0;

		for (int i = 0; i < a.size(); ++i)
			for (int j = 0; j < b.size(); ++j)
				if (a[i] == b[j])
					if (i == j) hit++;
					else blow++;

		cout << hit << " " << blow << endl;
	}

	return 0;
}