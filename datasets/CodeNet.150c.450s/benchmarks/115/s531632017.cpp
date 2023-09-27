// Longest Common Subsequence

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
#define MAX 1001

int make_lcs(string x, string y) {
	int lcs[MAX][MAX] = {};
	x = ' ' + x;
	y = ' ' + y;
	for (unsigned int i=0;i<x.length();i++) {
	for (unsigned int j=0;j<y.length();j++) {
	if (i!=0 && j!=0) {
	if (x[i] == y[j]) {
	lcs[i][j] = lcs[i-1][j-1] + 1;
	}
	else {
	lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
	}
	}
	}
	}
	return lcs[x.length()-1][y.length()-1];
}
int main() {
	int n;
	string x,y;
	cin >> n;
	for (int k=0;k<n;k++) {
	cin >> x >> y;
	cout << make_lcs(x,y) << endl;
	}
	return 0;
}	