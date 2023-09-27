#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int N;

void maxHeap(vector<ll>& a, ll x){
	int l = x*2;
	int r = x*2+1;
	if(l > N && r > N) return;
	int largest = 0;
	if(l<=N && a[l] > a[x]){
		largest = l;
	}else{
		largest = x;
	}
	if(r<=N && a[r] > a[largest]) largest = r;
	if(largest != x){
		int y = a[x];
		a[x] = a[largest];
		a[largest] = y;
		maxHeap(a, largest);
	}
}

int main(){
	cin >> N;
	vector<ll> a(N+1);
	for(int i = 1;i<= N;i++){
		cin >> a[i];
	}
	for(int i = N/2; i >=1; i--){
		maxHeap(a, i);
	}
	rep(i, N){
		cout <<" " << a[i+1];
	}
	cout << endl;
}

