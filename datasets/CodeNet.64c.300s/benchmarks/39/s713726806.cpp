#include<iostream>
using namespace std;

int main(){
	int n, ans = 0;
	while (cin >> n){
		for (int i = 0; i <= 9; i++){
			for (int j = 0; j <= 9; j++){
				for (int k = 0; k <= 9; k++){
					for (int l = 0; l <= 9; l++){
						if (i + j + k + l == n)
							ans++;
					}
				}
			}
		}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}