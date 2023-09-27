#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <cmath>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
const double pi=acos(-1);

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int c(int x,int y,int z){
    set<int> st;
    st.insert(x);
    st.insert(y);
    st.insert(z);
    if(st.size()==1) return 1;
    if(st.size()==2) return 3;
    if(st.size()==3) return 6;

}
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int ans=0;
        for(int x=1;x*x<n;x++){
            for(int y=x;y*y<n;y++){
                for(int z=y;z*z<n;z++){
                    if(x*x+y*y+z*z+x*y+y*z+z*x>i) break;
                    if(x*x+y*y+z*z+x*y+y*z+z*x==i) ans+=c(x,y,z);
                }
            }
        }
        cout << ans << endl;
    }
}