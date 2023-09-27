#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[201];
int main(){
    int m,mx,mn;
    while(cin>>m>>mn>>mx,m){
        rep(i,m) cin>>a[i];
        sort(a,a+m,greater<int>());
        int cnt=0,x=0;
        FOR(i,mn-1,mx){
            if(x<=a[i]-a[i+1]) cnt=i,x=a[i]-a[i+1];
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
