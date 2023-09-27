#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define FOR(i, r, n) for (int i=(int)(r); i<=(int)(n); i++)
#define all(v) v.begin(), v.end()
#define INF 2147483647
#define INF64 9223372036854775807
#define MOD 1000000007

int main(){

    int d;cin>>d;
    vector<int> t(d+1), c(27);
    vector<vector<int>> s(d+1, vector<int>(27));
    FOR(i, 1, 26) cin>>c[i];
    FOR(i, 1, d) FOR(j, 1, 26) cin>>s[i][j];
    FOR(i, 1, d) cin>>t[i];
    vector<int> last(27, 0);

    int64_t v=0;

    FOR(day, 1, d){
        v+=(int64_t)s[day][t[day]];
        last[t[day]]=day;
        FOR(i, 1, 26){
            v-=(int64_t)c[i]*(day-last[i]);
        }

        cout<<v<<endl;

    } 

}