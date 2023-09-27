#include "iostream"
#include "string"


int main()
{
	int listA[101][101], listB[101][101];
	unsigned long int result = 0;
	int n, m, l, a;
	std::cin >> n >> m >> l;

	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++)
			std::cin >> listA[i][j];

	for (int j = 0; j < m; j++)
		for (int k = 0; k < l; k++)
			std::cin >> listB[j][k];
	a + 1;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < l; k++) {
			for (int j = 0; j < m; j++) {
				result += listA[i][j] * listB[j][k];
			}
			if (k < l - 1)
				std::cout << result << " ";
			else
				std::cout << result;
			result = 0;
		}
			std::cout << std::endl;
	}

    return 0;
}