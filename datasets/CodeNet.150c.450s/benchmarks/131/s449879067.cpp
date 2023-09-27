#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) REP(i, 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)
#define all(v) (v).begin(),(v).end()

string fillzero(string s, int L) {
    int n = L - s.size();
    rep(i, n) s = "0" + s;
    return s;
}

int main() {
	while(1) {
	    string a; cin >> a;
	    int L; cin >> L;
	    if(a=="0" && L==0) break;
	    
	    a = fillzero(a, L);
	    
	    unordered_map<string, int> prev;
	    prev[a] = 0;
	    for(int i=1;; i++) {
	        string amin(a); sort(all(amin));
	        string amax(amin); reverse(all(amax));
	        string tmp = to_string(stoi(amax.c_str()) - stoi(amin.c_str()));
	        tmp = fillzero(tmp, L);
	        // cout << amax << "-" << amin << "=" << tmp << endl;
	        if(prev.count(tmp)) {
	            cout << prev[tmp] << " " << stoi(tmp.c_str()) << " " << i - prev[tmp] << endl;
	            break;
	        }
	        prev[a=tmp] = i;
	    }
	    // cout << "--------" << endl;
	}
}

