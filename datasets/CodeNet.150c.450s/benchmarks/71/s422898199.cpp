#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n, a, b, c, d, hasil;
int main(){
	while(cin >> n){
		hasil = 0;
		for(int j = 0; j <= 9; j++){
			for(int k = 0; k <= 9; k++){
				for(int l = 0; l <= 9; l++){
					for(int m = 0; m <= 9; m++){
						if(j + k + l + m == n){
							hasil++;
						}
					}
				}
			}
		}
		cout << hasil << "\n";	
	}
	return 0;
}