#include<iostream>
using namespace std;
long long n, m;
long long a[100000];
bool search(long long v);
int main(){

	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l, r;
	l = 0; r = 100000 * 10000;
	while (r-l>1){
		long long mi = (l + r) / 2;
		if (search(mi))r = mi;
		else l = mi;
	}
		cout << r << endl;
}
bool search(long long v){
	long long n2=0, m2=0,b=0;
	while (n2 < n&&m2 < m){
		if (b + a[n2] <= v){
			b += a[n2];
			n2++;
		}
		else{
			b = 0;
			m2++;
		}
	}
	if (n2 == n&&m2 < m)return true;
	return false;
}