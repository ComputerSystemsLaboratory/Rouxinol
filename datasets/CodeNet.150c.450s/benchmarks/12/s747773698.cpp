#include<bits/stdc++.h>
#define pb push_back
#include <string> 
using namespace std;
const int N = 1000000;
int n, a[N];

void solve(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int l = 2 * i + 1, r = 2 * i + 2, pa = (i - 1) / 2;
		string s = "node " + to_string(i + 1) + ": ";
		s += "key = " + to_string(a[i]) + ", ";
		if(pa >= 0 && pa != i){
			s += "parent key = " + to_string(a[pa]) + ", ";
		}
		if(l < n){
			s += "left key = " + to_string(a[l]) + ", ";
		}
		if(r < n){
			s += "right key = " + to_string(a[r]) + ", ";
		}
		cout << s << endl;
	}
}
int main(void){
	solve();
	return 0;
}
