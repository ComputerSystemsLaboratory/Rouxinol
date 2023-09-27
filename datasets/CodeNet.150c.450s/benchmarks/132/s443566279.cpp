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
int n,b;
int main(){
        while(1) {
                cin>>n>>b;
                if(n==0) return 0;
                int index=0;
                int s[n];
                for(int i=0; i<n; i++) {
                        s[i]=0;
                }
                int stone=b;
                while(1) {
                        if(stone!=0) {
                                stone--;
                                s[index]+=1;
                        }else if(stone==0) {
                                stone+=s[index];
                                s[index]=0;
                        }
                        if(s[index]==b) {
                                break;
                        }
                        if(index==n-1) {
                                index=0;
                        }else{
                                index++;
                        }
                }
                cout<<index<<endl;
        }
}