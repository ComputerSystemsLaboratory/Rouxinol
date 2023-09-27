#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];

    ostringstream oss;
    for (int i = array.size() - 1; i >= 0; i--) {
        if (oss.str() != "") oss << " ";
        oss << array[i];
    }

    cout << oss.str() << endl;

	return 0;
}