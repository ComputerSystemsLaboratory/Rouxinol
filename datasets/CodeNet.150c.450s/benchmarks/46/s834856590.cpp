#include <algorithm>
#include <iostream>
#include <string>
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
typedef vector<vector<int>> vvi;
template<class T> using vv=vector<vector<T>>;
typedef deque<int> di;
typedef deque<deque<int>> ddi;


int main() {
    int n,x;
    while(true) {
        cin >> n >> x;
        if(n == 0 && x == 0) {
            return 0;
        }
        int c;   
        c = x%3 == 0 ? x/3: x/3 +1;
        int sum  =0;
        FOR(i,c,n+1){
            int upb,unb;
            upb = (x-i-1 < i-1) ? x-i-1: i-1;
            unb = ((x-i) %2 ==0) ? (x-i)/2 + 1 : (x-i+1)/2;
            if(unb > upb) {
                continue;
            }
            sum += upb - unb + 1;
        }
        cout << sum << endl;
    }
	return 0;
}