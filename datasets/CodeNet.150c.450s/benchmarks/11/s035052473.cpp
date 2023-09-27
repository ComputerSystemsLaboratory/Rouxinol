#include <iostream>
using namespace std;

#define MAX 4
int main(void)
{
	int n,i,j;
	char c;
	int num;
	unsigned short his[MAX] = {0};
	const char c1[MAX] = {'S','H','C','D'};

	cin >> n;
	for (i=0; i<n; i++) {
		cin >> c;
		cin >> num;

		switch (c) {
		case 'S':
			his[0] |= (1 << (num-1));
			break;
		case 'H':
			his[1] |= (1 << (num-1));
			break;
		case 'C':
			his[2] |= (1 << (num-1));
			break;
		case 'D':
			his[3] |= (1 << (num-1));
			break;
		default:
			break;
		}
	}
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < 13; j++) {
			if ((his[i] & 1) == 0) {
				cout << c1[i] << " " << j+1 << endl;
			}
			his[i] >>= 1;
		}
	}
	return 0;
}
