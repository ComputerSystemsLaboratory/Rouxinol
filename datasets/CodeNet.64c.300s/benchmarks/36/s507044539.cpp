#include "iostream"

using namespace std;

int main()
{
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	if (n[0] > n[1]) {
		int m = n[0];
		n[0] = n[1];
		n[1] = m;
	}
	if (n[1] > n[2]) {
		int m = n[1];
		n[1] = n[2];
		n[2] = m;
	}
	if (n[0] > n[1]) {
		int m = n[0];
		n[0] = n[1];
		n[1] = m;
	}
	cout << n[0] << " " << n[1] << " " << n[2] << endl;

    return 0;
}