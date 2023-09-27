#include <bits/stdc++.h>

using namespace std;

int main()
{
	int e;

	while (scanf("%d", &e), e){
		int min = INT_MAX;

		for (int i = 0; i * i * i <= e; i++){
			for (int j = 0; j * j <=  e - i * i * i; j++){
				if (min > i + j + e - (i * i * i + j * j)){
					min = i + j + e - (i * i * i + j * j);
				}
			}
		}

		printf("%d\n", min);
	}

	return (0);
}