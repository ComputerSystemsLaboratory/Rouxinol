#include <iostream>
#include <algorithm>

using namespace std;

int n,k,w[100000];

bool enough(int p) {
	int t = 0;
	int remain = 0;
	for(int i = 0;i < n;i++) {
		if(w[i] > remain) {
			t++;
			remain = p;
		}
		remain -= w[i];
	}
	return t <= k;
}

int main() {
	int least=0,most=1000000001;
	cin >> n >> k;
	for(int i = 0;i < n;i++) {
		cin >> w[i];
		least = max(least,w[i]);
	}
	while(least != most) {
		int middle = (least + most) / 2;
		if(enough(middle)){
			most = middle;
		} else {
			least = middle + 1;
		}
	}
	cout << least << endl;
}

