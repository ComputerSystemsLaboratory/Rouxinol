#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int MAX_TIME = 24*60*60 + 1;

int calcTime(string s){
    int ret = (s[0] - '0') * 60 * 60 * 10;
    ret += (s[1] - '0') * 60 * 60;
    ret += (s[3] - '0') * 60 * 10;
    ret += (s[4] - '0') * 60;
    ret += (s[6] - '0') * 10;
    ret += (s[7] - '0');
    return ret;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> ims(MAX_TIME, 0);
        rep(i,n){
            string s;
            cin >> s;
            ims[calcTime(s)]++;
            cin >> s;
            ims[calcTime(s)]--;
        }
        int ans = 0;
        rep(i,MAX_TIME-1){
            ims[i+1] += ims[i];
            chmax(ans, ims[i]);
        }
        cout << ans << endl;
    }
	return 0;
}
