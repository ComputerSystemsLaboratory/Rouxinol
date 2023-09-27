#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

typedef vector<int> vi;
typedef long long ll;

int main(){
    int n;
    while(cin >> n && n){
        vi v(n+1);
        rep(i,n){
            int x; cin >> x;
            v[i+1] = x;
            if(i!=0) v[i+1]+=v[i];
        }
        // rep(i,n+1){
        //     cout << v[i] << endl;
        // }
        ll ans=-(1<<30);
        for(int l=0; l<n; l++){
            for(int r=l+1; r<=n; r++){
                ans = max<ll>(ans, v[r]-v[l]);
            }
        }
        cout << ans << endl;
    }
}