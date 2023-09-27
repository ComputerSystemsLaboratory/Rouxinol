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
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;

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

struct Node {int p, l, r;}; // parent, left, right

class Parse{
public:
    int N;
    int root;
    vector<Node> T;
    Parse(int n){
        N = n;
        T.resize(n, Node{-1, -1, -1});
    }
    
    void make_root(){
        rep(i, N){
            if (T[i].p == -1) {
                root = i;
            }
        }
    }
    
    void add(int p, int l, int r){
        T[p].l = l;
        T[p].r = r;
        if (l != -1) T[l].p = p;
        if (r != -1) T[r].p = p;
    }
    
    void parse(int u, int op){
        if (u == -1) {
            return;
        }
        if (op == 1) cout << " " << u; // pre
        parse(T[u].l, op);
        if (op == 2) cout << " " << u; // in
        parse(T[u].r, op);
        if (op == 3) cout << " " << u; // post
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    // source code
    int N;
    cin >> N;
    Parse P(N);
    rep(i, N){
        int p, l, r;
        cin >> p >> l >> r;
        P.add(p, l, r);
    }
    P.make_root();
    //cout << P.root << endl;
    cout << "Preorder" << endl;
    P.parse(P.root, 1);
    cout << endl;
    cout << "Inorder" << endl;
    P.parse(P.root, 2);
    cout << endl;
    cout << "Postorder" << endl;
    P.parse(P.root, 3);
    cout << endl;
    return 0;
}