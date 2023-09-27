#include <bits/stdc++.h>
#define inf (1<<29)
#define sq(n) ((n)*(n))
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define MEMSET(a) memset(a,0,sizeof(a))
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define int long long
using namespace std;
using ll = long long;

signed main(){
    int m;
    cin>>m;
    rep(i,m){
        set<string> set;
        string s;
        cin>>s;
        int l=s.length();
        rep(i,l-1){
            string a=s.substr(0,i+1);
            string b=s.substr(i+1);
            set.insert(a+b);
            string c=a;
            reverse(c.begin(),c.end());
            string d=b;
            reverse(d.begin(),d.end());
            set.insert(a+d);
            set.insert(c+b);
            set.insert(c+d);
            set.insert(b+a);
            set.insert(d+a);
            set.insert(b+c);
            set.insert(d+c);
        }
        cout<<set.size()<<endl;
    }
    return 0;
}
