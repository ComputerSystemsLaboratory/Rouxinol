/*
 * ALDS1_4_D.cpp
 *
 *  Created on: Apr 27, 2018
 *      Author: 13743
 */
#include<iostream>

using namespace std;

int minP = 99999999;
int maxW = 0;
int n, q;
int w[100000];

void bruteForce(int prev, int k, int maxL) {
	if(k == 0 || prev == n-1) {
		int la = 0;
		for(int i=prev+1; i<n; i++) {
			la += w[i];
		}
		int mi = (la>maxL) ? la : maxL;
		minP = (mi < minP) ? mi : minP;
		return;
	}
	int sum = 0;
	for(int i=prev+1; i<n; i++) {
		sum += w[i];
		if(sum > minP) return;
		if(i < n-1 && (sum+w[i+1] <= maxL)) {
			continue;
		}
		if(i < n-1 && (sum+w[i+1] <= maxW)) {
			continue;
		}
		bruteForce(i, k-1, (sum>maxL) ? sum : maxL);
	}
}

bool greedyPuck(int P) {
	int cnt = 0;
	int lw = 0;
	for(int i=0; i<n; i++) {
		lw += w[i];
		if(lw == P) {
			lw = 0; cnt++;
		}
		else if(lw > P) {
			lw = 0; cnt++; i--;
		}
	}
	if(lw > 0) cnt++;
	if(cnt <= q) return true;
	return false;
}

int main() {
	cin >> n >> q;
	int sum = 0;
	for(int i=0; i<n; i++) {
		cin >> w[i];
		maxW = (w[i] > maxW) ? w[i] : maxW;
		sum += w[i];
	}

//	bruteForce(-1, q-1, 0);
	int l = maxW;
	int r = sum + 1;
	minP = sum;
	while(l < r) {
		int mid = (l + r) / 2;
		if(greedyPuck(mid)) {
			minP = mid;
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}

	cout << minP << endl;
}

