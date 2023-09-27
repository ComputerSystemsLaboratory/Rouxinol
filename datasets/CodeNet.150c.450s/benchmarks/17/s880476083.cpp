#include <iostream>
#include <set>
using namespace std;

int main() {
	multiset<int, greater<int>> mul;
	int temp; bool check = true;
	for (int i = 0; i < 5; i++) {
		cin >> temp; mul.insert(temp);
	}
	auto itr = mul.begin();
	for (int i = 0; i < mul.size(); i++) {
		if (check == false) cout << ' ' << flush;
		cout << *itr << flush; check = false; ++itr;
	}
	cout << endl;
	return 0;
}
