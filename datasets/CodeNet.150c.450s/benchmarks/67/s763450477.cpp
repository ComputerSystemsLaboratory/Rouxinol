#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int res = 0;
		for(int i = 1;i < n;i++){
			for(int j = i;j < n;j++){
				if((i + j) * (j - i + 1) / 2 == n) res++;
			}
		}
		cout << res << endl;
	}
	return 0;
}