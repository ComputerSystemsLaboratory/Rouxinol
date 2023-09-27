#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int h;
int puzzle[10][30];

void print_p() {
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 20; ++j) {
            cout << puzzle[i][j] << " ";
        }
        cout << endl;
    }
}

bool flg5(int t) {
    bool ch = true;
    for(int i = 1; i < 5; ++i) {
        if(puzzle[i][t] != puzzle[i-1][t]) ch = false;
    }
    if(puzzle[0][t] == -1 || puzzle[0][t] == 0) false;
    return ch;
}

bool flg4(int t) {
    bool ch = false;
    if(puzzle[0][t] == puzzle[1][t] && puzzle[1][t] == puzzle[2][t] && puzzle[2][t] == puzzle[3][t] && puzzle[0][t] != -1 && puzzle[0][t] != 0) ch = true;
    if(puzzle[1][t] == puzzle[2][t] && puzzle[2][t] == puzzle[3][t] && puzzle[3][t] == puzzle[4][t] && puzzle[4][t] != -1 && puzzle[4][t] != 0) ch = true;
    return ch;
}

bool flg3(int t) {
    bool ch = false;
    if(puzzle[0][t] == puzzle[1][t] && puzzle[1][t] == puzzle[2][t] && puzzle[0][t] != -1 && puzzle[0][t] != 0) ch = true;
    if(puzzle[1][t] == puzzle[2][t] && puzzle[2][t] == puzzle[3][t] && puzzle[1][t] != -1 && puzzle[1][t] != 0) ch = true;
    if(puzzle[2][t] == puzzle[3][t] && puzzle[3][t] == puzzle[4][t] && puzzle[2][t] != -1 && puzzle[2][t] != 0) ch = true;
    return ch;
}

int calc_score() {
    // 左から連鎖をチェックする
    int ret = 0;
    for(int j = 0; j < h; ++j) {
        if(flg5(j)) {
            // 5連鎖
            ret += 5*puzzle[0][j];
            for(int i = 0; i < 5; ++i) {
                puzzle[i][j] = -1;
            }
        }else {
            if(flg4(j)) {
                // 4連鎖
                if(puzzle[0][j] == puzzle[1][j]) {
                    ret += 4*puzzle[0][j];
                    for(int i = 0; i < 4; ++i) {
                        puzzle[i][j] = -1;                 
                    }
                }else {
                    ret += 4*puzzle[1][j];
                    for(int i = 1; i < 5; ++i) {
                        puzzle[i][j] = -1;
                    }
                }
            }else {
                if(flg3(j)) {
                    // 3連鎖
                    if(puzzle[0][j] == puzzle[1][j] && puzzle[1][j] == puzzle[2][j]) {
                        ret += 3*puzzle[0][j];
                        for(int i = 0; i < 3; ++i) {
                            puzzle[i][j] = -1;
                        }
                    }else if(puzzle[1][j] == puzzle[2][j] && puzzle[2][j] == puzzle[3][j]) {
                        ret += 3*puzzle[1][j];
                        for(int i = 1; i < 4; ++i) {
                            puzzle[i][j] = -1;
                        }
                    }else {
                        ret += 3*puzzle[2][j];
                        for(int i = 2; i < 5; ++i) {
                            puzzle[i][j] = -1;
                        }
                    }
                }
            }
        }
    }
    return ret;
}

void shift_left() {
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < h; ++j) {
            if(puzzle[i][j] == -1) {
                for(int k = 0; ; ++k) {
                    if(puzzle[i][j+k] != -1) {
                        swap(puzzle[i][j], puzzle[i][j+k]);
                        break;
                    }
                }
            }
        }
    }
}

int get_score() {
    int res = 0;
    res += calc_score();
    // ここで穴だらけの2次元配列がもらえるので左に詰める
    shift_left();
    return res;
}

int main() {
    while(1) {
        cin >> h;
        if(h == 0) break;
        memset(puzzle, 0, sizeof(puzzle));
        vector< vector<int> > inpuzzle(5, vector<int>(h, 0));
        for(int j = 0; j < h; ++j) {
            for(int i = 0; i < 5; ++i) {
                cin >> inpuzzle[i][j];
            }
        }
        for(int i = 0; i < 5; ++i) reverse(inpuzzle[i].begin(), inpuzzle[i].end());
        for(int i = 0; i < 5; ++i) {
            for(int j = 0; j < h; ++j) {
                puzzle[i][j] = inpuzzle[i][j];
            }
        }
        // 左を1番下とした2次元配列で用意
        // cout << "map" << endl;
        // print_p();

        // 消滅がなくなるまでループを回す
        int now = -1;
        int sum = 0;
        while(now != 0) {
            now = get_score();
            sum += now;
            // cout << "now " << now << endl;
            // print_p();
        }
        cout << sum << endl;
    }
}
