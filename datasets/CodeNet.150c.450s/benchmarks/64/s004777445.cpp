#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<algorithm>
#include<set>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	int b;
	scanf("%d",&b);
	vector<vector<int>>a(b+1);
	vector<int>c = { 0 };
	a[0] = c;
	for (int d = 1; d <= b; d++) {
		int e;
		scanf("%d", &e);
		for (int f = 0; f < a[d-1].size(); f++) {
			a[d].push_back(a[d-1][f]);
			a[d].push_back(a[d - 1][f] + e);
		}
	}
	set<int>q;
	for (int p : a[b]) {
		q.insert(p);
	}
	int x;
	scanf("%d", &x);
	for (int y = 0; y < x; y++) {
		int z;
		scanf("%d", &z);
		if (q.find(z) == q.end())cout << "no" << endl;
		else cout << "yes" << endl;
	}
}