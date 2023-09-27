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

int n;

int calc(int s, int a[], int b[]){
    if(b[s] != 0) {
        return b[s];
    }

    if(s == n-1) {
        return b[n-1] = max(0, a[n-1]);
    }
    return b[s] = max(a[s]+calc(s+1,a,b), 0);
}

int main() {
    while(1) {
        int a[5000] = {};
        int b[5000] = {};
        bool f = false;
        int max = -100000;
        cin >> n;
        if(n == 0) {
            break;
        }
        rep(i,n) {
            cin >> a[i];
            if(a[i] >= 0 && f == false) {
                f = true;
            }
        }

        if(f == false) {
            rep(i,n){
                if(a[i] > max) {
                    max = a[i];
                }
            }
            cout << max << endl;
            continue;  
        }

        calc(0,a,b);
        FOR(i,0,n) {
            if(b[i] > max) {
                max = b[i];
            }
        }
        cout << max << endl;
    }
	return 0;
}