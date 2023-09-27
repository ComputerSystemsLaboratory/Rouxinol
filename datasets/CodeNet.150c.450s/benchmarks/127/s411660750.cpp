#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int n;
string train;

string rev(string s) {
	return string(s.rbegin(), s.rend());
}

int solve(string train) {
	set<string> s;
	int length = train.size();
	repa(i,1,length-1) {
		string f = train.substr(0, i);
		string b = train.substr(i);
		
		s.insert(f + b);
		s.insert(b + f);
		s.insert(rev(f) + b);
		s.insert(b + rev(f));
		s.insert(f + rev(b));
		s.insert(rev(b) + f);
		s.insert(rev(f) + rev(b));
		s.insert(rev(b) + rev(f));
	}
	return (int)s.size();
}

int main() {
	cin >> n;
	rep(i,n) {
		cin >> train;
		cout << solve(train) << endl;
	}
}