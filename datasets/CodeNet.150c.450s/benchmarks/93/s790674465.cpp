#include<bits/stdc++.h>
using namespace std;
#define pfc(x) printf("Case %d: ",x)
#define sf1(x) scanf("%lld",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define sf4(x,y,z,m) scanf("%d%d%d%d",&x,&y,&z,&m)
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define pii pair<long long,long long>
#define pb push_back
int n,flag;
struct lol
{
    char ch;
    long long num;
} a[1000005];
int part(int p,int r)
{
    long long x=a[r].num;
    long long i=p-1;
    for(int j=p; j<r; j++)
    {
        if(a[j].num<=x)
        {
            i++;
            swap(a[i].num,a[j].num);
            char tp;
            tp=a[i].ch;
            a[i].ch=a[j].ch;
            a[j].ch=tp;

        }
    }
    swap(a[i+1].num,a[r].num);
    char tp;
    tp=a[i+1].ch;
    a[i+1].ch=a[r].ch;
    a[r].ch=tp;
    return i+1;
}
void quick(int p,int r)
{
    int q;
    if(p>=r)return ;
    if(p<r)q=part(p,r);
    quick(p,q-1);
    quick(q+1,r);
}
int main()
{
    int n;
    cin>>n;
    flag=0;
    map<long long,vector<char> >mp,rp;
    map<int,int>rr;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].ch>>a[i].num;
        mp[a[i].num].pb(a[i].ch);
        if(rr[a[i].num]==0)v.pb(a[i].num);
        rr[a[i].num]=1;

    }
    quick(0,n-1);
    flag=0;
    for(int i=0; i<n; i++)
    {
        rp[a[i].num].pb(a[i].ch);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<mp[v[i]].size();j++)
        {
            //cout<<mp[v[i]][j]<<' '<<rp[a[i].num][j]<<endl;
            if(mp[v[i]][j]!=rp[v[i]][j])flag=1;
        }
    }

    if(flag==0)printf("Stable\n");
    else
    {
        printf("Not stable\n");
    }
    for(int i=0; i<n; i++)printf("%c %lld\n",a[i].ch,a[i].num);
    return 0;
}