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


int partition(vector<int> &data, int p, int r){
	int p1 = p - 1;
	int p2 = p;
	int v = data[r];

	while (p2 < r) {
		if (data[p2] <= v)
			swap(data[++p1], data[p2]);
		p2++;
	}
	swap(data[++p1], data[r]);

	return p1;
}



int main(){
	int n; cin >> n;
	vector<int> data(n);
	for (int i = 0; i < n; ++i) cin >> data[i];

	int pos = partition(data, 0, data.size() - 1);
	//print(data);
	for (int i = 0; i < data.size(); ++i){
		if (i == pos) cout << "[";
		cout << data[i];
		if (i == pos) cout << "]";
		if (i == data.size() - 1) cout << endl;
		else cout << " ";
	}

	return 0;
}