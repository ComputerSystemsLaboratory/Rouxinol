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
    int m,n1,n2;
    while(cin>>m>>n1>>n2)
    {
        if(m==0)return 0;
        vector<pair<int,int> >pp(m-1);
        //vector<int>p(m);
        int now,fo;
        cin>>now;
        REP(i,m-1)
        {
            fo=now;
            cin>>now;
            pp.push_back(make_pair(fo-now,i+1));
        }
        sort(pp.begin(),pp.end());
        reverse(pp.begin(),pp.end());
        //bool flag=0;
        REP(i,m-1)
        {
            if(pp.at(i).second>=n1&&pp.at(i).second<=n2)
            {
                cout<<pp.at(i).second<<endl;
                //flag=1;
                break;
            }
        }
    }
}
