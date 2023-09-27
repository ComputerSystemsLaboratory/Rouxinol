#include <iostream>

using namespace std;

bool flag[10000001];

int main(){
	int n = 0, ans = 0;
	
	for (int i = 0; i <= 1000000; i++){
		if (i <= 1) flag[i] = false;
		else flag[i] = true;
	}
	for (int i = 2; i <= 1001; i++){
		if(flag[i] == true){
			for(int j = i * 2; j <= 1000000; j += i){
				flag[j] = false;
			}
		}
	}
	while(cin >> n){
		ans = 0;
		for(int i = 0; i <= n; i++){
			if(flag[i] == true){
				ans++;
			}
		}
		cout << ans << endl;
	}
 }