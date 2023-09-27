#include <iostream>

int main()
{
	int i,j,k,n, m;
	std::cin >> n >> m;
	int a[100000];
	for (k = 0;k < n*m;k++) {
		std::cin >> a[k];
	}
	int b[1000];
	for (i = 0;i < m;i++) {
		std::cin >> b[i];
	}
	k = 0;
	for (j = 0;j < n;j++) {
		int nSum = 0;
		for (i = 0;i < m;i++) {
			nSum += a[k] * b[i];
			k++;
		}
		std::cout << nSum << std::endl;
	}
    return 0;
}