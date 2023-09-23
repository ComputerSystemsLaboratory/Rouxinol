#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin >> n, n){
		int res = 0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int sum = (i+j)*(j-i+1)/2;
				if(sum == n){
					res++;
				}
			}
		}
		cout << res << endl;
	}
}