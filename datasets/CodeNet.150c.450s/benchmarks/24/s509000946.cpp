#include <iostream>
#include <sstream>
#include <fstream>

#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cctype>

#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <cmath>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

template<typename T> ostream& operator<<(ostream& os, const vector<T>& v){
    os << "{ ";
    for(typename vector<T>::const_iterator it=v.begin(); it!=v.end(); ++it)
        os << '\"' << *it << '\"' << (it+1==v.end() ? "" : ", ");
    os << " }";
    return os;
}

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define vv(type,w,h,init) vector<vector<type>>(h,vector<type>(w,init))
typedef vector<string> vs;
typedef long long ll;
typedef unsigned uint;
typedef unsigned long ul;
typedef unsigned long long ull;

#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define pb push_back
#define mp make_pair

struct E {
    int d,p;
};

void solve(int n, int m, vector<E>& es){
    int total = 0;
    rep(i,n) total += es[i].d*es[i].p;
    sort(all(es), [](const E& a, const E& b){
            return a.p > b.p;
        });

    int sum=0;
    rep(i,n){
        int take = min(m, es[i].d);
        sum += es[i].p*take;
        m -= take;
        if(m==0) break;
    }

    cout << total-sum << endl;
}

int main(){
    int n,m;
    while(cin>>n>>m, n!=0 || m!=0){
        vector<E> es(n);
        rep(i,n){
            scanf("%d %d", &es[i].d, &es[i].p);
        }
        solve(n,m,es);
    }
}