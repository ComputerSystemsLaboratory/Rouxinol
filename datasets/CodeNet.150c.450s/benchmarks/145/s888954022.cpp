#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;

map<string, int>mp;
int main() {
	string s; getline(cin, s);
	istringstream iss(s);
	int Max = 0; string Max_st;
	while (getline(iss, s, ' ')) {
		mp[s]++;
		if (s.size() > Max) { Max = s.size(); Max_st = s; }
	}
	int MAX = 0; string MAX_st;
	for (auto i : mp) {
		if (i.second > MAX) { MAX = i.second; MAX_st = i.first; }
	}
	cout << MAX_st << ' ' << Max_st << endl;
	return 0;
}