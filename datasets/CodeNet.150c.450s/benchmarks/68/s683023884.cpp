#include <bits/stdc++.h>
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
#define be(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)return 0;
        vector<int>a(n);
        REP(i,n)cin>>a[i];
        sort(a.begin(),a.end());
        vector<int>s(n-1);
        REP(i,n-1)s[i]=abs(a[i]-a[i+1]);
        sort(s.begin(),s.end());
        cout<<s[0]<<endl;
    }
}
