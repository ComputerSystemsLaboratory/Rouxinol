#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int memo[1500000];

int main()
{
    int n,m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        
        vector<int> H(n),W(m);
        rep(i,n) cin >> H[i];
        rep(i,m) cin >> W[i];

        vector<int> v;
        rep(i,n) {
            int sum = 0;
            REP(j,i,n) {
                sum += H[j];
                v.push_back(sum);
            }
        }

        vector<int> t;
        rep(i,m) {
            int sum = 0;
            REP(j,i,m) {
                sum += W[j];
                t.push_back(sum);
            }
        }

        memset(memo,0,sizeof(memo));
        rep(i,t.size()) {
            memo[t[i]]++;
        }

        int ans = 0;
        rep(i,v.size()) {
            ans += memo[v[i]];
        }

        cout << ans << endl;
    }

    return 0;
}