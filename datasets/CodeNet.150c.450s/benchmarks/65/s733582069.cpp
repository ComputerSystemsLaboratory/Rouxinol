#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

template< typename T>
void print(const vector<T> &data) {
	if (data.empty()) return;
	for (int i = 0; i < data.size(); ++i) {
		cout << data[i];
		if (i != data.size() - 1) cout << " ";
		else cout << endl;
	}
}

void bSort(vector<string> &data){
	int n = data.size();
	for (int i = 0; i < n; ++i){
		int count = 0;
		for (int j = n - 1; j > i; --j){
			if (data[j][1] < data[j - 1][1]){
				swap(data[j], data[j - 1]);
				count++;
			}
		}
		if (0 == count) break;
	}
}


void selSort(vector<string> &data){
	int n = data.size();
	for (int i = 0; i < n; ++i){
		int idx = i;
		for (int j = i; j < n; ++j)
			if (data[j][1] < data[idx][1]) idx = j;
		swap(data[idx], data[i]);
	}
}


void insSort(vector<string> &data){
	int n = data.size();
	for (int i = 0; i < n; ++i){
		string tmp = data[i];
		int j = i - 1;
		while ( j >= 0 && (data[j][1] > tmp[1])){
			data[j + 1] = data[j];
			--j;
		}
		data[j + 1] = tmp;
		print(data);
	}
}


int main(){
	int n; cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	vector<string> v1(v); bSort(v1); print(v1); cout << "Stable" << endl;
	vector<string> v2(v); selSort(v2); print(v2);
	
	string res = "Stable";
	for (int i = 0; i < v1.size(); ++i) {
		if (v1[i] != v2[i]) {
			res = "Not stable";
		}
	}
	cout << res << endl;
	return 0;
}