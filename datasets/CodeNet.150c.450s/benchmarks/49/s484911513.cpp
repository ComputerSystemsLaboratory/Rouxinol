#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define sort(v,n) sort(v,v+n);
#define vsort(v) sort(v.begin(),v.end());
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
typedef pair<int,int> p;
typedef pair<ll,ll> lp;
bool is_uruu(int y) {
        return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}
const ll MOD=1e9+7;
//---------------------------------------------------------------------------//
int n;
int a[10000];
int main(){
        while(1) {
                cin>>n;
                if(n==0) {
                        return 0;
                }
                for(int i=0; i<n; i++) {
                        cin>>a[i];
                }
                int sum=0;
                sort(a,n);
                for(int i=1; i<n-1; i++) {
                        sum+=a[i];
                }
                cout<<sum/(n-2)<<endl;
                n=0;
        }
}