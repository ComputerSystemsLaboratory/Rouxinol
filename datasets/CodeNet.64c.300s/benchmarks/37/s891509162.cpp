#include <cstdio>
#include <iostream>
#include <list>

int main()
{
	int n;
	while(1){
		std::cin >> n;
		if(n == 0) break;
		int sum=0, cnt=0;
		for(int i = 1; i <= n/2; i++){
			sum = i;
			for(int j = i+1; j < n; j++){
				sum += j;
				if(sum > n) break;
				if(sum == n){
					cnt++;
					break;
				}
			}
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}