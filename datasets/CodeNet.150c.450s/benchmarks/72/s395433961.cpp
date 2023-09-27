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
	string a;
	getline(cin, a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 'a'&&a[i] <= 'z') {
			a[i] += 'A' - 'a';
		}
		else if (a[i] >= 'A'&&a[i] <= 'Z') {
			a[i] -= 'A' - 'a';
		}
	}
	cout << a << endl;
}