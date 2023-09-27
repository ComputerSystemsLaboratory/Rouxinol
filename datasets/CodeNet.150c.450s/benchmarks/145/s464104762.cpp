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
    map<string,int> M;
    string tmp,rst,rst2;
    int max,maxl;
    while(cin >> tmp) {
        M[tmp] += 1;
        if(max < M[tmp]) {
            max = M[tmp];
            rst = tmp;
        }
        if(tmp.length() > maxl) {
            rst2 = tmp;
            maxl = tmp.length();
        }
    }
    cout << rst << " " << rst2 << endl;
	return 0;
}