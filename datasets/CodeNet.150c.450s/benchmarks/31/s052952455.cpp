#include <iostream>

using namespace std;

#define NUMBER_MAX 1000000000

int main()
{
	int n, element, minimam, max_value = -NUMBER_MAX;

	cin >> n;
	cin >> minimam;
	for (int i = 0; i < n - 1; i++) {
		cin >> element;
		if (max_value < element - minimam)
			max_value = element - minimam;
		if (element < minimam)
			minimam = element;
	}
	cout << max_value << endl;
	return 0;
}