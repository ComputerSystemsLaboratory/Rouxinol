#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int x, y, s;
	while(1){
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0) break;
		int i, a, b, c;
		int sum1 = 0, sum2 = 0;
		
		for(i = 1;i < s;i++){
			for(int j = 1;j < s;j++){
				sum1 = (i * (100+x) / 100) + (j * (100+x) / 100);
				if(sum1 == s){
					sum1 = (i * (100+y) / 100) + (j * (100+y) / 100);
					if(sum1 > sum2){
						sum2 = sum1;
					}
				} 
			}
		}


		cout << sum2 << endl;
	}

	return 0;
}