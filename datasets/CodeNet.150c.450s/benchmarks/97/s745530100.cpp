#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

bool pairCompare(const P &fItem, const P &sItem)
{
    return fItem.second < sItem.second;
}


int main(){
    // (x,y)
    int n;
    while(cin >> n,n) {
        vector< P > v;
        v.pb(mp(0,0));
        int id,dig;
        rep(i,n - 1){
            cin >> id >> dig;
            if(dig == 0) {
                v.pb(mp(v[id].first - 1,v[id].second));
            }else if(dig == 1) {
                v.pb(mp(v[id].first,v[id].second - 1));

            }else if(dig == 2) {
                v.pb(mp(v[id].first + 1,v[id].second));

            }else{
                v.pb(mp(v[id].first,v[id].second + 1));
            }
        }
        sort(v.begin(),v.end());
        cout << abs(v[0].first - v[n - 1].first) + 1 << " ";

        sort(v.begin(), v.end(),pairCompare);
        cout << abs(v[0].second - v[n - 1].second) + 1 << endl;
    }
    return 0;

}

