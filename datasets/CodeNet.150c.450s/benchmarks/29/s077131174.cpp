#include <stdio.h>

using namespace std;

int main()
{
	const static int INVALID = -1;
	int front = 0, back = 0;
	int *allocate_array;

	int n, size = 1000020;
	scanf("%d", &n);
	if (n < 1000020) size = n;

	allocate_array = new int[size];
	char command[12];
	int x;

	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (command[0] == 'i') { // insert x
			scanf("%d", &x);
			allocate_array[front] = x;
			front++;
			size++;
		}
		else { // delete???
			switch (command[6]) {
			case '\0': // delete x
				scanf("%d", &x);
				for (int i = front - 1; i >= back; i--) {
					if (allocate_array[i] == x) {
						allocate_array[i] = INVALID;
						if (i == front - 1)
							front--;
						if (i == back)
							back++;
						break;
					}
				}
				break;
			case 'F': // deleteFirst
				if (size > 0) {
					front--;
					size--;
				}
				break;
			case 'L': // deleteLast
				if (size > 0) {
					back++;
					size--;
				}
				break;
			}
		}
	}
	int i = front - 1;
	while (i >= back && allocate_array[i] == INVALID) i--;
	printf("%d", allocate_array[i]);
	i--;
	for (; i >= back; i--) {
		if (allocate_array[i] != INVALID)
			printf(" %d", allocate_array[i]);
	}
	putchar('\n');

	delete[] allocate_array;
	return 0;
}