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

int A[20],n,q,B[200];

bool slove(int i, int m) {
	if (m - A[i] == 0) return true;
	else if(m>0&&i<n)
	return slove(i + 1, m) || slove(i + 1, m - A[i]);
	else return false;
}

int main() {
	cin >> n;
	for (int i = 0;i < n;i++)	cin >> A[i];
	cin >> q;
	for (int i = 0;i < q;i++) {
		cin >> B[i];
		cout << (slove(0, B[i]) ? "yes" : "no") << endl;
	}
}