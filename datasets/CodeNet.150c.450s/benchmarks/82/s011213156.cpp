#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

struct dice{
    int l[6];
    void roll(int a, int b, int c, int d){
        int t = l[a];
        l[a] = l[b];
        l[b] = l[c];
        l[c] = l[d];
        l[d] = t;}
    void roll_x() {roll(0, 2, 5, 3);}
    void roll_y() {roll(0, 1, 5, 4);}
    void roll_z() {roll(1, 2, 4, 3);}
    int find_l3(int a, int b){
        REP(i, 4) {
            roll_x();
            REP(j, 4) {
                roll_y();
                REP(k, 4) {
                    roll_z();
                    if (l[0] == a && l[1] == b) return l[2];}}}
    }
};

int main(){
    dice d;
    REP(i, 6) cin >> d.l[i];
    int q; cin >> q;
    REP(i, q) {
        int a, b; cin >> a >> b;
        cout << d.find_l3(a, b) << endl;}
}