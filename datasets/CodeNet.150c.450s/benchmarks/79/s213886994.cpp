#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define endl '\n'
const int INF = (1 << 30);
using namespace std;
typedef long long int ll;

bool solve(){
    int n,r;
    cin >> n >> r;
    if(!n&&!r) return false;
    int deck[n], deck_[n];
    REP(i,n){ deck[i] = deck_[i] = n-i; }
    REP(ki,r){
        int p, c;
        cin >> p >> c;
        p--;
        REP(ci,c){
            deck_[ci] = deck[p+ci];
        }
        REP(i,n-c){
            deck_[c+i] = deck[i];
        }
        REP(i,n-p-c){
            deck_[p+c+i] = deck[p+c+i];
        }
        REP(i,n){
            deck[i] = deck_[i];
        }
    }
    cout << deck[0] << endl;
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(solve());
}