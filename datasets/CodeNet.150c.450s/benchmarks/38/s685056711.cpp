#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int side[3];

	cin >> n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < 3; j++){
			cin >> side[j];
		}
		sort(side, side + 3);
		reverse(side, side + 3);
		if (side[0] * side[0] == side[1] * side[1] + side[2] * side[2]){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return (0);
}