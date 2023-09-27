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
    int n,q;
    queue<int> Qi;
    queue<string> Qs;
    cin >> n >> q;
    rep(i,n) {
        string s; 
        int t;
        cin >> s >> t;
        Qi.push(t); 
        Qs.push(s);
    }
    int t = 0;       
    while(!Qi.empty ()) {
        int q1 = Qi.front();
        Qi.pop();
        string q2 = Qs.front();
        Qs.pop();
        if(q1 > q) {
           q1 -= q; 
           t += q;
           Qi.push(q1);
           Qs.push(q2);
        } else {
            t += q1;
            cout << q2 << " " << t << endl;
        }
    }
	return 0;
}