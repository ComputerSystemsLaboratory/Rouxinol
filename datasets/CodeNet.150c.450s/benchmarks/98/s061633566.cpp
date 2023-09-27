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
#include <array>
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
    while(1) {
        int n,m;
        cin >> n >> m;
        if(n == 0 && m == 0) {
            break;
        }
        int s[200];    
        rep(i, n + m) {
            cin >> s[i];
        }
        int taro[n], hanako[m];
        int taros = 0, hanakos = 0;
        rep(i,n){
            taro[i] = s[i];    
            taros += s[i];
        }

        rep(i,m){
            hanako[i] = s[i+n];
            hanakos += s[i+n];
        }
        
        sort(taro, taro + n); 
        sort(hanako, hanako + m);

        int dif = taros - hanakos;
        if(dif % 2 == 1) {
            cout << "-1" << endl;    
            continue;
        }

        int sum = 200;
        int t = -1 ,h = -1;
        for(int i = n - 1; i > -1; i--) {
            rep(s,m) {
                if((taro[i] - hanako[s]) * 2 == dif) {
                    int tmp = taro[i] + hanako[s];
                    if(sum > tmp) {
                        sum = tmp;
                        t = taro[i];
                        h = hanako[s]; 
                    }
                }
            }
        }

        if(t != -1) {
            cout << t << " " <<  h << endl;
        } else {
            cout << "-1" << endl;
        }
        
    }
	return 0;
}