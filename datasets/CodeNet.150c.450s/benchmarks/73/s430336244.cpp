#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <tuple>
#include <bitset>
#include <functional>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 2147483647;
const int MOD = 1e9+7;

template <typename T>
class segment_tree{
    private:
        static int calc_size(int n){
            int m = 1;
            while(m < n){
                m *= 2;
            }
            return m;
        }

        T query(int s, int t, int i, int l, int r) const {
            if(r <= s || t <= l){
                return init;
            }

            if(s <= l && r <= t){
                return node[i];
            }

            int m = l + (r - l) / 2;
            T vl = query(s, t, i * 2 + 1, l, m);
            T vr = query(s, t, i * 2 + 2, m, r);
            return f(vl, vr);
        }

    public:
        int n;
        vector<T> node;
        T init;
        function<T(T, T)> f;

        segment_tree(int n, T init, function<T(T, T)> f)
            : n(calc_size(n)), node(calc_size(n) * 2, init), init(init), f(f){}

        void update(int i, const T& x){
            i += (n - 1);
            node[i] += x;
            while(i > 0){
                i = (i - 1) / 2;
                node[i] = f(node[2*i+1], node[2*i+2]);
            }
        }

        T query(int s, int t) const {
            return query(s, t, 0, 0, n);
        }
};

signed main(){
    int n, q;
    cin >> n >> q;

    segment_tree<int> st(n+1, 0, [](int a, int b){return a+b;});

    rep(i, q){
        int com, x, y;
        cin >> com >> x >> y;

        if(com == 0){
            st.update(x, y);
        }

        if(com == 1){
            cout << st.query(x, y+1) << endl;
        }
    }

    return 0;
}

