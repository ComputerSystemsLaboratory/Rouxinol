#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

map<char, int>mp1{
	{'m',1000},{'c',100},{'x',10},{'i',1}
};
map<int, char>mp2{
	{1000,'m'},{100,'c'},{10,'x'},{1,'i'}
};
int d[]{ 1000,100,10,1 };

int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		string s1, s2; cin >> s1 >> s2;
		int cnt = 0;
		int sum = 0;
		for (char c : s1) {
			if (isalpha(c)) {
				if (cnt)sum += mp1[c] * cnt;
				else sum += mp1[c];
				cnt = 0;
			}
			else cnt = c - '0';
		}
		cnt = 0;
		for (char c : s2) {
			if (isalpha(c)) {
				if (cnt)sum += mp1[c] * cnt;
				else sum += mp1[c];
				cnt = 0;
			}
			else cnt = c - '0';
		}
		string ans;
		rep(j, 4) {
			if (sum >= d[j]){
				if (sum / d[j] > 9) {
					(ans += '9') += mp2[d[j]];
					sum -= d[j] * 9;
					continue;
				}
				if (sum / d[j] > 1)ans += to_string(sum / d[j]) + mp2[d[j]];
				else ans += mp2[d[j]];
				sum %= d[j];
			}
		}
		cout << ans << endl;
	}
}