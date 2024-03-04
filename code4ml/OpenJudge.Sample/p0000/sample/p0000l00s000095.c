#include <stdio.h>

int main ()
{
	int heights[3] = {0};
	int input;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		if (input > heights[0]) {
			heights[2] = heights[1];
			heights[1] = heights[0];
			heights[0] = input;
		} else if (input <= heights[0] && input > heights[1]) {
			heights[2] = heights[1];
			heights[1] = input;
		} else if (input <= heights[1] && input > heights[2]) {
			heights[1] = input;
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("%d\n", heights[i]);
	}

	return 0;
}