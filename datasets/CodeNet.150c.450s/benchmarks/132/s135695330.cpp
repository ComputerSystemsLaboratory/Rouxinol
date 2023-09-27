#include <cstdio>
#include <iostream>
#include <list>

int main()
{
	int n, p;
	while(1){
		std::cin >> n >> p;
		if(n == 0 && p == 0) break;
		int a[50], b, c;
		b = p / n;
		c = p % n;
		for(int i = 0; i < n; i++){
			if(i < c) a[i] = b+1;
			else a[i] = b;
		}
		int start = c, bowl;
		while(1){
			if(a[start] != 0){
				bowl = a[start];
				a[start] = 0;
				b= bowl / n;
				c = bowl % n;
				for(int j = 1; j <=n; j++){
					if(j <= c) a[(start + j)%n] += b+1;
					else a[(start+j)%n] += b;
				}
				start = (start + c) % n;
				if(a[start] == p){
					std::cout << start << std::endl;
					break; 
				}
			}
			start = (start + 1) % n;	
		}
	}
	return 0;
}