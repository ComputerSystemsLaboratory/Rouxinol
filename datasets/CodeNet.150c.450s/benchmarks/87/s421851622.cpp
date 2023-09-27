#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;


int main() {
    ios_base::sync_with_stdio(false);

    while (1) {
        int h;
        cin >> h;
        if (h==0) break;
        vector<vector<int>> t(h,vector<int>(6));
        rep(i,h) {
            rep(j,5) cin >> t[i][j];
        }
        int ans=0,dans=1;
        while (dans>0) {
            dans=0;
            rep(i,h) {
                int cnt=1;
                rep(j,5) {
                    if (t[i][j+1]==t[i][j]) ++cnt;
                    else {
                        if (cnt>=3) {
                            dans+=t[i][j]*cnt;
                            rep(k,cnt) t[i][j-k]=0;
                        }
                        cnt=1;
                    }
                }
            }
            rep(j,5) {
                vector<int> a;
                rep(i,h) {
                    if (t[i][j]!=0) a.push_back(t[i][j]);
                }
                rep(i,h-a.size()) t[i][j]=0;
                rep(i,a.size()) t[i+h-a.size()][j]=a[i];
            }
            ans+=dans;
        }
        cout << ans << endl;
    }
    
    

    return 0;   
}

