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
    int n, p;
    cin >> n >> p;
    if(!n && !p) return false;

    vector<int> hand(n,0);
    int i=-1, wan=p;
    do{
        i = (i+1)%n;
        if(wan-- == 0) { wan = hand[i]; hand[i] = 0; }
        else{ hand[i]++; }
    }while(hand[i] != p);
    cout << i << endl;
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(solve());
}