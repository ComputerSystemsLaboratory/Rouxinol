#include<iostream>
using namespace std;
int main(){
	int n, cnt;
	
	while(cin >> n){
		bool prime[1000000] = {false};
		prime[1] = true; //1???????????\
		
		// ??¨??????????????????????????????
		for(int j = 2; j*j <= n; j++){
			if(prime[j] == false){
				for(int k = j; k*j <= n; k++){
					prime[j*k] =true;
				}
			}
		}
		cnt = 0;
		for(int i = 1; i <= n; i++){
			if(prime[i] == false) cnt++;
		}
		
		cout << cnt << endl;
	}
}