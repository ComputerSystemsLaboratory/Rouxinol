#include <iostream>
#include <string>

using namespace std;

int main()
{
	string player1, player2;
	int i, n;
	int point1 = 0, point2 = 0;

	cin >> n;

	for (i = 0; i < n; i++){
		cin >> player1 >> player2;
		if (player1 > player2)
			point1 += 3;
		else if (player1 < player2)
			point2 += 3;
		else{
			point1 += 1;
			point2 += 1;
		}
	}

	cout << point1 << " " << point2 << endl;
	return 0;
}