#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n,m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        
        int ans = 0;
        vector<pair<int,int> > v(n);
        rep(i,n) {
            cin >> v[i].second >> v[i].first;
            ans += v[i].first * v[i].second;
        }

        sort(v.begin(),v.end(),greater<pair<int,int> >());
        
        rep(i,n) {
            if(m == 0) break;
            if(m - v[i].second >= 0) {
                ans -= v[i].first * v[i].second;
                m -= v[i].second;
            } 
            else {
                ans -= v[i].first * m;
                m = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}