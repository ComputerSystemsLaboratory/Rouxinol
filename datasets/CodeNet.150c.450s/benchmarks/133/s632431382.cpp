#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
using ll = long long;
int main()
{
    ll d;
    cin >> d;
    vector<ll> c;
    vector<vector<ll>> s;
    vector<ll> t;
    vector<ll> last(26, 0);

    for (ll i = 0; i < 26; i++) {
        ll tmp;
        cin >> tmp;
        c.push_back(tmp);
    }
    for (ll i = 0; i < d; i++) {
        vector<ll> tmp_v;
        for (ll j = 0; j < 26; j++) {
            ll tmp;
            cin >> tmp;
            tmp_v.push_back(tmp);

        }
        s.push_back(tmp_v);
    }

    for (int i = 0; i < d; i++) {
        ll tmp;
        cin >> tmp;
        t.push_back(tmp);
    }
    
    ll sat = 0;
    for (ll i = 0; i < d; i++) {
        ll contest = t[i] - 1;
        sat += s[i][contest];
        last[contest] = i + 1;
        for (ll j = 0; j < 26; j++) {
            sat -= (i + 1 - last[j]) * c[j];
        }
        
        cout << sat << endl;
    }

    return 0;

}

