#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int rect = a * b;
	int circuit = 2 * (a + b);
	cout << rect << " " << circuit << "\n";

	return 0;
}