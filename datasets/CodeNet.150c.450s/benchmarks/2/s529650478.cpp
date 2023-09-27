#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
//using ll = long long;
using namespace std;

int partition(vector<int> &a, int p, int r){
	r--;
	int x = a.at(r);
	int i = p;
	for(int j = p; j < r; j++){
		if(a.at(j) <= x){
			swap(a.at(i), a.at(j));
			i++;
		}
	}
	swap(a.at(i), a.at(r));
	
	return i;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a.at(i);
	int index = partition(a, 0, n);
	rep(i, n){
		if(i != 0) cout << " ";
		if(i != index) cout << a.at(i);
		else cout << "[" << a.at(i) << "]";
	}
	cout << endl;
	
	return 0;
}
