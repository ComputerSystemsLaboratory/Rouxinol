#include <bits/stdc++.h>
using namespace std;

struct BIT
{
    int N;
    vector<int> bit;

    BIT(int n):N(n)
    {
        bit.assign(N+1,0);
    }

    void add(int k,int x)
    {
        for(int i=k; i<=N; i+=i&-i)
        {
            bit[i] += x;
        }
    }

    int sum(int k)
    {
        int ret = 0;

        for(int i=k; i>0; i-=i&-i)
        {
            ret += bit[i];
        }

        return ret;
    }
};

int main()
{
    int N,Q;
    cin >> N >> Q;

    BIT bit(N);

    for(int i=0; i<Q; i++)
    {
        int c,x,y;
        cin >> c >> x >> y;

        if(c){
            int s1 = bit.sum(y),
                s2 = x==1 ? 0 : bit.sum(x-1);

            cout << s1 - s2 << endl;
        }else{
            bit.add(x,y);
        }
    }
}