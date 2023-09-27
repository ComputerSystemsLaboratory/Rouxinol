#include <iostream>
#include <algorithm>

int main(){
	int aiNums[3] = {};

	scanf("%d %d %d", aiNums, &aiNums[1], &aiNums[2]);

	std::sort(aiNums, aiNums + 3);

	printf("%d %d %d\n", aiNums[0], aiNums[1], aiNums[2]);

	return 0;
}