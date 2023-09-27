#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	vector<pair<int, string> > v;
	string s;
	getline(cin, s);
	string ret = "";
	while(s.size() != 0){
		int n = 0;
		while(n < s.size() && s[n] != ' ') n++;
		string t = s.substr(0, n);
		bool b = false;
		for(int i=0; i < v.size(); i++) if(v[i].second == t){b = true; v[i].first++; break;}
		if(!b) v.push_back(make_pair(1, t));
		if(t.size() > ret.size()) ret = t;
		if(n == s.size()) break;
		s = s.substr(n+1);
	}
	sort(v.begin(), v.end(), greater<pair<int, string> >());
	cout << v[0].second << " ";
	cout << ret << endl;
}