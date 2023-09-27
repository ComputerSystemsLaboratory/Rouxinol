#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> mt;
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		mt.push_back(tmp);
	}
	sort(mt.begin(), mt.end());
	for (int i = mt.size()-1, j = 0; j < 3; i--, j++) {
		cout << mt[i] << endl;
	}

	return 0;
}