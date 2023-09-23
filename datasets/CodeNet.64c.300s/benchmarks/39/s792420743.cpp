#include<iostream>
using namespace std;

int main(){
	int i, j, k, l, n, count = 0;
	while(cin >> n){
		count = 0;
		for(i = 0; i <= 9; i++){
			for(j = 0; j <= 9; j++){
				for(k = 0; k <= 9; k++){
					for(l = 0; l <= 9; l++){
						if(i + j + k + l == n){
							count ++;
						}
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}