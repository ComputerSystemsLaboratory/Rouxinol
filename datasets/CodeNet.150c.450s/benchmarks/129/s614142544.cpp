#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;

	vector<int> sum(c + 1, 0);
	string sheet;

	while (r--)
	{
		vector<int> cell(c + 1, 0);

		for (int i = 0; i < c; ++i)
		{
			cin >> skipws >> cell[i];
			cell[c] += cell[i];
			sum[i] += cell[i];

			sheet += to_string(cell[i]) + " ";
		}

		sum[c] += cell[c];
		sheet += to_string(cell[c]) + "\n";
	}

	for (int i = 0; i <= c; ++i)
		sheet += to_string(sum[i]) + (i != c ? " " : "\n");

	for (int i = 0; i < sheet.size(); ++i)
		cout << sheet[i];

	return 0;
}