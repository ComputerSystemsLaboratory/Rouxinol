#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int main(){
	int n;
	cin >> n;
	v1 a(n+1);
	rep(i,n){
		cin >> a[i+1];
	}
	for(int i = 1; i<n+1; i++){
		int b = i*2;
		int c = i*2 +1;
		int p = i/2;
		cout << "node " << i << ": key = " << a[i] << ", ";
		if(p >0) cout <<"parent key = " << a[p] << ", ";
		if(b <=n) cout << "left key = " << a[b] << ", ";
		if(c<=n) cout << "right key = " << a[c] << ", ";
		cout <<endl;
	}
}

