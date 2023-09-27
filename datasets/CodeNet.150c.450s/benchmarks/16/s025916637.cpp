#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

signed main() {
    string geo; cin >> geo;
    ll length = geo.size();
    ll sum = 0;
    stack<ll> s;
    stack< pair<ll,ll> > ans2;
    for( ll i = 0; i < length; i++ )
    {
        if(geo.at(i) == '\\') { s.push(i); }
        else if(geo.at(i) == '/' && !s.empty())
        {
            ll j = s.top(); s.pop();
            sum += i - j;
            ll a = i - j;
            while( !ans2.empty() && ans2.top().first > j )
            {
                a += ans2.top().second; ans2.pop();
            }
            ans2.push(make_pair(j,a));
        }
    }

    vector<ll> ans;
    while( !ans2.empty() ) { ans.push_back(ans2.top().second); ans2.pop(); }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for(int i = 0; i < ans.size(); i++ )
    {
        cout << ' ' << ans.at(i);
    }
    cout << endl;
    return 0;
}

