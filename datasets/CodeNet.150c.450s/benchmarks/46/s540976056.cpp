#include<iostream>
using namespace std;
int main(){
	int n, x,a,N;
	
	while (1){
		N = 0;
		cin >> n >> x;
		if (n == 0 && x == 0)break;
		for (int i = 1; i < n + 1; i++){
			for (int j = 1; j < n + 1; j++){
				for (int k = 1; k < n + 1; k++){
					a = i + j + k;
					if (i < j&&j < k&&a == x){
						N++;

					}
				}
			}
		}
		cout << N << endl;
	}
	

























	return 0;
}