// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// using Bint = mp::cpp_int;
// using Real = mp::number<mp::cpp_dec_float<1024>>;

int main(){
    ll ans = 0;
    vector<int> S;
    vector<P> Area;
    char ch;

    for(int i = 0; cin >> ch; i++){
        if(ch == '\\') S.push_back(i);
        else if(ch == '_') continue;
        else {
            if(S.size() == 0) continue;
            int tmp = S.back();
            S.pop_back();
            int tmp_area = i - tmp;
            ans += tmp_area;

            while(Area.size() > 0 && Area.back().first > tmp){
                tmp_area += Area.back().second;
                Area.pop_back();
            }
            Area.push_back(P(tmp, tmp_area));
        }
    }

    cout << ans << endl;
    cout << Area.size();
    rep(i, Area.size()){
        cout << ' ' << Area[i].second;
    }
    cout << endl;
}
