#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	vector<int> vec;
	for(int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	for(vector<int>::reverse_iterator rit = vec.rbegin();
			rit != vec.rend();
			++rit)
		cout << *rit << ((rit != vec.rend()-1)?" ":"");
	cout << endl;

	return 0;
}