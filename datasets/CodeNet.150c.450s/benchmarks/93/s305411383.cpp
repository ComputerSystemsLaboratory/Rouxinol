#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
//using ll = long long;
using namespace std;

const int INF = 1001001001;
int co = 0;

void merge(vector<pair<char, int> > &a, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	vector<pair<char, int> > l(n1+1), r(n2+1);
	rep(i, n1) l.at(i) = a.at(left+i);
	rep(i, n2) r.at(i) = a.at(mid+i);
	l.at(n1).second = r.at(n2).second = INF;
	int i = 0, j = 0;
	for(int k = left; k < right; k++){
		co++;
		if(l.at(i).second <= r.at(j).second){
			a.at(k) = l.at(i);
			i++;
		}else{
			a.at(k) = r.at(j);
			j++;
		}
	}
}

void mergeSort(vector<pair<char, int> > &a, int left, int right){
	if(left + 1 < right){
		int mid = (left+right)/2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}

int partition(vector<pair<char, int> > &a, int p, int r){
	r--;
	int x = a.at(r).second;
	int i = p;
	for(int j = p; j < r; j++){
		if(a.at(j).second <= x){
			swap(a.at(i), a.at(j));
			i++;
		}
	}
	swap(a.at(i), a.at(r));
	
	return i;
}

void quicksort(vector<pair<char, int> > &a, int p, int r){
	if(p < r){
		int q = partition(a, p, r);
		quicksort(a, p, q);
		quicksort(a, q+1, r);
	}
}

int main(){
	int n;
	cin >> n;
	vector<pair<char, int> > a(n);
	vector<pair<char, int> > ma;
	rep(snip_i, n) cin >> a.at(snip_i).first >> a.at(snip_i).second;
	ma = a;
	quicksort(a, 0, n);
	mergeSort(ma, 0, n);
	bool stable = true;
	rep(i, n){
		if(a.at(i) != ma.at(i)){
			stable = false;
			break;
		}
	}
	if(stable == true) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	rep(i, n){
		cout << a.at(i).first << " " << a.at(i).second << endl;
	}
	return 0;
}
