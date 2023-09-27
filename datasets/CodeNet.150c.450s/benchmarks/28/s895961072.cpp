#include<iostream>
using namespace std;

int n, k, w[100010];

bool ok(int P){
	int l = 0,p, count = 0;
	for (;;){
		p = P;
		while (p - w[l] > 0){
			if (l == n - 1)return true;
			p = p - w[l];
			l++;
		}
		count++;
		if (count == k)return false;
	}
}

int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> w[i];
	int l = 0, h = 1e9;
	while (l + 1 < h){
		int mid = (l + h) / 2;
		if (ok(mid))h = mid;
		if (!ok(mid))l = mid;
	}
	cout << l << endl;
}