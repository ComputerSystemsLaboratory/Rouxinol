#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
	int n,a,ans=0;
	while(cin >> n){
		rep(i,10){
			rep(j,10){
				rep(k,10){
					a=n-i-j-k;
					if(a>=0 && a<10){
						ans++;
					}
				}
			}
		}
		cout << ans << endl;
		ans = 0;
	}
}