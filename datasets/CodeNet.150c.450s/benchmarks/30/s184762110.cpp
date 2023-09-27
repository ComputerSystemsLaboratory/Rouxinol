#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,o,u) for(int i = o;i <= u; i++)
using namespace std;

int a[101];
int main(){
	int n;
	cin >> n;
	rep(i,1,n) cin >> a[i];
	int ans = 0;
	rep(i,1,n){  
		int mn = i;
		rep(j,i+1,n){
			if(a[mn] > a[j]){
				mn = j;
			}
		}
		swap(a[i],a[mn]);
		if(i != mn){
			ans++;
		}
	}
	rep(i,1,n){ cout << a[i];if(i != n) cout << " ";}
	cout << endl;
	cout << ans << endl;
	return 0;
}