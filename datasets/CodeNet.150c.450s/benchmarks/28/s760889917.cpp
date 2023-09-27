#define _CRT_SECURE_NO_WARNINGS
#include <map>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
typedef long long ll;
using namespace std;

ll w[100000];
ll n, k;

ll f(ll P) {
	vector<ll> track;
	for (int i = 0;i < k;i++) track.push_back(P);
	ll wi=0,ti=0;
	while (ti < k&&wi<n) {
		if (w[wi] <= track[ti]) {
			track[ti] -= w[wi];
			wi++;
		}
		else {
			ti++;
		}
	}
	return wi;
}

int main() {
	cin >> n >> k;
	for (int i = 0;i < n;i++) cin >> w[i];
	ll P;
	ll left = 0, right = 1000000000;
	while(left<right){
		P = (left + right) / 2;
		if (f(P) == n) {
			right = P;
		}
		else if (f(P) < n) {
			left = P+1;
		}
	}
	P = (left + right) / 2;
	while(f(P-1)==n) P--;
	cout << P << endl;
}