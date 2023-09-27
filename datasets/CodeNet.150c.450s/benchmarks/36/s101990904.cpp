#include <bits/stdc++.h>
using namespace std;

int main(){
	int d;
	while(cin >> d){
		long long ans = 0;
		for(int i = d ; i < 600 ; i+=d){
			ans += d * i * i; 
		}
		cout << ans << endl;
	}
}