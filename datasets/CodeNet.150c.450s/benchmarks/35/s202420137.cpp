#include <iostream>
#include <cstdio>
using namespace std;

long long a[5000];

int main(){
	int n;
	while(cin >> n && n){
		long long ans = -1e9;
		for(int i = 0 ; i < n ; i++) cin >> a[i] , ans = max(ans, a[i]);
		long long sub = 0;
		for(int i = 0 ; i < n ; i++){
			sub += a[i];
			if( sub < 0 ){
				sub = 0;
			}else{
				ans = max(ans,sub);
			}
		}
		cout << ans << endl;
	}
}