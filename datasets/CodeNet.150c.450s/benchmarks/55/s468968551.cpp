#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s;
	while (cin >> s, s != "0") {
		int sum = 0;
		for (char c : s)sum += c - '0';
		cout << sum << endl;
	}
}