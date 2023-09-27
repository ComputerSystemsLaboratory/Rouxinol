#include<iostream>
using namespace std;

int p[6] = {500, 100, 50, 10, 5, 1};

int main(){
	int n;
	while(cin >> n, n){
		int ans = 0;
		n = 1000 - n;

		for(int i=0; i < 6; i++){
			ans += n / p[i];
			n -= n / p[i] * p[i];
		}
		cout << ans << endl;
	}
}