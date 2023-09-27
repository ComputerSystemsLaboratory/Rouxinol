#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,o,u) for(i = o;i < u; i++)
using namespace std;

int a[101];
int main(){
	int n;
	int i,j;
	cin >> n;
	rep(i,0,n) cin >> a[i];
	int ans = 0;
	rep(i,0,n-1){
		rep(j,0,n-1-i){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
				ans++;
			}
		}
	}
	rep(i,0,n-1) cout << a[i]  << " ";
	cout << a[n-1] << endl;
	cout << ans << endl;
	return 0;
}