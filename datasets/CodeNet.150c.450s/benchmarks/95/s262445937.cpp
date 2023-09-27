#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)

int main(){
    int n;
    while(cin>>n&&n){
        vector<string> vs(n);
        rep(i,n)cin>>vs[i];
        
        int ans = 0;
        bool status = false;
        bool l=false, r=false;
        
        for(auto elm:vs){
            if(elm[1]=='u'){
                if(elm[0]=='l') l=true;
                else r=true;

                if(status==false && l && r){
                    status = true;
                    ans++;
                }

            }else{
                if(elm[0]=='l') l=false;
                else r=false;

                if(status==true && !l && !r){
                    status = false;
                    ans++;
                }

            }
        }
        cout<<ans<<endl;
    }
}