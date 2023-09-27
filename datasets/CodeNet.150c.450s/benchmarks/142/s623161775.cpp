#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;cin >> n;
	int k;cin >> k;
	int a[300000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = k; i < n; i++){
		if(a[i-k] < a[i]){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}
