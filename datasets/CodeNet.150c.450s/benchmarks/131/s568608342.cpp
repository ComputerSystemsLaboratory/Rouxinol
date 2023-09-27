#include <bits/stdc++.h>
using namespace std;
const long double PI = acos(-1);
typedef long long ll;
typedef pair<ll,ll> pll;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
#define ALL(a) begin(a),end(a)
#define sz(s) (s).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main()
{   
    int a,l;
    while(cin>>a>>l,a!=0,l!=0)
    {
        vector<int>t(0);
        t.push_back(a);
        vector<int>::iterator it;
        while(1)
        {
            string s=to_string(a);
            //cout<<s<<endl;
            //cout<<l<<" "<<s.size()<<endl;
            while(l!=s.size())s.push_back('0');
            //cout<<s<<endl;
            sort(ALL(s));
            string up=s;
            reverse(ALL(s));
            string down=s;
            int big=stoi(down);
            int small=stoi(up);
            int sum=big-small;
            it=find(ALL(t),sum);
            a=sum;
            if(it!=t.end())break;
            //if(sum==t[0])break;
            t.push_back(sum);
        }
        //cout<<t.size()<<endl;
        //for(auto g:t)cout<<g<<endl;
        int ans=0;
        for(auto x=t.begin();x!=it;++x,++ans);
        cout<<ans<<" "<<a<<" "<<t.size()-ans<<endl;
    }
}
