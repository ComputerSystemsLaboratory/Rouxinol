#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
#define PI 3.141592653589

int main(){
    int n, x, a, b, c, num = 0;
	while(1){
		cin >> n >> x;
		if(n == 0 && x == 0)break;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				for(int k = 1;k <= n;k++){
					if(i + j + k == x){
						
						if(i != j && j != k && i != k){
							//cout << i << j << k << endl;
						num++;
						}
					}
				}
			}
		}
		cout << num / 6 << endl;
		num = 0;
	}
	
    return 0;
}