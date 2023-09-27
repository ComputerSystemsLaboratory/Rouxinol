#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        int t[86500] = {0};
        rep(i,n){
            int h,m,s;
            char g;
            cin >> h >> g >> m >> g >> s;
            t[h * 3600 + m * 60 + s]+=1;
            cin >> h >> g >> m >> g >> s;
            t[h * 3600 + m * 60 + s]-=1;
        }
        int ans = 0, train = 0;
        rep(i,86500){
            train+=t[i];
            ans = max(ans, train);
        }
        cout << ans << endl;
    }
}