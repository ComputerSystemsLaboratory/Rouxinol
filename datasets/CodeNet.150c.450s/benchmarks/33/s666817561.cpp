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
	int x,y,s;
	while(true) {	
		cin >>  x >> y >> s;
        if(x == 0 && y == 0 && s == 0){
            return 0;
        }

        int max = 0, a = 0, as = 0;
        FOR(i, 1, (s / 2) + 1){
            if(((s - i * (100+x) / 100) + 1) * 100 % (100+x) == 0) {
                a = ((s-i * (100 +x) /100)) * 100 / (100+x);
            } else {
                a = ((s-i * (100+x) /100)+1 ) * 100/ (100+x);
            }
            as = a * (100 + y) /100 + i * (100+y) /100;
            if((a * (100+x) /100 + i *(100+x)/100) != s) {
                continue;
            }
            if( max < as) {
                max = as;
            }
        }
        cout << max << endl;;
	}
    return 0;
}