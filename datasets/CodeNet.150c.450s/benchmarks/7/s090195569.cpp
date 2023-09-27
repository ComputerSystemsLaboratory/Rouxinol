#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int hM[10], I, K, temp;

	for(I = 0; I < 10; I = I + 1)
		scanf("%d", &hM[I]);

	for(I = 0; I < 9; I = I + 1)
		for(K = 0; K < 9 - I; K = K + 1)
			if(hM[K] < hM[K + 1])
			{
				temp = hM[K];
				hM[K] = hM[K + 1];
				hM[K + 1] = temp;
			}

	for(I = 0; I < 3; I = I + 1)
		printf("%d\n", hM[I]);

	return 0;
}

