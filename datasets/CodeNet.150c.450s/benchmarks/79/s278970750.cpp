#include <cstdio>
#include <iostream>
#include <list>

int main()
{
	int n, r;
	while(1){
		std::cin >> n >> r;
		if(n == 0 && r == 0) break;
		int a[50], b[50], i;
		for(i = 0; i < n; i++){
			a[i] = n-i;
		}
		int p, c;
		for(i = 0; i < r; i++){
			std::cin >> p >> c;
			int j;
			for(j = 0; j < p-1; j++){
				b[j] = a[j];
			}
			for(j = 0; j < c; j++){
				a[j] = a[p-1+j];
			}
			for(j = 0; j <p-1; j++){
				a[c+j] = b[j];
			}
		}
		std::cout << a[0] << std::endl;
	}
	return 0;
}