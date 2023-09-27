#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int partition(v1& a, int p, int r){
	int x = a.at(r);
	int i = p-1;
	rep(j, r){
		if(a.at(j) <= x){
			i++;
			int c = a.at(i);
			a.at(i) = a.at(j);
			a.at(j) = c;
		}
	}
	int c = a.at(i+1);
	a.at(i+1) = a.at(r);
	a.at(r) = c;
	return i+1;
}

int main(){
	int n;
	cin >> n;
	v1 a(n);
	rep(i, n){
		cin >> a.at(i);
	}
	int c = partition(a, 0, n-1);
	rep(i, n){
		if(i == c) cout << "[";
		cout << a.at(i);
		if(i == c) cout << "]";
		if(i == n-1){
			cout << endl;
		}else{
			cout << " ";
		}
	}
}

