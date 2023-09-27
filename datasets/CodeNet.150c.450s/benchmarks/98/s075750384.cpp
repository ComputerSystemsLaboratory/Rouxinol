#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[101],b[101];
int main(){
    int n,m;
    while(cin>>n>>m,n|m){
        int s1=0,s2=0;
        rep(i,n){
            cin>>a[i];
            s1+=a[i];
        }
        rep(i,m){
            cin>>b[i];
            s2+=b[i];
        }
        int sub=s1-s2;
        int ans1=-1,ans2=-1,mn=1000100010;
        rep(i,n)rep(j,m){
            if(sub==(a[i]-b[j])*2){
                if(a[i]+b[j]<mn) mn=a[i]+b[j],ans1=a[i],ans2=b[j];
            }
        }
        if(mn==1000100010) cout<<-1<<endl;
        else cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}

