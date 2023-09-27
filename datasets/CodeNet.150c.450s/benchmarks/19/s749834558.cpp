#include <iostream>
using namespace std;

#define MAX 2
int main(void)
{
	int i=1;
	int in[MAX];
	while (1) {
		for (i = 0; i < MAX; i++) {
			cin >> in[i];
		}
		if ((in[0] == in[1]) && (in[0] == 0)) {
			break;
		}

		if (in[0] > in[1]) {
			cout << in[1] << " " << in[0] << endl;
		}
		else {
			cout << in[0] << " " << in[1] << endl;
		}
	}

	return 0;
}

