#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

int main() {
    int d;
    cin >> d;
    vector<vector<int>> s(d+1, vector<int>(26+1, 0));
    vector<int> c(26+1);
    for(int i = 0; i < 26; i++) cin >> c[i];
    for(int i = 0; i < d; i++) {
        for(int j = 0; j < 26; j++) {
            cin >> s[i][j];
        }
    }
    /////////////////
    vector<int> t(d);
    for(int i = 0; i < d; i++) cin >> t[i];
    vector<ll> ans(d, 0);
    vector<ll> last(26+1, 0);
    ll v = 0;
    ll tmp = 0;
    for(int i = 0; i < d; i++) {
        v += s[i][t[i]-1];
        last[t[i]-1] = i+1;
        for(int j = 0; j < i; j++) {
            //t[i]-1
            /*
            if(last[t[i]-1] == 0) {
                ans[i] += s[i][t[i]-1];
                last[t[i]-1] = ans[i];
            }
            */
            //ans[i] += s[i][t[i]-1];
            //v += s[i][t[i]-1];
            //last[t[i]-1] = ans[i];
            //last[t[i]-1] = v;
            //cout << j << endl;
        }
        //down
        for(int j = 0; j < 26; j++) {
            //ans[i] -= c[j]*((i+1)-last[j]);
            v -= c[j]*((i+1)-last[j]);
        }
        cout << v << endl;
    }
    /*
    for(int i = 0; i < d; i++) {
        cout << ans[i] << endl;
    }
    */
    return 0;
}