#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> values;
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(values));

	sort(values.begin(), values.end(), greater<int>());

	for (size_t i = 0; i < values.size(); ++i) {
		if (i > 0) {
			cout << ' ';
		}
		cout << values[i];
	}
	cout << endl;

	return 0;
}