#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long lli;
typedef vector<lli> vll;

lli partition(vll& a,lli p,lli r){
	lli x = a[r];
	lli i = p-1;
	for(lli j = p;j < r;j++){
		if(a[j] <= x){
			i++;
			swap(a[j],a[i]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}

lli n;
vll a;

int main(){
	cin >> n;
	a = vll(n);
	for(lli i = 0;i < n;i++) cin >> a[i];
	lli p = partition(a,0,n-1);
	for(lli i = 0;i < n;){
		if(i == p) cout << "[";
		cout << a[i];
		if(i == p) cout << "]";
		if(++i < n) cout << " ";
		else cout << endl;
	}
	return 0;
}