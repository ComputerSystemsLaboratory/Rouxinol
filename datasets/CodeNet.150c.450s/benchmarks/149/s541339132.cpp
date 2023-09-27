#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <string>

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define var auto
#define mod 1000000007
#define inf 2147483647
#define nil -1
typedef long long ll;

using namespace std;

inline int input(){
    int a;
    cin >> a;
    return a;
}

template <typename T>
inline void output(T a, int p) {
    if(p){
        cout << fixed << setprecision(p)  << a << "\n";
    }
    else{
        cout << a << "\n";
    }
}

// end of template

// union find
class union_find {
public:
    vector<int> parent, rnk;
    
    union_find(int n){
        parent.resize(n);
        rnk.resize(n, 0);
        rep(i, n){
            parent[i] = i;
        }
    }
    
    int root(int x){
        if (parent[x] == x) {
            return x;
        }
        else{
            return root(parent[x]);
        }
    }
    
    void unite(int x, int y){
        x = root(x);
        y = root(y);
        if (x == y) {
            return;
        }
        if (rnk[x] < rnk[y]) {
            parent[x] = y;
        }
        else{
            parent[y] = x;
            if (rnk[x] == rnk[y]) {
                rnk[x]++;
            }
        }
    }
    
    bool same(int x, int y){
        return root(x) == root(y);
    }
};



int main() {
    cin.tie(0);
    // source code
    int N, Q;
    cin >> N >> Q;
    union_find uf(N);
    
    rep(i, Q){
        int com, x, y; // com 0: unite 1: same
        cin >> com >> x >> y;
        if (com) {
            cout << (uf.same(x, y) ? 1 : 0) << endl;
        }
        else{
            uf.unite(x, y);
            
        }
    }
    
    
    return 0;
}