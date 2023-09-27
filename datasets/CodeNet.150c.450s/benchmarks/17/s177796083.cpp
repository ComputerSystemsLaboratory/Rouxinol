#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	vector<int> a(5, 0);
	
	for (int i = 0; i < 5; i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end(), greater<int>());

	for(int i = 0; i < 5 ; i++) {
		if(i == 4) {
			cout << a[4] << endl;
			break;
		}
		cout << a[i] << " ";
	}
		return 0;
}