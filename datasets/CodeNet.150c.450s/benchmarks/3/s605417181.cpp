#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	string str,comand,p;
	int a, b, q, c = 0;
	cin >> str;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> comand >> a >> b;
		if (comand == "print") {
			for (int j = a; j <= b; j++) {
				cout << str[j];
				if (j == b) {
					cout << endl;
				}
			}
		}
		else if (comand == "reverse"){
			reverse(str.begin() + a, str.begin() + b + 1);
		}
		else if (comand == "replace") {
			cin >> p;
			for (int j = a; j <= b; j++) {
				str[j] = p[j-a];
			}
		}
	}
}