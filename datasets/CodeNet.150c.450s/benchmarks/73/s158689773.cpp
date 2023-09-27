
#include <bits/stdc++.h>
using namespace std;

int bit[234567];
int siz;
void init(int n)
{
    siz = 1;
    while(siz < n)siz *= 2;
    for(int i = 0;i <= siz;++i)
        bit[i] = 0;
}
void add(int i,int x)
{
    ++i;
    while(i <= siz)
    {
        bit[i] += x;
        i += (i & -i);
        //cerr << i << " " << bit[i] << endl;
    }
}
int sum(int i)
{
    int ans = 0;
    while(i > 0)
    {
        ans += bit[i];
        i -= (i & -i);
    }
    return ans;
}

int main()
{
    int n,q;
    cin >> n >> q;
    init(n);
    for(int i = 0;i < q;++i)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a == 0)
        {
            --b;
            add(b,c);
        }
        else
        {
            --b;--c;
            cout << sum(c + 1) - sum(b) << endl;
        }
    }
    return 0;
}