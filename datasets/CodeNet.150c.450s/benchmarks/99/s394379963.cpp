#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

map<string, int> m;

string itos(int number) {
     stringstream ss;
     ss << number;
     return ss.str();
}


int cal(string s){
	int ret = 0;
	rep(i, s.size()){
		int n = 1;
		if(isalpha(s[i])) ret += m[s.substr(i, 1)];
		else{ ret += stoi(s.substr(i, 1)) * m[s.substr(i+1, 1)]; i++;}
	}
	return ret;
}

int main(){
	m["m"] = 1000; m["c"] = 100; m["x"] = 10; m["i"] = 1;
	int p;
	cin >> p;
	rep(q, p){
		string s, t;
		cin >> s >> t;
		int ret = cal(s) + cal(t);
		string r;
		if(ret / 1000 != 0){if(ret/1000 > 1) r += itos(ret/1000); r +=  "m"; ret -= 1000*(ret/1000);}
		if(ret / 100 != 0){if(ret/100 > 1) r += itos(ret/100);r += "c"; ret -= 100*(ret/100);}
		if(ret / 10 != 0){if(ret/10 > 1) r += itos(ret/10);r +="x"; ret -= 10*(ret/10);}
		if(ret / 1 != 0){if(ret/1 > 1) r += itos(ret/1);r += "i"; ret -= 1*(ret/1);}
		cout << r << endl;
	}
}