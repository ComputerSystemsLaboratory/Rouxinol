#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using st = string;
using P = pair<int, int>;
#define mrep(i, m, n) for(int i = m; i < n; i++)
#define rep(i, n) mrep(i, 0, n)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    /*mrep(i, k, n){
        ll rec = 1;
        ll nowrec = 1;
        mrep(j, i - k, i){
            rec *= a.at(j);
            nowrec *= a.at(j + 1);
        }
        if(nowrec > rec) cout << "Yes" << endl;
        else cout << "No" << endl;
    }*/
	
	mrep(i, k, n){
		if(a.at(i) > a.at(i - k)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
   	return 0;
}