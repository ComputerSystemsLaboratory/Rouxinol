#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int h, w;
vector< vector<int> > senbei(15, vector<int>(10100, 0));
vector<ll> senbeicnt(10100, 0);     // 表の枚数が入っている
vector<ll> osenbeicnt(10100, 0);
vector<int> hcheck(15, 0);

int main() {
    while(1) {
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                cin >> senbei.at(i).at(j);
            }
        }
        for(int j = 0; j < w; ++j) senbeicnt.at(j) = 0;
        for(int j = 0; j < w; ++j) {
            for(int i = 0; i < h; ++i) {
                if(senbei.at(i).at(j)) senbeicnt.at(j)++;
            }
        }

        ll ans = 0;
        for(int bit = 0; bit < (1<<h); ++bit) {
            ll sum = 0;
            osenbeicnt = senbeicnt;
            for(int i = 0; i < h; ++i) {
                if(bit&(1<<i)) hcheck.at(i) = 1;
                else hcheck.at(i) = 0;
            }
            for(int i = 0; i < h; ++i) {
                if(hcheck.at(i)) {
                    // 横一列裏返す
                    for(int j = 0; j < w; ++j) {
                        if(senbei.at(i).at(j)) osenbeicnt.at(j)--;
                        else osenbeicnt.at(j)++;
                    }
                }
            }

            for(int j = 0; j < w; ++j) {
                ll omote = osenbeicnt.at(j);
                ll ura = h-omote;
                sum += max(omote, ura);
            }
            chmax(ans, sum);
        }
        cout << ans << endl;
    }
}
