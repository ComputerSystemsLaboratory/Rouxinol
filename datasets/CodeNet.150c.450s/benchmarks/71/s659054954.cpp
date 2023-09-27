#include <iostream>
using namespace std;
int main(){
	int n,ans=0;
	while(cin >> n){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k < 10; k++){
				for(int l = 0; l < 10; l++){
					if(i+j+k+l==n)ans++;
				}
			}
		}
	}
	cout << ans << endl;
	ans=0;
	}
}