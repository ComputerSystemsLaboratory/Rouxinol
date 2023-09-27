#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin >> n && n!=0){
		int sum = 0;
		int ans = 0;
		for(int i=2;i<100;i++){
			for(int j=1;j<1000;j++){
				sum = 0;
				for(int k=j;k<j+i;k++){
					sum +=k;
				}
				if(sum==n)ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}