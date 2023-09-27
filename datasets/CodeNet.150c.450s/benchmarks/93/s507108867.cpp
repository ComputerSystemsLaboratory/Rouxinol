#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

struct card{
	char m;
	ll num;
};

void merge(vector<card>&b , int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right -mid;
	vector<card> L(n1);
	vector<card> R(n2);
	rep(i, n1){
		L.at(i) = b.at(left+i);
	}
	rep(i, n2){
		R.at(i) = b.at(mid+i);
	}
	card x;
	x.num = 1e18;
	L.push_back(x);
	R.push_back(x);
	int i = 0;
	int j = 0;
	for(int k = left; k <right; k++){
		if(L.at(i).num <= R .at(j).num){
			b.at(k) = L.at(i);
			i++;
		}else{
			b.at(k) = R.at(j);
			j++;
		}
	}
}

void mergesort(vector<card>&b , int left,int right){
	if(left +1 >= right) return;
	int mid = (left + right)/2;
	mergesort(b, left, mid);
	mergesort(b, mid, right);
	merge(b, left, mid, right);
}

int partition(vector<card>&a, int p, int r){
	int i = p-1;
	for(int j = p; j<r; j++){
		if(a.at(j).num <= a.at(r).num){
			i++;
			card x = a.at(i);
			a.at(i) = a.at(j);
			a.at(j) = x;
		}
	}
	card x = a.at(i+1);
	a.at(i+1) = a.at(r);
	a.at(r) = x;
	return i+1;
}

void quicksort(vector<card>&a, int p, int r){
	if(p < r){
		int q = partition(a, p, r);
		quicksort(a, p, q-1);
		quicksort(a, q+1, r);
	}
}

int main(){
	int n;
	cin >> n;
	vector<card> a(n);
	vector<card> b(n);
	rep(i,n){
		char s;
		ll num;
		cin >> s >> num;
		a.at(i).m = s;
		a.at(i).num = num;
		b.at(i).m = s;
		b.at(i).num = num;
	}
	quicksort(a, 0, n-1);
	mergesort(b, 0, n);
	bool judge = true;
	rep(i, n){
		if(a.at(i).m != b.at(i).m){
			judge = false;
		}
	}
	if(judge){
		cout <<"Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	rep(i, n){
		cout << a.at(i).m << " " << a.at(i).num << endl;;
	}
}

