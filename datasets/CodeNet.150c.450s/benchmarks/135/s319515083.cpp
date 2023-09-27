#include <bits/stdc++.h>
using namespace std;

int n, m;
int W[1500], H[1500];
vector<int> hh;
vector<int> ww;

void solve(int N, int M) {
    hh.clear();
    ww.clear();
    for(int i = 0; i < N; i++) {
        cin >> W[i];
    }
    for(int i = 0; i < M; i++) {
        cin >> H[i];
    }

    for(int i = 0; i < N; i++) {
        int now = 0;
        for(int j = i + 1; j <= N; j++) {
            now += W[j - 1];
            ww.push_back(now);
        }
    }

    for(int i = 0; i < M; i++) {
        int now = 0;
        for(int j = i + 1; j <= M; j++) {
            now += H[j - 1];
            hh.push_back(now);
        }
    }

    sort(ww.begin(), ww.end());
    sort(hh.begin(), hh.end());

    int ans = 0;
    for(int wi = 0, hi = 0; wi < ww.size() && hi < hh.size(); wi++, hi++) {
        while(wi < ww.size() && hi < hh.size() && ww[wi] != hh[hi]) {
            if(hh[hi] < ww[wi])
                hi++;
            else
                wi++;
        }

        if(wi < ww.size() && hi < hh.size() && ww[wi] == hh[hi]) {
            int wc = 1, hc = 1;
            int v = ww[wi];
            while(wi < ww.size() - 1 && ww[wi + 1] == v) {
                wi++;
                wc++;
            }
            while(hi < hh.size() - 1 && hh[hi + 1] == v) {
                hi++;
                hc++;
            }
            ans += wc * hc;
        }
    }
    cout << ans << endl;
}

int main() {
    while(true) {
        cin >> n >> m;
        if(n == m && n == 0)
            break;
        solve(n, m);
    }
}
