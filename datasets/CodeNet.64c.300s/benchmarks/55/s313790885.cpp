#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int no;

	cin >> no;
	while(!(no == 0)) {
		cout << "Case " << i << ": " << no << endl;
		i++;
		cin >> no;
	}
}