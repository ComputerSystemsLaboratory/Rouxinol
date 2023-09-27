#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#define ll long long int
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=1;i<=(n);i++)
using namespace std;

int mx8[] = {0,0,1,-1,-1,1,-1,1};
int my8[] = {-1,1,0,0,-1,-1,1,1};
int mx4[] = {1,-1,0,0};
int my4[] = {0,0,-1,1};
const int MOD = 1000000007;

ll y[10000005];

int main() {
    int d; cin >> d;
    vector<int> c(26);
    rep(i,26) cin >> c[i];
    int s[d][26];
    rep(i,d) rep(j,26) cin >> s[i][j];
    int las[26];
    rep(i,26) las[i] = 0;
    int man = 0;
    rep(i,d){
        int t; cin >> t;
        t--;
        man += s[i][t];
        int human = 0;
        las[t] = i+1;
        rep(j,26){
            human += c[j] * (i+1-las[j]);
        }
        man -= human;
        cout << man << endl;
    }

}


