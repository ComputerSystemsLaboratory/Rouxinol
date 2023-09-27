#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i,k,n) for(int i = k; i < n; i++)
#define mmax(start, end) *max_element(start, end)
#define mmin(start, end) *min_element(start, end)
#define argmax max_element
#define argmin min_element
#define push push_back
#define pop pop_back
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
typedef string str;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

template<class T = ll> T in() {
    T _in;
    cin >> _in;
    return _in;
}

#define EMAX 10000000

int cost[101][101];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n=in();
    ll d[101];

    rep(i, n) {
        rep(j, n) {
            cost[i][j] = EMAX;
        }
        d[i] = EMAX;
    }

    rep(i, n) {
        int u=in<int>(), k=in<int>();
        rep(j, k) {
            int v=in<int>(), c=in<int>();
            cost[u][v] = c;
        }
    }

    // ノード0からの距離を調べる
    d[0] = 0;
    bool flag = true;
    while(flag) {
        flag=false;
        // 移動する方法のある全ノードからの，次のノードへの移動コストを考える
        rep(i, n) {
            if(d[i] != EMAX) {
                rep(j, n) {
                    if(i == j)
                        continue;
                    int next_c = d[i] + cost[i][j];

                    // 更新できる場合更新
                    if(d[j] > next_c) {
                        d[j] = next_c;
                        flag=true;
                    }
                }
            }
        }
    }

    rep(i, n) {
        cout << i << " " << d[i] << endl;
        // rep(j, n) {
        //     cout << cost[i][j] << " ";
        // }
        // cout << endl;
    }
    
    return 0;
}

