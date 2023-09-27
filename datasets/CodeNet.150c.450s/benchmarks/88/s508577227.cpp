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
    int h,w;
    while(cin>>h>>w)
    {
        if(h==0)return 0;
        int s=h*h+w*w;
        int hh=h+1;
        bool flag=0;
        rep(i,s,22501)
        {
            if(i!=s)hh=1;
            for(hh;hh<=150;hh++)
            {
                int hhh=hh*hh;
                int ss=i-hhh;
                int ww=sqrt(ss);
                if(hh>=ww)break;
                if(ww*ww==ss){cout<<hh<<" "<<ww<<endl;flag=1;break;}
            }
            if(flag)break;
        }
    }
}
