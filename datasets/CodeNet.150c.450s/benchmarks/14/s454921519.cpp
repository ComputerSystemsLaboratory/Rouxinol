#include <cstdio>
#include <iostream>
using namespace std;

int main(void){
		int n;
		scanf("%d", &n);
		int i = 0;
		while(++i <= n){
				int x = i;
				if(x % 3 == 0){
						cout << " " << i;
						continue;
				}
				while(x){
						if(x  % 10 == 3){
								cout << " " << i;
								break;
						}
						x /= 10;
				}
		}
		printf("\n");
		return 0;
}

