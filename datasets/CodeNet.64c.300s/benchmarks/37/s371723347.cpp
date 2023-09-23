#include <iostream>

using namespace std;

int main(){
	int n;
	
	while(cin >> n, n){
		int ans = 0, temp = n;
		
		for(int i = n - 1; i > 0; i--){
				for(int j = i; j > 0; j--){
					temp -= j;
					if(temp == 0){
						ans++;
						break;
					}else if(temp < 0){
						break;
					}
				}
				
				temp = n;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}