#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <limits>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <unordered_set>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr << #x << ": " << x << endl
#define debug2(x,y) cerr << #x << ": " << x << ", " << #y << ": " << y << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
template<class T> using vv=vector< vector<T> >;
typedef deque<int> di;
typedef deque< deque<int> > ddi;


int main() {
    int n;
    cin >> n;
    rep(i,n) {
        unordered_set<string> S;
        string tmp;
        cin >> tmp;
        FOR(j,1,tmp.size()){
            string s1[2];
            s1[0] = tmp.substr(0, j);
            s1[1] = s1[0];
            reverse(s1[0].begin(),s1[0].end());
            string s2[2];
            s2[0] = tmp.substr(j, tmp.size()-j);
            s2[1] = s2[0];
            reverse(s2[0].begin(),s2[0].end());
            rep(k,2) {
                rep(l,2) {
                    string s = s1[k] +s2[l];
                    S.insert(s);
                    s = s2[l] + s1[k];
                    S.insert(s);
                }
            }
        }
        cout << S.size() << endl;
    }

	return 0;
}