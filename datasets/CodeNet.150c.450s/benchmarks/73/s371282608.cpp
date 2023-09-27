#include <bits/stdc++.h>

using namespace std;
int n,q;
int niz[100050];
int bit[100050];
void update(int a, int b)
{
    while(a<=n)
    {
        bit[a]+=b;
        a=a+(a&-a);
    }
}
int query(int a)
{
    int res=0;
    while(a>0)
    {
        res+=bit[a];
        a=a-(a&-a);
    }
    return res;
}
int main()
{
    cin>>n>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0)
            update(b,c);
        else
            cout<<query(c)-query(b-1)<<endl;
    }
    return 0;
}