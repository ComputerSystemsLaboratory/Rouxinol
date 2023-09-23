#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	int a, d, n, i, j;
	while(1){
		int count = 0;
		long long int b = 0, c = 0;
		int k = 0;
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0) break;
		while(k != n){
			bool yakusu = false;
			if(count == 0){
				b = a;
				if(b == 1){
					count++;
					continue;
				}
				else if(b >= 2){
					for(j = 2;j*j < b+1;j++){
						if(b % j == 0){
							yakusu = true;
							break;
						}
					}
				}
				count++;
				if(!yakusu){
					c = b;
					k++;
					//cout << c <<  " " << "k = " << k << endl;
				}
			}
			else if(count != 0){
				b = a + d*count;
				//cout  << "b = " << b << " d = " << d << " count = " << count << " d*count = " << d*count << endl;
				for(j = 2;j*j < b+1;j++){ 
					if(b % j == 0){
						yakusu = true;
						break;
					}
				}
				count++;
				if(!yakusu){
					c = b;
					k++;
					//cout << c  << " " << "k = " << k << endl;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}