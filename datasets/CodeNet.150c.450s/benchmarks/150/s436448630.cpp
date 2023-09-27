#include <iostream>
#define MAX 10001

using namespace std;

int main()
{
	int A[MAX] = {};
	int size, num;
	cin >> size;
	for (int i = 0; i<size; i++) {
		cin >> num;
		A[num]++;
	}
	for (int i = 0; i<size; i++) {
		if (0<A[i]) {
			cout << i;
			A[i]--;
			break;
		}
	}
	for (int i = 0; i<MAX; i++) {
		if (0<A[i]) {
			cout << " " << i;
			A[i]--;
			i--;
		}
	}
	cout << endl;
	return 0;
}