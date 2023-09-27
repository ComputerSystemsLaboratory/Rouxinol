
#include<iostream>
#include<vector>

using namespace std;

int foot(int);

int main() {

	int n;
	vector<int>floor;

	
	cin >> n;
	while (n != 0) {
		floor.push_back(n);
		cin >> n;
	}
	floor.push_back(0);


	int i = 0;
	while (floor[i] != 0) {

		int res = 0;
		res = foot(floor[i]) / 3650;
		if( foot(floor[i]) % 3650 != 0) res++;

		cout << res << endl;
		i++;
	}

	cin >> n;


	return 0;
}

int foot(int n) {


	if (n == 1)return 1;
	if (n == 2)return 2;
	if (n == 3)return 4;
	if (n < 1)return 0;

	return foot(n - 1) + foot(n - 2) + foot(n - 3);


}