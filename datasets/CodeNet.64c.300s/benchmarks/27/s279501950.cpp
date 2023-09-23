#include <iostream>
using namespace std;

int main(void){
	int n = 0;
	int x = 0;
	int count = 0;
	cin >> n >> x;
	while(!(n == 0 && x == 0)){
		count = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				for(int k = 1; k <= n; k++){
					if((i + k + j) == x){
						if(!(i == j || j == k || i == k) && (i < j && j < k)){
							count++;
						}
					}
				}
			}
		}
		cout << count << endl;
		cin >> n >> x;
	}
	return 0;
}