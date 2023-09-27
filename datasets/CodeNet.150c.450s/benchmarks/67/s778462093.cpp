#include <iostream>
using namespace std;

int main(){
	int n, a[1002], s, e, t;
	a[0] = 0;
	for(int i = 1;i <= 1000;i++)a[i] = i;
	while(cin >> n, n){
		s = 1, e = 2, t = 1;
		int ans = 0;
		while(e <= n){
			if(t == n){
				ans++;t += e++;
			}else if(t < n){
				t += e++;
			}else{
				t -= s++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}