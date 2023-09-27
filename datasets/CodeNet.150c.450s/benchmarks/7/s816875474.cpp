#include <iostream>
#include <set>
using namespace std;

int main() {
	multiset<int, greater<int>> ms; int temp;
	for (int i = 0; i < 10; i++) {
		cin >> temp; ms.insert(temp);
	}
	multiset<int, greater<int>>::iterator itr = ms.begin();
	for (int i = 0; i < 3; i++, ++itr) {
		cout << *itr << endl;
	}
	return 0;
}
