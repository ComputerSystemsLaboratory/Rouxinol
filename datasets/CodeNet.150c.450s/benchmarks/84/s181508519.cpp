#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

ll Inversion = 0;

void mergekai(vector<ll>& a, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	vector<ll> L(n1);
	vector<ll> R(n2);
	rep(i, n1){
		L.at(i) = a.at(left +i);
	}
	L.push_back(1e10);
	rep(i, n2){
		R.at(i) = a.at(mid + i);
	}
	R.push_back(1e10);
	int i = 0;
	int j = 0;
	for(int k = left; k < right; k++){
		if(L.at(i) > R.at(j)){
			a.at(k) = R.at(j);
			j++;
			Inversion += n1 -i;
		}else{
			a.at(k) = L.at(i);
			i++;
		}
	}
}

void mergesort(vector<ll>& a, int left, int right){
	if(left+1 >= right) return;
	int mid = (left+right)/2;
	mergesort(a, left, mid);
	mergesort(a, mid,right);
	mergekai(a, left, mid, right);
}

int main(){
	int n;
	cin >> n;
	vector<ll> a(n);
	rep(i, n){
		cin >> a.at(i);
	}
	mergesort(a, 0, n);
	cout << Inversion << endl;
}

