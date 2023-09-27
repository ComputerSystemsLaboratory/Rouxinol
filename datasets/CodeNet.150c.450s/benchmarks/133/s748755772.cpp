#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <vector>
#include <numeric>
#include<string>
#include <map>

using namespace std;

#define ll long long
#define rep(cnt,a,n) for(ll cnt=a;cnt<n+a;cnt++) //aから始めてn回ループ
#define vector2(type,name,a,b) vector<vector<type>> name(a, vector<type>(b))
#define PI 3.141592653589793

/*vector<ll> c;
vector<vector<ll>> s;
vector<ll>last;
vector<ll>t;
vector<bool>did;*/

ll Score(ll d);
ll Score(ll d, vector<vector<ll>> &s, vector<ll> &c, vector<ll> &last, vector<ll> &t, vector<bool> &did) {
    ll S = 0;
    ll C;
    
        S += s.at(d).at(t.at(d));
        did.at(t.at(d)) = 1;
        
        rep(cnt, 0, 26) {
            last.at(cnt)++;
        }
        last.at(t.at(d)) = 0;
        rep(cnt, 0, 26) {
                S -= c.at(cnt) * last.at(cnt);
        }
    
    return S;
}



int main() {
    ll d;
    cin >> d;
    vector<ll> c(26);
    vector2(ll, s, d, 26);
    rep(cnt, 0, 26) {
        cin >> c.at(cnt);
    }
    rep(i,0,d){
        rep(cnt, 0, 26) {
            cin >> s.at(i).at(cnt);
        }
    }
    vector<ll> last(26,0);
    vector<ll> t(d,0);
    vector<bool> did(26);
    rep(cnt, 0, d) {
        cin >> t.at(cnt);
        t.at(cnt)--;
    }
    ll S = 0;
    rep(cnt, 0, d) {
        S += Score(cnt, s, c, last, t, did);
        cout << S << endl;
    }
    return 0;
}