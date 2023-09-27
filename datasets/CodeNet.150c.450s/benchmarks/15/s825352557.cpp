#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,q;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> q;
	int b[q];
	int ans=0;
	for(int i=0;i<q;i++){
		cin >> b[i];
		for(int j=0;j<n;j++){
			if(b[i] == a[j]){
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;

	return 0;
}

