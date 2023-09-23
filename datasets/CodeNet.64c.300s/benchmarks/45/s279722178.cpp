#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n,m,p;
    while(cin>>n>>m>>p,n){
        int x;
        double res=0,a;
        REP(i,n){
            cin >> x;
            res+=x*100;
            if(i==m-1)a=x;
        }

        res*=(100-p);
        res/=100;
        int ans=res/a;
        if(a==0)cout << 0 << endl;
        else cout << ans << endl;

    }
}

