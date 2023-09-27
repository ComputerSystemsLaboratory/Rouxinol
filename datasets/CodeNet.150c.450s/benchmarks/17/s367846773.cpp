#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
	vector<int> v;
	int tmp;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	stable_sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < 4; i++) cout << v[i] << " ";
	cout << v[4] << endl;
	
	return 0;
}