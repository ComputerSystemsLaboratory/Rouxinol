#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pi pair<int, int>
#define f first
#define s second

const int mxn = 200, k = 63;
int n;
ll a[mxn], b[mxn];
ll dp[k];

void answer(){
	cin >> n;
	
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		char c;
		cin >> c;
		b[i] = c & 1;
	}
	
	reverse(a, a + n);
	reverse(b, b + n);
	
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < n; i++){
		if(!b[i]){
			for(int j = 0; j < k; j++){
				if((a[i] >> j) & 1){
					if(!dp[j]){
						dp[j] = a[i];
						break;
					}else{
						a[i] ^= dp[j];
					} 
				}
			}
		}else{
			for(int j = 0; j < k; j++){
				if((a[i] >> j) & 1) a[i] ^= dp[j];
			}
			if(a[i]){
				cout << 1 << endl;
				return;
			}
		}
	}
	
	cout << 0 << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++) answer();

	return 0;
}