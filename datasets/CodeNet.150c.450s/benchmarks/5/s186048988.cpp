#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	size_t n;
	int *ptr, *a, i;
	cin >> n;
	ptr = (int *)calloc(n, sizeof(int));
	if (ptr == NULL)
		exit(EXIT_FAILURE);
	a = ptr;
	for (i = 0; i < (int)n; i++) {
		cin >> *(a + i);
	}
	for (i = (int)n - 1; i >= 0; i--) {
		cout << *(a + i);
		if (i > 0)
			cout << " ";
	}
	cout << endl;
}