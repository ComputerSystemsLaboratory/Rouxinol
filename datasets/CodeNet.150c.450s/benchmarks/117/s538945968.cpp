#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

long long cnt;

void print(vector<int> &data){
	for (int i = 0; i < data.size(); ++i){
		cout << data[i];
		if (i == data.size() - 1) cout << endl;
		else cout << " ";
	}
}

vector<int> tmp;

void helper(vector<int> &data, int l, int m, int r){
	for (int i = l; i < r; ++i) tmp[i] = data[i];

	int p1(l), p2(m), p(l);
	while (p1 < m && p2 < r) {
		if (tmp[p1] < tmp[p2]) data[p++] = tmp[p1++];
		else data[p++] = tmp[p2++];
	}

	while (p1 < m)	data[p++] = tmp[p1++];
	while (p2 < r)	data[p++] = tmp[p2++];
	cnt += (r - l);
}

void mergeSort(vector<int> &data, int l, int r){
	if (l+1 < r){
		int m = l + (r - l) / 2;
		mergeSort(data, l, m);
		mergeSort(data, m, r);
		helper(data, l, m, r);
	}
}



int main(){
	int n; cin >> n;
	vector<int> data(n);
	for (int i = 0; i < n; ++i) cin >> data[i];

	tmp.resize(data.size());
	mergeSort(data, 0, data.size());
	print(data);
	cout << cnt << endl;

	return 0;
}