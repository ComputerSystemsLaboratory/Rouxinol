//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

int main() {
    while(1) {
        int h;
        cin >> h;
        if(!h) break;
        vector<queue<int> > qq(5);
        vector<stack<int> > qqq(5);
        rep(i, h) {
            int a, s, d, f, g;
            cin >> a >> s >> d >> f >> g;
            qqq[0].push(a);
            qqq[1].push(s);
            qqq[2].push(d);
            qqq[3].push(f);
            qqq[4].push(g);
        }
        rep(j, h) {
            rep(i, 5) {
                qq[i].push(qqq[i].top());
                qqq[i].pop();
            }
        }

        int ans = 0;

        while(1) {
            int ssi = qq.size();
            bool hantei = true;
            bool up = false;
            
            vi ssum(5);
            rep(i, h) {
                vi num(10);
                rep(j, ssi) {
                    if(qq[j].front() == 1000) continue;
                    num[qq[j].front()]++;
                }
                int gg = -1;
                rep(j, 10) {
                    if(num[j] > 2) {
                        gg = j;
                        break;
                    }
                }
                if(!((qq[0].front() == qq[1].front() && qq[2].front() == qq[1].front()) || (qq[2].front() == qq[1].front() && qq[2].front() == qq[3].front()) || (qq[4].front() == qq[3].front() && qq[2].front() == qq[4].front()))) {
                    gg = -1;
                }
                if(gg != -1) {
                    ans += gg * num[gg];
                    if(num[gg] == 4 && (qq[1].front() != gg)) {
                        ans -= gg;
                        qq[0].push(qq[0].front());
                    }
                    if(num[gg] == 4 && (qq[3].front() != gg)) {
                        ans -= gg;
                        qq[4].push(qq[4].front());
                    }
                }
                rep(j, ssi) {
                    int bb = qq[j].front();
                    qq[j].pop();
                    if(gg != bb) {
                        qq[j].push(bb);
                    } else {
                        if(qq[j].size() == h) continue;
                        ssum[j]++;
                        up = true;
                    }
                }
            }
            rep(i, 5) {
                rep(j, ssum[i]) {
                    qq[i].push(1000);
                }
            }
            if(!up) hantei = false;
            if(!hantei) break;
        }

        
        cout << ans << '\n';
    }
}
