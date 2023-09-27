#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;
int W = 5;
int H;
int field[15][6];

int f() {
    int now = 0;
    for(int h = 1; h <= H; h++) {
        //cerr << "h: " << h << endl;
        for(int delta = 5; delta >= 3; delta--) {
            //cerr << "delta : " << delta << endl;
            for(int w = 1; delta + w <= W + 1; w++) {
                //cerr << "w: " << w << endl;
                bool ok = true;
                for(int noww = w + 1; noww <= w + delta - 1; noww++) {
                    if(field[h][noww] != field[h][w]) ok = false;
                }
                if(ok) {
                    now += delta * field[h][w];
                    for(int noww = w; noww <= w + delta - 1; noww++) {
                        field[h][noww] = 0;
                    }
                }
            }
        }
    }
    return now;
}

void drop() {
    /*
    cerr << "before" << endl;
    for(int h = H; h >= 1; h--) {
        for(int w = 1; w <= W; w++) cerr << field[h][w] << " ";
        cerr << endl;
    }
    */
    for(int _ = 1; _ <= 15 * 15; _++) {
    for(int h = H; h >= 2; h--) {
        for(int w = 1; w <= W; w++) {
            if(field[h-1][w] == 0) {
                field[h-1][w] = field[h][w];
                field[h][w] = 0;
            }
        }
    }
    }
    /*
    cerr << "after" << endl;
    for(int h = H; h >= 1; h--) {
        for(int w = 1; w <= W; w++) cerr << field[h][w] << " ";
        cerr << endl;
    }
    */
}

int main() {
    //cout.precision(10);
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(true) {
        cin >> H;
        if(H == 0) break;
        for(int h = H; h >= 1; h--) {
            for(int w = 1; w <= W; w++) cin >> field[h][w];
        }
        int score = 0;
        while(true) {
            int now = f();
            //cerr << score << " "<< now << endl;
            if(now == 0) break;
            score += now;
            drop();
        }
        cout << score << endl;
    }
    return 0;
}
