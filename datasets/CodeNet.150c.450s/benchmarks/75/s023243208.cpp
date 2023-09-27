#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

void maxHeapify(vector<int> &a, int i, int n){
	int il = (i+1)*2-1, ir = (i+1)*2;
	int largest;
	if(il < n && a.at(il) > a.at(i)) largest = il;
	else largest = i;
	if(ir < n && a.at(ir) > a.at(largest)) largest = ir;
	// if(i == 3){
	// 	cerr << il << " " << ir << " " << a.at(il) << " " << a.at(ir) << " " << largest << endl;
	// }

	if(largest != i){
		swap(a.at(i), a.at(largest));
		maxHeapify(a, largest, n);
	}
}

void buildMaxHeap(vector<int> &a, int n){
	for(int i = n/2-1; i >= 0; i--){
		maxHeapify(a, i, n);
		// rep(i, n){
		// 	cout << " " << a.at(i);
		// }
		// cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	rep(snip_i, n) cin >> a.at(snip_i);
	buildMaxHeap(a, n);
	rep(i, n){
		cout << " " << a.at(i);
	}
	cout << endl;
	return 0;
}
