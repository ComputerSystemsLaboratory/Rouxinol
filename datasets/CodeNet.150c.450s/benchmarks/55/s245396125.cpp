#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	string x;
	int N=0;
	while (cin >> x) {
		if (x == "0") {
			break;
		}
		for (int i = 0; i<x.size(); i++) {
			N += x[i] - '0';
		}
		cout << N << endl;
		N = 0;
	}
}