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
typedef long long ll;

using namespace std;

int inputValue(){
    int a;
    cin >> a;
    return a;
}

template <typename T>
void output(T a, int precision) {
    if(precision > 0){
        cout << fixed << setprecision(precision)  << a << "\n";
    }
    else{
        cout << a << "\n";
    }
}

// end of template
class rmq {
private:
    int n;
    int sz;
public:
    vector<ll> v;
    rmq(int a){
        n = 1;
        for(; n * 2 < a;){
            n *= 2;
        }
        sz = n * 2;
        v.resize(4 * n - 1, 0); // sum: assign 0 for all elements
    }
    
    void update(int i, ll x){
        i += sz - 1;
        v[i] += x; // sum
        while(i > 0){
            i = (i - 1) / 2;
            // v[i] = min(v[2 * i + 1], v[2 * i + 2]);
            v[i] = v[2 * i + 1] + v[2 * i + 2]; // sum
        }
    }
    
    ll query_(int a, int b, int k, int l, int r){
        if(r <= a || b <= l) return 0; // sum
        if(a <= l && r <= b) return v[k];
        else{
            ll vl = query_(a, b, k * 2 + 1, l, (l + r) / 2);
            ll vr = query_(a, b, k * 2 + 2, (l + r) / 2, r);
            return vl + vr; // sum
        }
    }
    
    ll query(int a, int b){
        return query_(a, b, 0, 0, sz);
    }
};

int main() {
    // source code
    int N = inputValue();
    int Q = inputValue();
    rmq r(N);
    
    rep(i, Q){
        int com = inputValue();
        if (com) { // add
            int x = inputValue();
            int y = inputValue();
            output(r.query(x - 1, y), 0);
        }
        else{ // getSum
            int x = inputValue();
            ll y = inputValue();
            r.update(x - 1, y);
            
            
        }
    }
    
    return 0;
}