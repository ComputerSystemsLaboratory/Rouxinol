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
const double PI=acos(-1.0);
//---------------------------------------------------------------------------//
int n,r,p1,c;
int huda[51],huda2[51];
int main(){
        while(1) {
                cin>>n>>r;
                if(n==0 && r==0) {
                        return 0;
                }
                for(int i=0; i<n; i++) {
                        huda[i]=n-i;
                        huda2[i]=huda[i];
                }
                for(int i=0; i<r; i++) {
                        cin>>p1>>c;
                        for(int j=0; j<c; j++) {
                                huda[j]=huda[p1-1+j];
                        }
                        for(int j=0; j<p1-1; j++) {
                                huda[c+j]=huda2[j];
                        }
                        for(int j=0; j<51; j++) {
                                huda2[j]=huda[j];
                        }
                }
                cout<<huda[0]<<endl;
        }
}