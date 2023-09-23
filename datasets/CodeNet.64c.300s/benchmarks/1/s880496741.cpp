#include <iostream>
#include <algorithm>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
int a[100000];
int partition(int p,int r){
	int k = p-1;
	rep(i,p,r){
		if(a[i] <= a[r]){
			k++;
			swap(a[i],a[k]);
		}
	}
	swap(a[k+1],a[r]);
	return k + 1;
}
int main(){
	int n;
	cin >> n;
	rep(i,0,n) cin >> a[i];
	int q = partition(0,n-1);
	rep(i,0,n){
		if(i == q) cout << "[";
		cout << a[i];
		if(i == q) cout << "]";
		if(i != n-1) cout << " ";
	}
	cout << endl;
	return 0;
}