#include<bits/stdc++.h>
using namespace std;
long long bigMod(long long b, long long p, long long m){
	if (p == 1) return b%m;
	else if (p & 1){
		return ((b%m) * bigMod(b, p-1, m))%m;
	} else {
		return ((bigMod(b,p>>1,m))*(bigMod(b,p>>1,m)))%m;
	}
}
int main(){
	long long m,n;
	cin >> m >> n;
	cout << bigMod(m, n, 1000000007) << endl;
}
