#include<iostream>
#include<queue>
using namespace std;
#define max 502
#define aaa 2000000003

int main()
{
	int heep[max];
	int h;
	cin >> h;

	for (int i = 0; i < max; i++) {
		heep[i] = aaa;
	}

	for (int i = 1; i < h + 1; i++) {
		cin >> heep[i];
	}

	for (int i = 1; i < h + 1; i++) {
		cout << "node " << i << ": key = " << heep[i] << ", ";
		if (heep[i / 2] != aaa) cout << "parent key = " << heep[i / 2] << ", ";
		if (heep[i * 2] != aaa) cout << "left key = " << heep[i * 2] << ", ";
		if (heep[i * 2 + 1] != aaa) cout << "right key = " << heep[i * 2 + 1] << ", ";
		cout << endl;
	}
	return 0;
}
