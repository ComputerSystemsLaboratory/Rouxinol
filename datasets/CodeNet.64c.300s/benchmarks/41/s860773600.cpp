#include<bits/stdc++.h>
#define pb push_back
#include <string> 
using namespace std;
const int N = 1000000;
int n, a[N];
void heapify(int i){
	int l = 2 * i + 1, r = l + 1;
	int pv = i;
	if(l < n && a[l] > a[pv]) pv = l;
	if(r < n && a[r] > a[pv]) pv = r;
	if(i != pv){
		swap(a[i], a[pv]);
		heapify(pv);
	}
}
void solve(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = n / 2 - 1; i >= 0; i--){
		heapify(i);
	}
	for(int i = 0; i < n; i++) cout << " " << a[i];
	cout << endl;
}
int main(void){
	solve();
	return 0;
}
