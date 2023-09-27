#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep3(i, l, n) for (int i = l; i < n; ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define out(a) cout << a << endl
#define SZ(v) (int)v.size()
#define inf (int)(1e9+7)


int main() {
    int h, w;
    while (cin >> h >> w && h) {
        int dia = h * h + w * w;
        //out(dia);
        int tmp = inf;
        int a = 151, b = 151;
        int aa = 151, bb = 151;
        //制約大事よ
        rep3(i, 1, 150 + 1) {
            rep3(j, i + 1, 150 + 1) {
                int dia2 = i * i + j * j;
                if (dia2 > dia && dia2 < tmp) {
                    a = i; b = j; tmp = dia2;
                    //out(i << " " << j << " " << tmp);
                } else if (dia2 == dia && h < i && i < aa) {
                    a = i; b = j; tmp = dia2;
                    aa = i; bb = j;
                }
            }
        }
        out(a << " " << b);
    }
}

